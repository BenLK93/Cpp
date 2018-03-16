/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   mainForm.cpp
 * Author: Uporabnik
 *
 * Created on 15. marec 2018, 20:50
 */

#include "mainForm.h"

mainForm::mainForm() {
    widget.setupUi(this);
    
    
    QRegExp regExp("[-]{0,1}[0-9]*(\\.[0-9]+)?$");
        widget.lineEditKalk->setValidator(new QRegExpValidator(regExp, this));
        
    connect(widget.pushButton1, SIGNAL(clicked()), this, SLOT(Push1()));
    connect(widget.pushButton2, SIGNAL(clicked()), this, SLOT(Push2()));
    connect(widget.pushButton3, SIGNAL(clicked()), this, SLOT(Push3()));
    connect(widget.pushButton4, SIGNAL(clicked()), this, SLOT(Push4()));
    connect(widget.pushButton5, SIGNAL(clicked()), this, SLOT(Push5()));
    connect(widget.pushButton6, SIGNAL(clicked()), this, SLOT(Push6()));
    connect(widget.pushButton7, SIGNAL(clicked()), this, SLOT(Push7()));
    connect(widget.pushButton8, SIGNAL(clicked()), this, SLOT(Push8()));
    connect(widget.pushButton9, SIGNAL(clicked()), this, SLOT(Push9()));
    connect(widget.pushButtonZero, SIGNAL(clicked()), this, SLOT(Push0()));
    connect(widget.pushButtonDecimal, SIGNAL(clicked()), this, SLOT(PushDecimal()));
    connect(widget.pushButtonClearAll, SIGNAL(clicked()), widget.lineEditKalk, SLOT(clear()));
    connect(widget.pushButtonMinus, SIGNAL(clicked()), this, SLOT(PushMinus()));
    connect(widget.pushButtonRacunaj, SIGNAL(clicked()), this, SLOT(PushRacunaj()));
    connect(widget.pushButtonPlus, SIGNAL(clicked()), this, SLOT(PushPlus()));
    connect(widget.pushButtonDeli, SIGNAL(clicked()), this, SLOT(PushDeli()));
    connect(widget.pushButtonMnozi, SIGNAL(clicked()), this, SLOT(PushMnozi()));
    connect(widget.pushButtonCopy, SIGNAL(clicked()), this, SLOT(PushCopy()));
    connect(widget.pushButtonPaste, SIGNAL(clicked()), this, SLOT(PushPaste()));
    connect(widget.pushButtonSaveMemory, SIGNAL(clicked()), this, SLOT(PushSaveMemory()));
    connect(widget.pushButtonOutMemory, SIGNAL(clicked()), this, SLOT(PushOutMemory()));
    

}

mainForm::~mainForm() {
}
void mainForm::Push1() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "1");
}
void mainForm::Push2() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "2");
}
void mainForm::Push3() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "3");
}
void mainForm::Push4() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "4");
}
void mainForm::Push5() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "5");
}
void mainForm::Push6() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "6");
}
void mainForm::Push7() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "7");
}
void mainForm::Push8() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "8");
}
void mainForm::Push9() {
    widget.lineEditKalk->setText(widget.lineEditKalk->text() + "9");
}
void mainForm::Push0() {
    if (widget.lineEditKalk->text() != "0" && widget.lineEditKalk->text() != "-0")
        widget.lineEditKalk->setText(widget.lineEditKalk->text() + "0");
}
void mainForm::PushDecimal() {
 if (!widget.lineEditKalk->text().contains(".")){
        if (widget.lineEditKalk->text().length() != 0)
            widget.lineEditKalk->setText(widget.lineEditKalk->text() + ".");
        else
            widget.lineEditKalk->setText("0.");
 }
}

void mainForm::PushMinus(){
    if (widget.lineEditKalk->text().length() != 0) {
        ope = '-';
        bool ok = false;
        no1 = widget.lineEditKalk->text().toDouble(&ok);
        widget.lineEditKalk->clear();
    }
    else{
        widget.lineEditKalk->setText("-");
}

}

void mainForm::PushPlus(){
    if (widget.lineEditKalk->text().length() != 0) {
            ope = '+';
            bool ok = false;
            no1 = widget.lineEditKalk->text().toDouble(&ok);
            widget.lineEditKalk->clear();
        }
    else{
        widget.lineEditKalk->setText("");
}

}

void mainForm::PushDeli(){
    if (widget.lineEditKalk->text().length() != 0) {
            ope = '/';
            bool ok = false;
            no1 = widget.lineEditKalk->text().toDouble(&ok);
            widget.lineEditKalk->clear();
        }
    else{
        widget.lineEditKalk->setText("");
}

}
void mainForm::PushMnozi(){
    if (widget.lineEditKalk->text().length() != 0) {
            ope = 'X';
            bool ok = false;
            no1 = widget.lineEditKalk->text().toDouble(&ok);
            widget.lineEditKalk->clear();
        }
    else{
        widget.lineEditKalk->setText("");
}

}

void mainForm::PushRacunaj(){
    if (widget.lineEditKalk->text().length() != 0) {
        bool ok = false;
        double rez;
        double no2 = widget.lineEditKalk->text().toDouble(&ok);
        switch (ope) {
                    case '-':
                        rez = no1 - no2;
                            break;
                    case '+':
                        rez = no1 + no2;
                        break;
                        
                    case '/':
                        rez = no1 / no2;
                        break;
                        
                    case 'X':
                        rez = no1 * no2;
                        break;
                        }

        widget.lineEditKalk->setText(QString("%1").arg(rez));
     }

}
void mainForm::PushCopy(){
    QClipboard *clipboard = QApplication::clipboard();
    QString rez = widget.lineEditKalk->text();
    clipboard->setText(rez); 
    
}
void mainForm::PushPaste(){
    QClipboard *clipboard = QApplication::clipboard();
    QString rez = clipboard->text();          
    widget.lineEditKalk->setText(rez); 
    
}
void mainForm::PushSaveMemory(){
    memory = widget.lineEditKalk->text();
    
    
}
void mainForm::PushOutMemory(){
    widget.lineEditKalk->setText(memory); 
    
}