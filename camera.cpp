/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "camera.h"
#include "ui_camera.h"

#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QMediaMetaData>

#include <QMessageBox>
#include <QPalette>

#include <QtWidgets>

#include <QtTest/QTest>


//#define __DEBUG

#if (defined(Q_WS_MAEMO_6)) && QT_VERSION >= 0x040700
#define HAVE_CAMERA_BUTTONS
#endif

QByteArray Camera::m_defaultDevice = QByteArray();

Camera::Camera(QWidget *parent): QMainWindow(parent), ui(new Ui::Camera), camera(0),
                                imageCapture(0),  mediaRecorder(0),  isCapturingImage(false),
                                applicationExiting(false){
    ui->setupUi(this);

////---
    QByteArray cameraDevice;     //Camera devices:
    QActionGroup *videoDevicesGroup = new QActionGroup(this);
    QList< QByteArray > cams_arr = QCamera::availableDevices();
    QByteArray cam;
///----

    setWindowTitle("I'm watching you!");

  //  QDesktopWidget desktop; //Растягиваем окно под размер экрана
  //  int desktopHeight=desktop.geometry().height();
  //  int desktopWidth=desktop.geometry().width();
   // this->resize(desktopWidth,desktopHeight);
    //setGeometry(0,0,480,272);
    // setFixedSize(480,272);

    //or

    QRect screenres = QApplication::desktop()->screenGeometry(1);
    move(QPoint(screenres.x(), screenres.y()));

#ifndef __DEBUG
    showFullScreen();
    setWindowFlags(Qt::FramelessWindowHint);// убираем строку заголовка
#endif
   // ui->menubar->hide(); //Debug
    //asterisks will be shown when values are entered
    //ui->lineEdit_password->setEchoMode(QLineEdit::Password); //Debug


///////////////////error
   /* QWidget *centralWidget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout();
    centralWidget->setLayout(layout);
    QLineEdit *lineEdit = new QLineEdit(centralWidget);
        //Set QLineEdit Echo Mode Here so that
        //asterisks will be shown when values are entered
    lineEdit->setEchoMode(QLineEdit::Password);
       //Add to horizontal layout to center qLineEdit
    layout->addWidget(lineEdit);
    lineEdit->setFixedSize(300, 20);
    setCentralWidget(centralWidget);*/
/////////////////////////

ui->viewfinder_R->hide();
ui->viewfinder_L->hide();

ui->lineEdit_password->setAlignment(Qt::AlignVCenter);

//цвет не меняется
QPalette *pal = new QPalette();
pal->setColor(QPalette::Base,Qt::yellow);
pal->setColor(QPalette::Text,Qt::red);
ui->label_password->setPalette(*pal);


//auto commandLinkButton = new QCommandLinkButton( QCamera::deviceDescription( webCam ) );
//commandLinkButton->setProperty( "webCam", webCam );
//ui.verticalLayout->addWidget( commandLinkButton ); //отрисовка кнопочек

/*
echoLineEdit = new QLineEdit;
echoLineEdit->setFocus();
 QGroupBox *echoGroup = new QGroupBox(tr("Echo"));
QGridLayout *echoLayout = new QGridLayout;
 echoLayout->addWidget(echoLineEdit, 1, 0, 1, 2);
 QGridLayout *layout = new QGridLayout;
     layout->addWidget(echoGroup, 0, 0);
*/

/*
editPassword = new QLineEdit(this);
editPassword->setEchoMode(QLineEdit::Password);
editPassword->setInputMethodHints(Qt::ImhHiddenText| Qt::ImhNoPredictiveText|Qt::ImhNoAutoUppercase);
*/

///----
 if ( !cams_arr.contains( m_defaultDevice ) )
  {
        if ( cams_arr.count() == 0 )
        {
            QMessageBox::critical( this, "Error", "Web Cams are not found!" );
            deleteLater();
            return;
        }

    foreach(cam, cams_arr)
    {
        //создание меню выбора камер
        QString description = camera->deviceDescription(cam);
        QAction *videoDeviceAction = new QAction(description, videoDevicesGroup);

        videoDeviceAction->setCheckable(true);
        videoDeviceAction->setData(QVariant(cam));
        videoDeviceAction->setChecked(true);
        ui->menuDevices->addAction(videoDeviceAction);

       //начало создания кнопочек
    //    auto commandLinkButton = new QCommandLinkButton( QCamera::deviceDescription( webCam ) );
    //    commandLinkButton->setProperty( "webCam", webCam );
    //    connect( commandLinkButton, &QCommandLinkButton::clicked, [=]( bool )
     //            {
    //               m_defaultDevice = commandLinkButton->property( "webCam" ).toByteArray();
    //               m_selectDialog->accept();
    //              }
    //           );
       // select_ui.verticalLayout->addWidget( commandLinkButton ); //отрисовка кнопочек
 }// foreach end
}// if end
   connect(ui->lineEdit_password, SIGNAL(returnPressed()), SLOT(EnterPassword()));

/*
    connect(ui->action0, SIGNAL(triggered()), SLOT(CamDebug()));
    connect(ui->action1, SIGNAL(triggered()), SLOT(EnterPassword()));

    connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));

    delete imageCapture, mediaRecorder,camera; //удалить старые на всякий

    //todo выводить сообщение о нехватке камер/ дать возможность распределять какую - на что выводить
     if ( cams_arr.count() >= 1 )
     {
        CreateCameraDevice_L(cams_arr[0]);
     }

     if ( cams_arr.count() >= 2 )
     {
         CreateCameraDevice_R(cams_arr[1]);
     }*/
///------

}


