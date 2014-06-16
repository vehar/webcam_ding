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
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QCameraViewfinder *viewfinder;
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
    QLabel *label;
    QLabel *label_3;
    QWidget *page_3;

    void setupUi(QWidget *SubscreenUi)
    {
        if (SubscreenUi->objectName().isEmpty())
            SubscreenUi->setObjectName(QStringLiteral("SubscreenUi"));
        SubscreenUi->resize(634, 647);
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

        label_4 = new QLabel(page_photo);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 157, 0);"));

        gridLayout_3->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 538, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 1, 1, 1);

        pushButton = new QPushButton(page_photo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        gridLayout_3->addWidget(pushButton, 3, 1, 1, 1);

        viewfinder = new QCameraViewfinder(page_photo);
        viewfinder->setObjectName(QStringLiteral("viewfinder"));
        viewfinder->setStyleSheet(QStringLiteral("background-color: rgb(199, 255, 198);"));

        gridLayout_3->addWidget(viewfinder, 1, 0, 2, 3);

        stackedWidget->addWidget(page_photo);
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
        label_2->setFont(font);

        gridLayout_5->addWidget(label_2, 2, 1, 1, 1);

        lineEdit_1 = new QLineEdit(page_graph);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setMaximumSize(QSize(200, 16777215));

        gridLayout_5->addWidget(lineEdit_1, 1, 0, 1, 1);

        label = new QLabel(page_graph);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_5->addWidget(label, 1, 1, 1, 1);

        label_3 = new QLabel(page_graph);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_5->addWidget(label_3, 3, 1, 1, 1);

        stackedWidget->addWidget(page_graph);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setEnabled(true);
        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(SubscreenUi);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SubscreenUi);
    } // setupUi

    void retranslateUi(QWidget *SubscreenUi)
    {
        SubscreenUi->setWindowTitle(QApplication::translate("SubscreenUi", "Form", 0));
        label_4->setText(QApplication::translate("SubscreenUi", "\320\241\320\263\321\200\321\203\320\277\320\277\320\270\321\200\321\203\320\271\321\202\320\265\321\201\321\214 \320\264\320\273\321\217 \320\276\320\261\321\211\320\265\320\263\320\276 \321\204\320\276\321\202\320\276", 0));
        pushButton->setText(QApplication::translate("SubscreenUi", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\204\320\276\321\202\320\276", 0));
        lineEdit_3->setText(QString());
        label_2->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Q", 0));
        label->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\240", 0));
        label_3->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 N", 0));
    } // retranslateUi

};

namespace Ui {
    class SubscreenUi: public Ui_SubscreenUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCREEN_H
