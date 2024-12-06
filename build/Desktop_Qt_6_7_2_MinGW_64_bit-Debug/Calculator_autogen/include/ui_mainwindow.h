/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *ioTestEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton9;
    QPushButton *pushButton_mult;
    QPushButton *pushButton6;
    QPushButton *pushButton3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton_result;
    QPushButton *pushButton8;
    QPushButton *pushButton1;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_point;
    QPushButton *pushButton0;
    QPushButton *pushButton2;
    QPushButton *pushButton7;
    QPushButton *pushButton_div;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuCalculator;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(595, 483);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(140, 20, 304, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ioTestEdit = new QTextEdit(verticalLayoutWidget);
        ioTestEdit->setObjectName("ioTestEdit");
        ioTestEdit->setMouseTracking(true);
        ioTestEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        ioTestEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(ioTestEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        pushButton_add = new QPushButton(verticalLayoutWidget);
        pushButton_add->setObjectName("pushButton_add");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton9 = new QPushButton(verticalLayoutWidget);
        pushButton9->setObjectName("pushButton9");
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton9, 0, 2, 1, 1);

        pushButton_mult = new QPushButton(verticalLayoutWidget);
        pushButton_mult->setObjectName("pushButton_mult");
        sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_mult, 0, 3, 1, 1);

        pushButton6 = new QPushButton(verticalLayoutWidget);
        pushButton6->setObjectName("pushButton6");
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton3 = new QPushButton(verticalLayoutWidget);
        pushButton3->setObjectName("pushButton3");
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton3, 2, 2, 1, 1);

        pushButton4 = new QPushButton(verticalLayoutWidget);
        pushButton4->setObjectName("pushButton4");
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(verticalLayoutWidget);
        pushButton5->setObjectName("pushButton5");
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton_result = new QPushButton(verticalLayoutWidget);
        pushButton_result->setObjectName("pushButton_result");
        sizePolicy.setHeightForWidth(pushButton_result->sizePolicy().hasHeightForWidth());
        pushButton_result->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_result, 3, 2, 1, 1);

        pushButton8 = new QPushButton(verticalLayoutWidget);
        pushButton8->setObjectName("pushButton8");
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton8, 0, 1, 1, 1);

        pushButton1 = new QPushButton(verticalLayoutWidget);
        pushButton1->setObjectName("pushButton1");
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton1, 2, 0, 1, 1);

        pushButton_sub = new QPushButton(verticalLayoutWidget);
        pushButton_sub->setObjectName("pushButton_sub");
        sizePolicy.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_sub, 1, 3, 1, 1);

        pushButton_point = new QPushButton(verticalLayoutWidget);
        pushButton_point->setObjectName("pushButton_point");
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_point, 3, 0, 1, 1);

        pushButton0 = new QPushButton(verticalLayoutWidget);
        pushButton0->setObjectName("pushButton0");
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButton2 = new QPushButton(verticalLayoutWidget);
        pushButton2->setObjectName("pushButton2");
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton2, 2, 1, 1, 1);

        pushButton7 = new QPushButton(verticalLayoutWidget);
        pushButton7->setObjectName("pushButton7");
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton7, 0, 0, 1, 1);

        pushButton_div = new QPushButton(verticalLayoutWidget);
        pushButton_div->setObjectName("pushButton_div");
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_div, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 595, 22));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ioTestEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
