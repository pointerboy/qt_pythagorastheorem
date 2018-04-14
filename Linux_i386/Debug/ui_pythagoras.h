/********************************************************************************
** Form generated from reading UI file 'pythagoras.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PYTHAGORAS_H
#define UI_PYTHAGORAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pythagoras
{
public:
    QWidget *centralWidget;
    QRadioButton *sideabutton;
    QLabel *label;
    QRadioButton *sidebbutton;
    QRadioButton *sidecbutton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Pythagoras)
    {
        if (Pythagoras->objectName().isEmpty())
            Pythagoras->setObjectName(QStringLiteral("Pythagoras"));
        Pythagoras->resize(220, 271);
        centralWidget = new QWidget(Pythagoras);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sideabutton = new QRadioButton(centralWidget);
        sideabutton->setObjectName(QStringLiteral("sideabutton"));
        sideabutton->setGeometry(QRect(10, 20, 104, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 71, 16));
        label->setToolTipDuration(2000);
        sidebbutton = new QRadioButton(centralWidget);
        sidebbutton->setObjectName(QStringLiteral("sidebbutton"));
        sidebbutton->setGeometry(QRect(10, 40, 104, 21));
        sidecbutton = new QRadioButton(centralWidget);
        sidecbutton->setObjectName(QStringLiteral("sidecbutton"));
        sidecbutton->setGeometry(QRect(10, 60, 104, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(93, 96, 113, 26));
        lineEdit->setAutoFillBackground(false);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(93, 122, 113, 26));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(93, 150, 113, 26));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 190, 88, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 100, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 127, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 153, 81, 16));
        Pythagoras->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Pythagoras);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 220, 24));
        Pythagoras->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Pythagoras);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Pythagoras->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Pythagoras);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Pythagoras->setStatusBar(statusBar);

        retranslateUi(Pythagoras);

        QMetaObject::connectSlotsByName(Pythagoras);
    } // setupUi

    void retranslateUi(QMainWindow *Pythagoras)
    {
        Pythagoras->setWindowTitle(QApplication::translate("Pythagoras", "Pythagoras", 0));
        sideabutton->setText(QApplication::translate("Pythagoras", "SIde A", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Pythagoras", "You can only select one", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("Pythagoras", "<html><head/><body><p>A triangle has <span style=\" font-weight:600;\">3</span> sides. You must select the side you want to calculate. C by the default is hypotenuse.s</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Pythagoras", "Select side", 0));
        sidebbutton->setText(QApplication::translate("Pythagoras", "SIde B", 0));
        sidecbutton->setText(QApplication::translate("Pythagoras", "SIde C", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("Pythagoras", "Calculate", 0));
        label_2->setText(QApplication::translate("Pythagoras", "Side a length:", 0));
        label_3->setText(QApplication::translate("Pythagoras", "Side b length:", 0));
        label_4->setText(QApplication::translate("Pythagoras", "Side c length:", 0));
    } // retranslateUi

};

namespace Ui {
    class Pythagoras: public Ui_Pythagoras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PYTHAGORAS_H
