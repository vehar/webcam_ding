/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QAction *actionExit;
    QAction *actionStartCamera;
    QAction *actionStopCamera;
    QAction *actionSettings;
    QAction *action0;
    QAction *action1;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_video;
    QGridLayout *gridLayout;
    QCameraViewfinder *viewfinder_L;
    QCameraViewfinder *viewfinder_R;
    QWidget *page_passwd;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_password;
    QLabel *label_password;
    QMenuBar *menubar;
    QMenu *menuDebug;
    QMenu *menuDevices;
    QMenu *menuFile;

    void setupUi(QMainWindow *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(570, 654);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(2, 2, 2, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Camera->setPalette(palette);
        Camera->setDocumentMode(false);
        Camera->setDockNestingEnabled(false);
        Camera->setUnifiedTitleAndToolBarOnMac(false);
        actionExit = new QAction(Camera);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionStartCamera = new QAction(Camera);
        actionStartCamera->setObjectName(QStringLiteral("actionStartCamera"));
        actionStopCamera = new QAction(Camera);
        actionStopCamera->setObjectName(QStringLiteral("actionStopCamera"));
        actionSettings = new QAction(Camera);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        action0 = new QAction(Camera);
        action0->setObjectName(QStringLiteral("action0"));
        action1 = new QAction(Camera);
        action1->setObjectName(QStringLiteral("action1"));
        centralwidget = new QWidget(Camera);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_video = new QWidget();
        page_video->setObjectName(QStringLiteral("page_video"));
        gridLayout = new QGridLayout(page_video);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        viewfinder_L = new QCameraViewfinder(page_video);
        viewfinder_L->setObjectName(QStringLiteral("viewfinder_L"));
        viewfinder_L->setStyleSheet(QStringLiteral("background-color: rgb(199, 255, 198);"));

        gridLayout->addWidget(viewfinder_L, 0, 0, 1, 1);

        viewfinder_R = new QCameraViewfinder(page_video);
        viewfinder_R->setObjectName(QStringLiteral("viewfinder_R"));
        viewfinder_R->setStyleSheet(QStringLiteral("background-color: rgb(199, 255, 198);"));

        gridLayout->addWidget(viewfinder_R, 0, 1, 1, 1);

        stackedWidget->addWidget(page_video);
        page_passwd = new QWidget();
        page_passwd->setObjectName(QStringLiteral("page_passwd"));
        gridLayout_3 = new QGridLayout(page_passwd);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 225, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        lineEdit_password = new QLineEdit(page_passwd);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft Sans Serif"));
        font.setPointSize(20);
        lineEdit_password->setFont(font);
        lineEdit_password->setStyleSheet(QLatin1String("color: rgb(8, 113, 15);\n"
"background-color: rgb(149, 166, 167);\n"
""));
        lineEdit_password->setFrame(false);

        gridLayout_3->addWidget(lineEdit_password, 3, 1, 1, 1);

        label_password = new QLabel(page_passwd);
        label_password->setObjectName(QStringLiteral("label_password"));
        QFont font1;
        font1.setPointSize(30);
        label_password->setFont(font1);
        label_password->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(43, 255, 28);"));

        gridLayout_3->addWidget(label_password, 1, 1, 1, 1);

        stackedWidget->addWidget(page_passwd);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        Camera->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Camera);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 570, 21));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QStringLiteral("menuDebug"));
        menuDevices = new QMenu(menubar);
        menuDevices->setObjectName(QStringLiteral("menuDevices"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Camera->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuDevices->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menuDebug->addAction(action0);
        menuDebug->addAction(action1);
        menuFile->addAction(actionStartCamera);
        menuFile->addAction(actionStopCamera);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(Camera);
        QObject::connect(actionExit, SIGNAL(triggered()), Camera, SLOT(close()));
        QObject::connect(actionSettings, SIGNAL(triggered()), Camera, SLOT(configureCaptureSettings()));
        QObject::connect(actionStartCamera, SIGNAL(triggered()), Camera, SLOT(startCamera()));
        QObject::connect(actionStopCamera, SIGNAL(triggered()), Camera, SLOT(stopCamera()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QMainWindow *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Camera", 0));
        actionExit->setText(QApplication::translate("Camera", "Exit", 0));
        actionStartCamera->setText(QApplication::translate("Camera", "Start Camera", 0));
        actionStopCamera->setText(QApplication::translate("Camera", "Stop Camera", 0));
        actionSettings->setText(QApplication::translate("Camera", "Settings", 0));
        action0->setText(QApplication::translate("Camera", "0", 0));
        action1->setText(QApplication::translate("Camera", "1", 0));
        lineEdit_password->setText(QString());
        label_password->setText(QApplication::translate("Camera", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        menuDebug->setTitle(QApplication::translate("Camera", "Debug", 0));
        menuDevices->setTitle(QApplication::translate("Camera", "Devices", 0));
        menuFile->setTitle(QApplication::translate("Camera", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