Camera::~Camera()
{
    camera->stop();//TODO вырубать все (не 1)
    delete mediaRecorder;
    delete imageCapture;
    delete camera;
}


void Camera::textChangedSlot(QString text)
 {
 QMessageBox* box = new QMessageBox();
 box->setWindowTitle(QString("Hello"));
 box->setText(QString("Current Text:\""+text+"\""));
 box->show();
 };

void Camera::CamOn()
{
    QByteArray cameraDevice;     //Camera devices:
    QActionGroup *videoDevicesGroup = new QActionGroup(this);

    QList< QByteArray > cams_arr = QCamera::availableDevices();
    QByteArray cam;

   // if ( !cams_arr.contains( m_defaultDevice ) )
     //{
           if ( cams_arr.count() == 0 )
           {
               QMessageBox::critical( this, "Error", "Web Cams are not found!" );
               deleteLater();
               return;
           }

           /*
       foreach(cam, cams_arr)
       {
           //создание меню выбора камер
           QString description = camera->deviceDescription(cam);
           QAction *videoDeviceAction = new QAction(description, videoDevicesGroup);

           videoDeviceAction->setCheckable(true);
           videoDeviceAction->setData(QVariant(cam));
           videoDeviceAction->setChecked(true);
           ui->menuDevices->addAction(videoDeviceAction);

          /* //начало создания кнопочек
           auto commandLinkButton = new QCommandLinkButton( QCamera::deviceDescription( webCam ) );
           commandLinkButton->setProperty( "webCam", webCam );
           connect( commandLinkButton, &QCommandLinkButton::clicked, [=]( bool )
                    {
                      m_defaultDevice = commandLinkButton->property( "webCam" ).toByteArray();
                      m_selectDialog->accept();
                     }
                  );
          // select_ui.verticalLayout->addWidget( commandLinkButton ); //отрисовка кнопочек
        }

       */
   //}

     // connect(ui->lineEdit_password, SIGNAL(returnPressed()), SLOT(EnterPassword()));
         // connect(ui->action0, SIGNAL(triggered()), SLOT(CamDebug()));
      // connect(ui->action1, SIGNAL(triggered()), SLOT(EnterPassword()));
         connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));
         delete imageCapture, mediaRecorder,camera; //удалить старые на всякий

       //todo выводить сообщение о нехватке камер/ дать возможность распределять какую - на что выводить
        if ( cams_arr.count() >= 1 )
        {
           CreateCameraDevice_L(cams_arr[0]);
        }

        if ( cams_arr.count() >= 2 )
        {
            CreateCameraDevice_R(cams_arr[1]);
        }

}

void Camera::EnterPassword()
 {
    if(ui->lineEdit_password->text()=="admin") //if password correct
    {
        ui->label_password->setText("Принято!");
        Sleep(2000); //не работает
        ui->lineEdit_password->close();
        ui->label_password->close();

    ui->stackedWidget->setCurrentIndex(0);
    //CamDebug();

    ui->viewfinder_R->show();
    ui->viewfinder_L->show();
    //camera->start
    CamOn();
    }
    else if(ui->lineEdit_password->text()=="`")
    {
        ui->label_password->setText("Exit");//TODO Form may be closed
    }
    else //password incorrect
    {
        QPalette *pal = new QPalette();
        pal->setColor(QPalette::Base,Qt::yellow);
        pal->setColor(QPalette::Text,Qt::red);
        ui->label_password->setPalette(*pal);

        ui->label_password->setText("Пароль не верный, попробуйте ещё раз");
    }
 };

