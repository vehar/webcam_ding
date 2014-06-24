/********************************************************************************
** Form generated from reading UI file 'subscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSCREEN_H
#define UI_SUBSCREEN_H

#include <QCustomPlot/qcustomplot/qcustomplot.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_SubscreenUi
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_photo;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_Photo;
    QSpacerItem *horizontalSpacer_3;
    QCameraViewfinder *viewfinder;
    QStackedWidget *stackedWidget_Under;
    QWidget *page;
    QGridLayout *gridLayout_9;
    QPushButton *Photo_Button;
    QWidget *page_2;
    QGridLayout *gridLayout_8;
    QWidget *page_Result;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_Photo_2;
    QSpacerItem *horizontalSpacer_21;
    QLabel *picture;
    QPushButton *Photo_Prev;
    QPushButton *Photo_Next;
    QPushButton *Debug_btn;
    QWidget *page_graph;
    QGridLayout *gridLayout_5;
    QCustomPlot *customPlot;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QCustomPlot *customPlot_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_1;
    QLabel *label_1;
    QLabel *label_3;
    QWidget *page_surnane;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_18;
    QLineEdit *lineEdit_Surname_1;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *lineEdit_Surname_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *lineEdit_Surname_3;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_15;
    QLineEdit *lineEdit_Surname_4;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Print_Button;
    QWidget *page_pass;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_pass;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QWidget *SubscreenUi)
    {
        if (SubscreenUi->objectName().isEmpty())
            SubscreenUi->setObjectName(QStringLiteral("SubscreenUi"));
        SubscreenUi->resize(655, 653);
        SubscreenUi->setStyleSheet(QStringLiteral("background-color: rgb(239, 245, 245);"));
        gridLayout = new QGridLayout(SubscreenUi);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(SubscreenUi);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_photo = new QWidget();
        page_photo->setObjectName(QStringLiteral("page_photo"));
        gridLayout_3 = new QGridLayout(page_photo);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(125, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label_Photo = new QLabel(page_photo);
        label_Photo->setObjectName(QStringLiteral("label_Photo"));
        label_Photo->setMaximumSize(QSize(500, 35));
        QFont font;
        font.setPointSize(20);
        label_Photo->setFont(font);
        label_Photo->setStyleSheet(QStringLiteral("color: rgb(255, 157, 0);"));

        gridLayout_3->addWidget(label_Photo, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        viewfinder = new QCameraViewfinder(page_photo);
        viewfinder->setObjectName(QStringLiteral("viewfinder"));
        viewfinder->setMinimumSize(QSize(500, 500));
        viewfinder->setStyleSheet(QStringLiteral("background-color: rgb(199, 255, 198);"));

        gridLayout_3->addWidget(viewfinder, 1, 0, 1, 3);

        stackedWidget_Under = new QStackedWidget(page_photo);
        stackedWidget_Under->setObjectName(QStringLiteral("stackedWidget_Under"));
        stackedWidget_Under->setMaximumSize(QSize(16777215, 50));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_9 = new QGridLayout(page);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        Photo_Button = new QPushButton(page);
        Photo_Button->setObjectName(QStringLiteral("Photo_Button"));
        Photo_Button->setMaximumSize(QSize(250, 35));
        QFont font1;
        font1.setPointSize(16);
        Photo_Button->setFont(font1);

        gridLayout_9->addWidget(Photo_Button, 0, 0, 1, 1);

        stackedWidget_Under->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_8 = new QGridLayout(page_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        stackedWidget_Under->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget_Under, 2, 0, 1, 3);

        stackedWidget->addWidget(page_photo);
        page_Result = new QWidget();
        page_Result->setObjectName(QStringLiteral("page_Result"));
        gridLayout_10 = new QGridLayout(page_Result);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalSpacer_22 = new QSpacerItem(159, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_22, 0, 0, 1, 1);

        label_Photo_2 = new QLabel(page_Result);
        label_Photo_2->setObjectName(QStringLiteral("label_Photo_2"));
        label_Photo_2->setMaximumSize(QSize(500, 35));
        label_Photo_2->setFont(font);
        label_Photo_2->setStyleSheet(QStringLiteral("color: rgb(255, 157, 0);"));

        gridLayout_10->addWidget(label_Photo_2, 0, 1, 1, 3);

        horizontalSpacer_21 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_21, 0, 4, 1, 1);

        picture = new QLabel(page_Result);
        picture->setObjectName(QStringLiteral("picture"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy);
        picture->setMinimumSize(QSize(10, 10));
        picture->setStyleSheet(QStringLiteral("background-color: rgb(97, 67, 121);"));
        picture->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(picture, 1, 0, 1, 5);

        Photo_Prev = new QPushButton(page_Result);
        Photo_Prev->setObjectName(QStringLiteral("Photo_Prev"));
        Photo_Prev->setMaximumSize(QSize(250, 43));
        Photo_Prev->setFont(font1);

        gridLayout_10->addWidget(Photo_Prev, 2, 1, 1, 1);

        Photo_Next = new QPushButton(page_Result);
        Photo_Next->setObjectName(QStringLiteral("Photo_Next"));
        Photo_Next->setMaximumSize(QSize(250, 34));
        Photo_Next->setFont(font1);

        gridLayout_10->addWidget(Photo_Next, 2, 3, 1, 1);

        Debug_btn = new QPushButton(page_Result);
        Debug_btn->setObjectName(QStringLiteral("Debug_btn"));
        Debug_btn->setMaximumSize(QSize(250, 34));
        QFont font2;
        font2.setPointSize(17);
        Debug_btn->setFont(font2);

        gridLayout_10->addWidget(Debug_btn, 2, 2, 1, 1);

        stackedWidget->addWidget(page_Result);
        page_graph = new QWidget();
        page_graph->setObjectName(QStringLiteral("page_graph"));
        gridLayout_5 = new QGridLayout(page_graph);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        customPlot = new QCustomPlot(page_graph);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setStyleSheet(QStringLiteral("background-color: rgb(226, 255, 212);"));
        gridLayout_4 = new QGridLayout(customPlot);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(318, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_5->addWidget(customPlot, 1, 2, 3, 1);

        customPlot_2 = new QCustomPlot(page_graph);
        customPlot_2->setObjectName(QStringLiteral("customPlot_2"));
        customPlot_2->setStyleSheet(QStringLiteral("background-color: rgb(226, 255, 212);"));
        gridLayout_2 = new QGridLayout(customPlot_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_8 = new QSpacerItem(577, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 0, 1, 1);


        gridLayout_5->addWidget(customPlot_2, 0, 0, 1, 3);

        lineEdit_3 = new QLineEdit(page_graph);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(200, 16777215));

        gridLayout_5->addWidget(lineEdit_3, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(page_graph);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));

        gridLayout_5->addWidget(lineEdit_2, 2, 0, 1, 1);

        label_2 = new QLabel(page_graph);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout_5->addWidget(label_2, 2, 1, 1, 1);

        lineEdit_1 = new QLineEdit(page_graph);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setMaximumSize(QSize(200, 16777215));

        gridLayout_5->addWidget(lineEdit_1, 1, 0, 1, 1);

        label_1 = new QLabel(page_graph);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setFont(font1);

        gridLayout_5->addWidget(label_1, 1, 1, 1, 1);

        label_3 = new QLabel(page_graph);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        gridLayout_5->addWidget(label_3, 3, 1, 1, 1);

        stackedWidget->addWidget(page_graph);
        page_surnane = new QWidget();
        page_surnane->setObjectName(QStringLiteral("page_surnane"));
        page_surnane->setEnabled(true);
        gridLayout_6 = new QGridLayout(page_surnane);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalSpacer_8 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_8, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 1, 0, 1, 2);

        label_5 = new QLabel(page_surnane);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setPointSize(25);
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral(""));

        gridLayout_6->addWidget(label_5, 1, 2, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 1, 5, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_18, 3, 0, 1, 1);

        lineEdit_Surname_1 = new QLineEdit(page_surnane);
        lineEdit_Surname_1->setObjectName(QStringLiteral("lineEdit_Surname_1"));
        lineEdit_Surname_1->setMinimumSize(QSize(220, 30));

        gridLayout_6->addWidget(lineEdit_Surname_1, 3, 1, 1, 3);

        label_6 = new QLabel(page_surnane);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_6->addWidget(label_6, 3, 4, 1, 2);

        horizontalSpacer_12 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_12, 3, 6, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 4, 2, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_16, 5, 0, 1, 1);

        lineEdit_Surname_2 = new QLineEdit(page_surnane);
        lineEdit_Surname_2->setObjectName(QStringLiteral("lineEdit_Surname_2"));
        lineEdit_Surname_2->setMinimumSize(QSize(220, 30));

        gridLayout_6->addWidget(lineEdit_Surname_2, 5, 1, 1, 3);

        label_7 = new QLabel(page_surnane);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_6->addWidget(label_7, 5, 4, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 5, 6, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 6, 2, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_17, 7, 0, 1, 1);

        lineEdit_Surname_3 = new QLineEdit(page_surnane);
        lineEdit_Surname_3->setObjectName(QStringLiteral("lineEdit_Surname_3"));
        lineEdit_Surname_3->setMinimumSize(QSize(220, 30));

        gridLayout_6->addWidget(lineEdit_Surname_3, 7, 1, 1, 3);

        label_8 = new QLabel(page_surnane);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_6->addWidget(label_8, 7, 4, 1, 2);

        horizontalSpacer_13 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_13, 7, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 8, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(71, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 9, 0, 1, 1);

        lineEdit_Surname_4 = new QLineEdit(page_surnane);
        lineEdit_Surname_4->setObjectName(QStringLiteral("lineEdit_Surname_4"));
        lineEdit_Surname_4->setMinimumSize(QSize(220, 30));

        gridLayout_6->addWidget(lineEdit_Surname_4, 9, 1, 1, 3);

        label_9 = new QLabel(page_surnane);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_6->addWidget(label_9, 9, 4, 1, 2);

        horizontalSpacer_14 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 9, 6, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 10, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 11, 0, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_7, 11, 4, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 12, 2, 1, 1);

        Print_Button = new QPushButton(page_surnane);
        Print_Button->setObjectName(QStringLiteral("Print_Button"));
        Print_Button->setMaximumSize(QSize(250, 80));
        Print_Button->setFont(font3);

        gridLayout_6->addWidget(Print_Button, 11, 2, 1, 2);

        stackedWidget->addWidget(page_surnane);
        page_pass = new QWidget();
        page_pass->setObjectName(QStringLiteral("page_pass"));
        gridLayout_7 = new QGridLayout(page_pass);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_20 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_20, 1, 5, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_9, 2, 2, 1, 1);

        label_pass = new QLabel(page_pass);
        label_pass->setObjectName(QStringLiteral("label_pass"));
        label_pass->setMaximumSize(QSize(500, 90));
        QFont font4;
        font4.setFamily(QStringLiteral("DejaVu Sans"));
        font4.setPointSize(70);
        label_pass->setFont(font4);
        label_pass->setStyleSheet(QStringLiteral("color: rgb(47, 185, 33);"));

        gridLayout_7->addWidget(label_pass, 3, 2, 1, 2);

        horizontalSpacer_10 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(67, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_19, 3, 4, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 3, 0, 1, 2);

        verticalSpacer_11 = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_11, 0, 2, 1, 1);

        label_10 = new QLabel(page_pass);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(570, 40));
        QFont font5;
        font5.setPointSize(27);
        label_10->setFont(font5);
        label_10->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(label_10, 1, 1, 1, 4);

        verticalSpacer_10 = new QSpacerItem(20, 340, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_10, 4, 2, 1, 1);

        stackedWidget->addWidget(page_pass);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(SubscreenUi);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_Under->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SubscreenUi);
    } // setupUi

    void retranslateUi(QWidget *SubscreenUi)
    {
        SubscreenUi->setWindowTitle(QApplication::translate("SubscreenUi", "Form", 0));
        label_Photo->setText(QApplication::translate("SubscreenUi", "\320\241\320\263\321\200\321\203\320\277\320\277\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214 \320\264\320\273\321\217 \320\276\320\261\321\211\320\265\320\263\320\276 \321\204\320\276\321\202\320\276", 0));
        Photo_Button->setText(QApplication::translate("SubscreenUi", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\204\320\276\321\202\320\276", 0));
        label_Photo_2->setText(QApplication::translate("SubscreenUi", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \321\203\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\265\321\202?", 0));
        picture->setText(QString());
        Photo_Prev->setText(QApplication::translate("SubscreenUi", "\320\225\321\211\321\221 \321\200\320\260\320\267", 0));
        Photo_Next->setText(QApplication::translate("SubscreenUi", "\320\224\320\260\320\273\320\265\320\265 >>", 0));
        Debug_btn->setText(QApplication::translate("SubscreenUi", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", 0));
        lineEdit_3->setText(QString());
        label_2->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Q", 0));
        label_1->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\240", 0));
        label_3->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 N", 0));
        label_5->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265  \320\222\320\260\321\210\320\270  \321\204\320\260\320\274\320\270\320\273\320\270\320\270", 0));
        label_6->setText(QApplication::translate("SubscreenUi", "\320\243\321\207\320\260\321\201\321\202\320\275\320\270\320\272 \342\204\2261", 0));
        label_7->setText(QApplication::translate("SubscreenUi", "\320\243\321\207\320\260\321\201\321\202\320\275\320\270\320\272 \342\204\2262", 0));
        label_8->setText(QApplication::translate("SubscreenUi", "\320\243\321\207\320\260\321\201\321\202\320\275\320\270\320\272 \342\204\2263", 0));
        label_9->setText(QApplication::translate("SubscreenUi", "\320\243\321\207\320\260\321\201\321\202\320\275\320\270\320\272 \342\204\2264", 0));
        Print_Button->setText(QApplication::translate("SubscreenUi", "\320\237\320\265\321\207\320\260\321\202\321\214 !", 0));
        label_pass->setText(QApplication::translate("SubscreenUi", "A67DCEF", 0));
        label_10->setText(QApplication::translate("SubscreenUi", "\320\232\320\276\320\264 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\260 \320\270\320\267 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\270\320\270:", 0));
    } // retranslateUi

};

namespace Ui {
    class SubscreenUi: public Ui_SubscreenUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCREEN_H
