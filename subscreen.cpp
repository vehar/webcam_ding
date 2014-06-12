#include "subscreen.h"
#include "ui_subscreen.h"

//#include "videosettings.h"
//#include "imagesettings.h"

#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QMediaMetaData>

#include <QMessageBox>
#include <QPalette>

#include <QtWidgets>

#include <QtTest/QTest>

#define __DEBUG



Subscreen::Subscreen(QWidget *parent) :  QWidget(parent)
 {
 ui->setupUi(this);
 setWindowTitle("Subscreen");
 //QRect screenres = QApplication::desktop()->screenGeometry(1);
// move(QPoint(screenres.x(), screenres.y()));




#ifndef __DEBUG
    //showFullScreen();
   // setWindowFlags(Qt::FramelessWindowHint);// убираем строку заголовка
#endif
   // ui->menubar->hide(); //Debug
    //asterisks will be shown when values are entered
    //ui->lineEdit_password->setEchoMode(QLineEdit::Password); //Debug


}


Subscreen::~Subscreen()
{
   // delete ui;
   // camera->stop();//TODO вырубать все (не 1)
   // delete camera;
}


/*
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
*/
