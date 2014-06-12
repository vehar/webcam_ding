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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubscreenUi
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QCustomPlot *customPlot;
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
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(25, 455, 116, 20));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 455, 116, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(25, 495, 116, 20));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 495, 116, 21));
        label_2->setFont(font);
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(25, 535, 116, 20));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 535, 116, 21));
        label_3->setFont(font);
        customPlot = new QCustomPlot(page_2);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(65, 15, 530, 382));
        customPlot->setStyleSheet(QStringLiteral("background-color: rgb(226, 255, 212);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(SubscreenUi);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SubscreenUi);
    } // setupUi

    void retranslateUi(QWidget *SubscreenUi)
    {
        SubscreenUi->setWindowTitle(QApplication::translate("SubscreenUi", "Form", 0));
        label->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\240", 0));
        label_2->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Q", 0));
        lineEdit_3->setText(QString());
        label_3->setText(QApplication::translate("SubscreenUi", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 N", 0));
    } // retranslateUi

};

namespace Ui {
    class SubscreenUi: public Ui_SubscreenUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSCREEN_H