void Camera::CamDebug() //in file menu
{
    ui->viewfinder_R->show();
    ui->viewfinder_L->show();
}



void Camera::CreateCameraDevice_L(QByteArray &cameraDevice)
{delete imageCapture, mediaRecorder,camera; //удалить старые на всякий
    camera = new QCamera(cameraDevice); //создать новый
    camera->setViewfinder(ui->viewfinder_L);
    camera->start();
}

void Camera::CreateCameraDevice_R(QByteArray &cameraDevice)
{delete imageCapture, mediaRecorder,camera; //удалить старые на всякий
    camera = new QCamera(cameraDevice); //создать новый
    camera->setViewfinder(ui->viewfinder_R);
    camera->start();
}



void Camera::CreateNextCameraDevice(QAction *action)
{
    camera = new QCamera(action->data().toByteArray()); //создать новый
    camera->setViewfinder(ui->viewfinder_R);
    camera->start();
}


void Camera::updateCameraDevice(QAction *action)
{
    setCamera(action->data().toByteArray()); //динамически обноляет при  переключении
}
void Camera::configureCaptureSettings() //for settings dialog
{
   /* switch (camera->captureMode()) {
    case QCamera::CaptureStillImage:
        //configure();
        break;
    case QCamera::CaptureVideo:
        configureVideoSettings();
        break;
    default:
        break;
    }*/
}

void Camera::startCamera() //in file menu
{
    camera->start();
}
void Camera::stopCamera() //in file menu
{
    camera->stop();
}


//UNUSED

void Camera::setCamera(const QByteArray &cameraDevice)
{
    delete imageCapture; //удалить старые
    delete mediaRecorder;
    delete camera;

    camera = new QCamera(cameraDevice); //создать новый
    camera->setViewfinder(ui->viewfinder_L);

#ifdef __DEBUG
    camera->start();
#endif
}

void Camera::keyPressEvent(QKeyEvent * event)
{
    if (event->isAutoRepeat())
        return;

    switch (event->key()) {
    case Qt::Key_CameraFocus:
        displayViewfinder();
        camera->searchAndLock();
        event->accept();
        break;
    case Qt::Key_Camera:
        if (camera->captureMode() == QCamera::CaptureStillImage) {
            takeImage();
        } else {
            if (mediaRecorder->state() == QMediaRecorder::RecordingState)
                stop();
            else
                record();
        }
        event->accept();
        break;
    default:
        QMainWindow::keyPressEvent(event);
    }
}

void Camera::keyReleaseEvent(QKeyEvent *event)
{
    if (event->isAutoRepeat())
        return;

    switch (event->key()) {
    case Qt::Key_CameraFocus:
        camera->unlock();
        break;
    default:
        QMainWindow::keyReleaseEvent(event);
    }
}

void Camera::updateRecordTime()
{
    QString str = QString("Recorded %1 sec").arg(mediaRecorder->duration()/1000);
    //ui->statusbar->showMessage(str);
}

void Camera::processCapturedImage(int requestId, const QImage& img)
{
    Q_UNUSED(requestId);
   // QImage scaledImage = img.scaled(ui->viewfinder_R->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

    //ui->lastImagePreviewLabel->setPixmap(QPixmap::fromImage(scaledImage));

    // Display captured image for 4 seconds.
    displayCapturedImage();
    QTimer::singleShot(4000, this, SLOT(displayViewfinder()));
}

void Camera::configureVideoSettings()
{
   /* VideoSettings settingsDialog(mediaRecorder);

    settingsDialog.setAudioSettings(audioSettings);
    settingsDialog.setVideoSettings(videoSettings);
    settingsDialog.setFormat(videoContainerFormat);

    if (settingsDialog.exec()) {
        audioSettings = settingsDialog.audioSettings();
        videoSettings = settingsDialog.videoSettings();
        videoContainerFormat = settingsDialog.format();

        mediaRecorder->setEncodingSettings(
                    audioSettings,
                    videoSettings,
                    videoContainerFormat);
    }*/
}

void Camera::record()
{
    mediaRecorder->record();
    updateRecordTime();
}

void Camera::pause()
{
    mediaRecorder->pause();
}

void Camera::stop()
{
    mediaRecorder->stop();
}

void Camera::setMuted(bool muted)
{
    mediaRecorder->setMuted(muted);
}

