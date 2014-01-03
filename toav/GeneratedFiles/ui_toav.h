/********************************************************************************
** Form generated from reading UI file 'toav.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOAV_H
#define UI_TOAV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_toavClass
{
public:

    void setupUi(QDialog *toavClass)
    {
        if (toavClass->objectName().isEmpty())
            toavClass->setObjectName(QStringLiteral("toavClass"));
        toavClass->resize(600, 400);

        retranslateUi(toavClass);

        QMetaObject::connectSlotsByName(toavClass);
    } // setupUi

    void retranslateUi(QDialog *toavClass)
    {
        toavClass->setWindowTitle(QApplication::translate("toavClass", "toav", 0));
    } // retranslateUi

};

namespace Ui {
    class toavClass: public Ui_toavClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOAV_H
