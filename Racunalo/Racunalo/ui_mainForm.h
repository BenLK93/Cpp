/********************************************************************************
** Form generated from reading UI file 'mainForm.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainForm
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditKalk;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonDeli;
    QPushButton *pushButton6;
    QPushButton *pushButtonMnozi;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *pushButton1;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonDecimal;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonZero;
    QPushButton *pushButtonClearAll;
    QPushButton *pushButtonRacunaj;
    QPushButton *pushButtonPaste;
    QPushButton *pushButtonCopy;
    QPushButton *pushButtonOutMemory;
    QPushButton *pushButtonSaveMemory;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainForm)
    {
        if (mainForm->objectName().isEmpty())
            mainForm->setObjectName(QStringLiteral("mainForm"));
        mainForm->resize(367, 657);
        centralwidget = new QWidget(mainForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEditKalk = new QLineEdit(centralwidget);
        lineEditKalk->setObjectName(QStringLiteral("lineEditKalk"));
        lineEditKalk->setGeometry(QRect(10, 10, 350, 70));
        QFont font;
        font.setFamily(QStringLiteral("Mongolian Baiti"));
        font.setPointSize(30);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        lineEditKalk->setFont(font);
        lineEditKalk->setFocusPolicy(Qt::NoFocus);
        lineEditKalk->setLayoutDirection(Qt::LeftToRight);
        lineEditKalk->setMaxLength(14);
        lineEditKalk->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(10, 185, 75, 75));
        QFont font1;
        font1.setFamily(QStringLiteral("Mongolian Baiti"));
        font1.setPointSize(25);
        pushButton7->setFont(font1);
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(100, 185, 75, 75));
        pushButton8->setFont(font1);
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(190, 185, 75, 75));
        pushButton9->setFont(font1);
        pushButtonDeli = new QPushButton(centralwidget);
        pushButtonDeli->setObjectName(QStringLiteral("pushButtonDeli"));
        pushButtonDeli->setGeometry(QRect(280, 185, 75, 75));
        pushButtonDeli->setFont(font1);
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(190, 270, 75, 75));
        pushButton6->setFont(font1);
        pushButtonMnozi = new QPushButton(centralwidget);
        pushButtonMnozi->setObjectName(QStringLiteral("pushButtonMnozi"));
        pushButtonMnozi->setGeometry(QRect(280, 270, 75, 75));
        pushButtonMnozi->setFont(font1);
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(100, 270, 75, 75));
        pushButton5->setFont(font1);
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(10, 270, 75, 75));
        pushButton4->setFont(font1);
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(190, 360, 75, 75));
        pushButton1->setFont(font1);
        pushButtonPlus = new QPushButton(centralwidget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(280, 360, 75, 75));
        pushButtonPlus->setFont(font1);
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(100, 360, 75, 75));
        pushButton2->setFont(font1);
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(10, 360, 75, 75));
        pushButton3->setFont(font1);
        pushButtonDecimal = new QPushButton(centralwidget);
        pushButtonDecimal->setObjectName(QStringLiteral("pushButtonDecimal"));
        pushButtonDecimal->setGeometry(QRect(190, 450, 75, 75));
        pushButtonDecimal->setFont(font1);
        pushButtonMinus = new QPushButton(centralwidget);
        pushButtonMinus->setObjectName(QStringLiteral("pushButtonMinus"));
        pushButtonMinus->setGeometry(QRect(280, 450, 75, 75));
        pushButtonMinus->setFont(font1);
        pushButtonZero = new QPushButton(centralwidget);
        pushButtonZero->setObjectName(QStringLiteral("pushButtonZero"));
        pushButtonZero->setGeometry(QRect(10, 450, 165, 75));
        pushButtonZero->setFont(font1);
        pushButtonClearAll = new QPushButton(centralwidget);
        pushButtonClearAll->setObjectName(QStringLiteral("pushButtonClearAll"));
        pushButtonClearAll->setGeometry(QRect(10, 540, 75, 75));
        pushButtonClearAll->setFont(font1);
        pushButtonRacunaj = new QPushButton(centralwidget);
        pushButtonRacunaj->setObjectName(QStringLiteral("pushButtonRacunaj"));
        pushButtonRacunaj->setGeometry(QRect(100, 540, 255, 75));
        pushButtonRacunaj->setFont(font1);
        pushButtonPaste = new QPushButton(centralwidget);
        pushButtonPaste->setObjectName(QStringLiteral("pushButtonPaste"));
        pushButtonPaste->setGeometry(QRect(100, 100, 75, 75));
        QFont font2;
        font2.setFamily(QStringLiteral("Mongolian Baiti"));
        font2.setPointSize(20);
        pushButtonPaste->setFont(font2);
        pushButtonCopy = new QPushButton(centralwidget);
        pushButtonCopy->setObjectName(QStringLiteral("pushButtonCopy"));
        pushButtonCopy->setGeometry(QRect(10, 100, 75, 75));
        pushButtonCopy->setFont(font2);
        pushButtonOutMemory = new QPushButton(centralwidget);
        pushButtonOutMemory->setObjectName(QStringLiteral("pushButtonOutMemory"));
        pushButtonOutMemory->setGeometry(QRect(280, 100, 75, 75));
        pushButtonOutMemory->setFont(font1);
        pushButtonSaveMemory = new QPushButton(centralwidget);
        pushButtonSaveMemory->setObjectName(QStringLiteral("pushButtonSaveMemory"));
        pushButtonSaveMemory->setGeometry(QRect(190, 100, 75, 75));
        pushButtonSaveMemory->setFont(font1);
        mainForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 367, 21));
        mainForm->setMenuBar(menubar);
        statusbar = new QStatusBar(mainForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        mainForm->setStatusBar(statusbar);

        retranslateUi(mainForm);

        QMetaObject::connectSlotsByName(mainForm);
    } // setupUi

    void retranslateUi(QMainWindow *mainForm)
    {
        mainForm->setWindowTitle(QApplication::translate("mainForm", "Ra\304\215unalo", nullptr));
        lineEditKalk->setText(QString());
        pushButton7->setText(QApplication::translate("mainForm", "7", nullptr));
        pushButton8->setText(QApplication::translate("mainForm", "8", nullptr));
        pushButton9->setText(QApplication::translate("mainForm", "9", nullptr));
        pushButtonDeli->setText(QApplication::translate("mainForm", "/", nullptr));
        pushButton6->setText(QApplication::translate("mainForm", "6", nullptr));
        pushButtonMnozi->setText(QApplication::translate("mainForm", "X", nullptr));
        pushButton5->setText(QApplication::translate("mainForm", "5", nullptr));
        pushButton4->setText(QApplication::translate("mainForm", "4", nullptr));
        pushButton1->setText(QApplication::translate("mainForm", "1", nullptr));
        pushButtonPlus->setText(QApplication::translate("mainForm", "+", nullptr));
        pushButton2->setText(QApplication::translate("mainForm", "2", nullptr));
        pushButton3->setText(QApplication::translate("mainForm", "3", nullptr));
        pushButtonDecimal->setText(QApplication::translate("mainForm", ".", nullptr));
        pushButtonMinus->setText(QApplication::translate("mainForm", "-", nullptr));
        pushButtonZero->setText(QApplication::translate("mainForm", "0", nullptr));
        pushButtonClearAll->setText(QApplication::translate("mainForm", "AC", nullptr));
        pushButtonRacunaj->setText(QApplication::translate("mainForm", "=", nullptr));
        pushButtonPaste->setText(QApplication::translate("mainForm", "Paste", nullptr));
        pushButtonCopy->setText(QApplication::translate("mainForm", "Copy", nullptr));
        pushButtonOutMemory->setText(QApplication::translate("mainForm", "M", nullptr));
        pushButtonSaveMemory->setText(QApplication::translate("mainForm", "M+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainForm: public Ui_mainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