void Camera::toggleLock()
{
    switch (camera->lockStatus()) {
    case QCamera::Searching:
    case QCamera::Locked:
        camera->unlock();
        break;
    case QCamera::Unlocked:
        camera->searchAndLock();
    }
}

void Camera::updateLockStatus(QCamera::LockStatus status, QCamera::LockChangeReason reason)
{
    QColor indicationColor = Qt::black;
/*
    switch (status) {
    case QCamera::Searching:
        indicationColor = Qt::yellow;
        //ui->statusbar->showMessage(tr("Focusing..."));
    //    ui->lockButton->setText(tr("Focusing..."));
        break;
    case QCamera::Locked:
        indicationColor = Qt::darkGreen;        
     //   ui->lockButton->setText(tr("Unlock"));
     //   ui->statusbar->showMessage(tr("Focused"), 2000);
        break;
    case QCamera::Unlocked:
        indicationColor = reason == QCamera::LockFailed ? Qt::red : Qt::black;
     //   ui->lockButton->setText(tr("Focus"));
        if (reason == QCamera::LockFailed)
       //     ui->statusbar->showMessage(tr("Focus Failed"), 2000);
    }
*/
  //  QPalette palette = ui->lockButton->palette();
  //  palette.setColor(QPalette::ButtonText, indicationColor);
  //  ui->lockButton->setPalette(palette);
}

void Camera::takeImage()
{
    isCapturingImage = true;
    imageCapture->capture();
}

void Camera::displayCaptureError(int id, const QCameraImageCapture::Error error, const QString &errorString)
{
    Q_UNUSED(id);
    Q_UNUSED(error);
    QMessageBox::warning(this, tr("Image Capture Error"), errorString);
    isCapturingImage = false;
}

void Camera::updateCaptureMode()
{
    /*int tabIndex = ui->captureWidget->currentIndex();
    QCamera::CaptureModes captureMode = tabIndex == 0 ? QCamera::CaptureStillImage : QCamera::CaptureVideo;

    if (camera->isCaptureModeSupported(captureMode))
        camera->setCaptureMode(captureMode);
*/
}

void Camera::updateCameraState(QCamera::State state)
{
    switch (state) {
    case QCamera::ActiveState:
        ui->actionStartCamera->setEnabled(false);
        ui->actionStopCamera->setEnabled(true);
     //   ui->captureWidget->setEnabled(true);
        ui->actionSettings->setEnabled(true);
        break;
    case QCamera::UnloadedState:
    case QCamera::LoadedState:
        ui->actionStartCamera->setEnabled(true);
        ui->actionStopCamera->setEnabled(false);
    //    ui->captureWidget->setEnabled(false);
        ui->actionSettings->setEnabled(false);
    }
}

void Camera::updateRecorderState(QMediaRecorder::State state)
{
    switch (state) {
    case QMediaRecorder::StoppedState:
     //   ui->recordButton->setEnabled(true);
    //    ui->pauseButton->setEnabled(true);
    //   ui->stopButton->setEnabled(false);
        break;
    case QMediaRecorder::PausedState:
     //   ui->recordButton->setEnabled(true);
     //   ui->pauseButton->setEnabled(false);
     //   ui->stopButton->setEnabled(true);
        break;
    case QMediaRecorder::RecordingState:
     //   ui->recordButton->setEnabled(false);
     //   ui->pauseButton->setEnabled(true);
     //   ui->stopButton->setEnabled(true);
        break;
    }
}

void Camera::setExposureCompensation(int index)
{
    camera->exposure()->setExposureCompensation(index*0.5);
}

void Camera::displayRecorderError()
{
    QMessageBox::warning(this, tr("Capture error"), mediaRecorder->errorString());
}

void Camera::displayCameraError()
{
    QMessageBox::warning(this, tr("Camera error"), camera->errorString());
}

void Camera::displayViewfinder()
{
    //ui->stackedWidget->setCurrentIndex(0);
}

void Camera::displayCapturedImage()
{
   // ui->stackedWidget->setCurrentIndex(1);
}

void Camera::readyForCapture(bool ready)
{
    //ui->takeImageButton->setEnabled(ready);
}

void Camera::imageSaved(int id, const QString &fileName)
{
    Q_UNUSED(id);
    Q_UNUSED(fileName);

    isCapturingImage = false;
    if (applicationExiting)
        close();
}

void Camera::closeEvent(QCloseEvent *event)
{
    if (isCapturingImage) {
        setEnabled(false);
        applicationExiting = true;
        event->ignore();
    } else {
        event->accept();
    }
}
