/********************************************************************************
** Form generated from reading UI file 'photoshop.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOSHOP_H
#define UI_PHOTOSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_photoshop
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *photoshop)
    {
        if (photoshop->objectName().isEmpty())
            photoshop->setObjectName(QStringLiteral("photoshop"));
        photoshop->resize(400, 300);
        pushButton = new QPushButton(photoshop);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 50, 75, 23));
        pushButton_2 = new QPushButton(photoshop);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 100, 75, 23));
        pushButton_3 = new QPushButton(photoshop);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 150, 75, 23));
        pushButton_4 = new QPushButton(photoshop);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 190, 75, 23));

        retranslateUi(photoshop);

        QMetaObject::connectSlotsByName(photoshop);
    } // setupUi

    void retranslateUi(QDialog *photoshop)
    {
        photoshop->setWindowTitle(QApplication::translate("photoshop", "Dialog", 0));
        pushButton->setText(QApplication::translate("photoshop", "\346\260\264\345\271\263\347\277\273\350\275\254", 0));
        pushButton_2->setText(QApplication::translate("photoshop", "\345\236\202\347\233\264\347\277\273\350\275\254", 0));
        pushButton_3->setText(QApplication::translate("photoshop", "\347\201\260\345\272\246\345\214\226", 0));
        pushButton_4->setText(QApplication::translate("photoshop", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class photoshop: public Ui_photoshop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOSHOP_H
