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
#include "subscreen.h"

#include <QtWidgets>

#include <QApplication>
#include <QtGui>
#include <QObject>
#include <QTextCodec>
#include <QAction>
#include <QDateTimeEdit>

#define __DEBUG

#ifdef __DEBUG
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC // enable generation of debug heap alloc map
#define new new( _NORMAL_BLOCK, __FILE__, __LINE__) // redefine "new" to get file names in output
#endif

int main(int argc, char *argv[])
{
#ifdef __DEBUG
_CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_FILE ); // enable file output
_CrtSetReportFile( _CRT_WARN, _CRTDBG_FILE_STDOUT ); // set file to stdout
_CrtMemState _ms;
_CrtMemCheckpoint(&_ms); // now forget about objects created before
#endif

    QApplication app(argc, argv);

qDebug() << "Date:" << QDate::currentDate();

//---------------1-st screen--------------------------------
Camera cam;
cam.show();
//----------------1-st screen end----------------------------

    //--------Test bench------------------------------------
    Subscreen sub;
    sub.show();
    //--------Test bench end---------------------------------




/*
    //--------2-nd screen test-----------------------------------------------------
    QMainWindow *window = new QMainWindow();
    QRect screenres = QApplication::desktop()->screenGeometry(1);
    window->move(QPoint(screenres.x(), screenres.y()));
    window->showFullScreen();
    window->setWindowFlags(Qt::FramelessWindowHint);// убираем строку заголовка
    window->show();
    //--------2-nd screen test end--------------------------------------------------
*/


    //----------2-nd screen---------------------------------------------

/*
    QMainWindow *window = new QMainWindow();
    window->setWindowTitle(QString::fromUtf8("QLineEdit Password Style"));
    window->resize(336, 227);
    QWidget *centralWidget = new QWidget();

    QHBoxLayout *layout = new QHBoxLayout();
    centralWidget->setLayout(layout);
    QLineEdit *lineEdit = new QLineEdit(centralWidget);

    //lineEdit->setEchoMode(QLineEdit::Password);//asterisks will be shown when values are entered
    //Center Text in QLineEdit
      //  layout->addWidget(lineEdit);
      //  lineEdit->setFixedSize(300, 20);
    lineEdit->setText("Enter you password ");
    lineEdit->setAlignment(Qt::AlignHCenter);


    //Create QPalette here and set its Color and Color Role
  QPalette *palette = new QPalette();
        //palette->setColor(QPalette::Base,Qt::yellow);
        //lineEdit->setPalette(*palette);
   palette->setColor(QPalette::Text,Qt::red);
   lineEdit->setPalette(*palette);

        //Add to horizontal layout to center qLineEdit
    layout->addWidget(lineEdit);
    lineEdit->setFixedSize(300, 20);

    window->setCentralWidget(centralWidget);
    window->show();

 //   QRect screenres = QApplication::desktop()->screenGeometry(1); //screenNumber
  //  SecondDisplay secondDisplay = new SecondDisplay(); // Use your QWidget
  //  secondDisplay->move(QPoint(screenres.x(), screenres.y()));
 //   secondDisplay->resize(screenres.width(), screenres.height());
  //  secondDisplay->showFullScreen();

    QRect screenres = QApplication::desktop()->screenGeometry(1);
    window->move(QPoint(screenres.x(), screenres.y()));
*/
    //--------------2-nd screen end------------------------

#ifdef __DEBUG
    _CrtDumpMemoryLeaks();
#endif
    return app.exec();
};
