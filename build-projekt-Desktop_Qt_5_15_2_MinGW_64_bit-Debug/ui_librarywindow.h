/********************************************************************************
** Form generated from reading UI file 'librarywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWINDOW_H
#define UI_LIBRARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LibraryWindow
{
public:
    QLabel *label;
    QPushButton *pushButtonReserve;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *LibraryWindow)
    {
        if (LibraryWindow->objectName().isEmpty())
            LibraryWindow->setObjectName(QString::fromUtf8("LibraryWindow"));
        LibraryWindow->resize(627, 539);
        label = new QLabel(LibraryWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 151, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButtonReserve = new QPushButton(LibraryWindow);
        pushButtonReserve->setObjectName(QString::fromUtf8("pushButtonReserve"));
        pushButtonReserve->setGeometry(QRect(240, 440, 111, 41));
        QFont font1;
        font1.setPointSize(12);
        pushButtonReserve->setFont(font1);
        label_2 = new QLabel(LibraryWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 500, 211, 21));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);
        plainTextEdit = new QPlainTextEdit(LibraryWindow);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 90, 581, 331));

        retranslateUi(LibraryWindow);

        QMetaObject::connectSlotsByName(LibraryWindow);
    } // setupUi

    void retranslateUi(QDialog *LibraryWindow)
    {
        LibraryWindow->setWindowTitle(QCoreApplication::translate("LibraryWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LibraryWindow", "Library Page", nullptr));
        pushButtonReserve->setText(QCoreApplication::translate("LibraryWindow", "Reserve", nullptr));
        label_2->setText(QString());
        plainTextEdit->setPlainText(QCoreApplication::translate("LibraryWindow", "Place for list of books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibraryWindow: public Ui_LibraryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWINDOW_H