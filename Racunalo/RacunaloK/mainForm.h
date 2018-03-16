/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainForm.h
 * Author: Uporabnik
 *
 * Created on 15. marec 2018, 20:50
 */

#ifndef _MAINFORM_H
#define _MAINFORM_H

#include <QApplication>
#include "ui_mainForm.h"
#include <QClipboard>

class mainForm : public QMainWindow {
    Q_OBJECT
public:
    mainForm();
    virtual ~mainForm();
private:
    Ui::mainForm widget;
    double no1;
    char ope;
    QString memory;
private slots:
    void Push1();
    void Push2();
    void Push3();
    void Push4();
    void Push5();
    void Push6();
    void Push7();
    void Push8();
    void Push9();
    void Push0();
    void PushDecimal();
    void PushMinus();
    void PushRacunaj();
    void PushPlus();
    void PushDeli();
    void PushMnozi();
    void PushCopy();
    void PushPaste();
    void PushSaveMemory();
    void PushOutMemory();
};

#endif /* _MAINFORM_H */
