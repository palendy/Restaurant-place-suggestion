/********************************************************************************
** Form generated from reading UI file 'practice.ui'
**
** Created: Sun Nov 18 18:02:25 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICE_H
#define UI_PRACTICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_practiceClass
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QWidget *centralWidget;

    QPushButton *Square1 [4];
  
    QPushButton *Square2_[4];
  
    QPushButton *Square3 [4];
   
    QPushButton *Rec1 [12];
 
    QPushButton *Rec2 [12];
    
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *practiceClass)
    {
        if (practiceClass->objectName().isEmpty())
            practiceClass->setObjectName(QString::fromUtf8("practiceClass"));
        practiceClass->resize(985, 869);
        actionExit = new QAction(practiceClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit_2 = new QAction(practiceClass);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        centralWidget = new QWidget(practiceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
	
		Square1[1] = new QPushButton(centralWidget);
        Square1[1]->setObjectName(QString::fromUtf8("Square1_1"));
        Square1[1]->setGeometry(QRect(120, 100, 71, 61));
        Square1[1]->setCursor(QCursor(Qt::PointingHandCursor));
        Square1[2] = new QPushButton(centralWidget);
        Square1[2]->setObjectName(QString::fromUtf8("Square1_2"));
        Square1[2]->setGeometry(QRect(190, 100, 71, 61));
        Square1[2]->setCursor(QCursor(Qt::PointingHandCursor));
        Square1[4] = new QPushButton(centralWidget);
        Square1[4]->setObjectName(QString::fromUtf8("Square1_4"));
        Square1[4]->setGeometry(QRect(190, 160, 71, 61));
        Square1[4]->setCursor(QCursor(Qt::PointingHandCursor));
        Square1[3] = new QPushButton(centralWidget);
        Square1[3]->setObjectName(QString::fromUtf8("Square1_3"));
        Square1[3]->setGeometry(QRect(120, 160, 71, 61));
        Square1[3]->setCursor(QCursor(Qt::PointingHandCursor));
		
        Square2[1] = new QPushButton(centralWidget);
        Square2[1]->setObjectName(QString::fromUtf8("Square2_1"));
        Square2[1]->setGeometry(QRect(380, 100, 71, 61));
        Square2[1]->setCursor(QCursor(Qt::PointingHandCursor));
        Square2[2] = new QPushButton(centralWidget);
        Square2[2]->setObjectName(QString::fromUtf8("Square2_2"));
        Square2[2]->setGeometry(QRect(450, 100, 71, 61));
        Square2[2]->setCursor(QCursor(Qt::PointingHandCursor));
        Square2[4] = new QPushButton(centralWidget);
        Square2[4]->setObjectName(QString::fromUtf8("Square2_4"));
        Square2[4]->setGeometry(QRect(450, 160, 71, 61));
        Square2[4]->setCursor(QCursor(Qt::PointingHandCursor));
        Square2[3] = new QPushButton(centralWidget);
        Square2[3]->setObjectName(QString::fromUtf8("Square2_3"));
        Square2[3]->setGeometry(QRect(380, 160, 71, 61));
        Square2[3]->setCursor(QCursor(Qt::PointingHandCursor));

        Square3[1] = new QPushButton(centralWidget);
        Square3[1]->setObjectName(QString::fromUtf8("Square3_1"));
        Square3[1]->setGeometry(QRect(630, 100, 71, 61));
        Square3[1]->setCursor(QCursor(Qt::PointingHandCursor));
        Square3[3] = new QPushButton(centralWidget);
        Square3[3]->setObjectName(QString::fromUtf8("Square3_3"));
        Square3[3]->setGeometry(QRect(630, 160, 71, 61));
        Square3[3]->setCursor(QCursor(Qt::PointingHandCursor));
        Square3[4] = new QPushButton(centralWidget);
        Square3[4]->setObjectName(QString::fromUtf8("Square3_4"));
        Square3[4]->setGeometry(QRect(700, 160, 71, 61));
        Square3[4]->setCursor(QCursor(Qt::PointingHandCursor));
        Square3[2] = new QPushButton(centralWidget);
        Square3[2]->setObjectName(QString::fromUtf8("Square3_2"));
        Square3[2]->setGeometry(QRect(700, 100, 71, 61));
        Square3[2]->setCursor(QCursor(Qt::PointingHandCursor));

        Rec1[1] = new QPushButton(centralWidget);
        Rec1[1]->setObjectName(QString::fromUtf8("Rec1_1"));
        Rec1[1]->setGeometry(QRect(120, 350, 71, 61));
        Rec1[1]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[3] = new QPushButton(centralWidget);
        Rec1[3]->setObjectName(QString::fromUtf8("Rec1_3"));
        Rec1[3]->setGeometry(QRect(190, 350, 71, 61));
        Rec1[3]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[5] = new QPushButton(centralWidget);
        Rec1[5]->setObjectName(QString::fromUtf8("Rec1_5"));
        Rec1[5]->setGeometry(QRect(260, 350, 71, 61));
        Rec1[5]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[7] = new QPushButton(centralWidget);
        Rec1[7]->setObjectName(QString::fromUtf8("Rec1_7"));
        Rec1[7]->setGeometry(QRect(330, 350, 71, 61));
        Rec1[7]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[9] = new QPushButton(centralWidget);
        Rec1[9]->setObjectName(QString::fromUtf8("Rec1_9"));
        Rec1[9]->setGeometry(QRect(400, 350, 71, 61));
        Rec1[9]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[11] = new QPushButton(centralWidget);
        Rec1[11]->setObjectName(QString::fromUtf8("Rec1_11"));
        Rec1[11]->setGeometry(QRect(470, 350, 71, 61));
        Rec1[11]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[2] = new QPushButton(centralWidget);
        Rec1[2]->setObjectName(QString::fromUtf8("Rec1_2"));
        Rec1[2]->setGeometry(QRect(120, 410, 71, 61));
        Rec1[2]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[4]= new QPushButton(centralWidget);
        Rec1[4]->setObjectName(QString::fromUtf8("Rec1_4"));
        Rec1[4]->setGeometry(QRect(190, 410, 71, 61));
        Rec1[4]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[6] = new QPushButton(centralWidget);
        Rec1[6]->setObjectName(QString::fromUtf8("Rec1_6"));
        Rec1[6]->setGeometry(QRect(260, 410, 71, 61));
        Rec1[6]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[8] = new QPushButton(centralWidget);
        Rec1[8]->setObjectName(QString::fromUtf8("Rec1_8"));
        Rec1[8]->setGeometry(QRect(330, 410, 71, 61));
        Rec1[8]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[10] = new QPushButton(centralWidget);
        Rec1[10]->setObjectName(QString::fromUtf8("Rec1_10"));
        Rec1[10]->setGeometry(QRect(400, 410, 71, 61));
        Rec1[10]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec1[12] = new QPushButton(centralWidget);
        Rec1[12]->setObjectName(QString::fromUtf8("Rec1_12"));
        Rec1[12]->setGeometry(QRect(470, 410, 71, 61));
        Rec1[12]->setCursor(QCursor(Qt::PointingHandCursor));

        Rec2[1] = new QPushButton(centralWidget);
        Rec2[1]->setObjectName(QString::fromUtf8("Rec2_1"));
        Rec2[1]->setGeometry(QRect(120, 550, 71, 61));
        Rec2[1]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[3] = new QPushButton(centralWidget);
        Rec2[3]->setObjectName(QString::fromUtf8("Rec2_3"));
        Rec2[3]->setGeometry(QRect(190, 550, 71, 61));
        Rec2[3]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[5] = new QPushButton(centralWidget);
        Rec2[5]->setObjectName(QString::fromUtf8("Rec2_5"));
        Rec2[5]->setGeometry(QRect(260, 550, 71, 61));
        Rec2[5]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[11] = new QPushButton(centralWidget);
        Rec2[11]->setObjectName(QString::fromUtf8("Rec2_11"));
        Rec2[11]->setGeometry(QRect(470, 550, 71, 61));
        Rec2[11]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[9] = new QPushButton(centralWidget);
        Rec2[9]->setObjectName(QString::fromUtf8("Rec2_9"));
        Rec2[9]->setGeometry(QRect(400, 550, 71, 61));
        Rec2[9]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[7] = new QPushButton(centralWidget);
        Rec2[7]->setObjectName(QString::fromUtf8("Rec2_7"));
        Rec2[7]->setGeometry(QRect(330, 550, 71, 61));
        Rec2[7]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[10] = new QPushButton(centralWidget);
        Rec2[10]->setObjectName(QString::fromUtf8("Rec2_10"));
        Rec2[10]->setGeometry(QRect(400, 610, 71, 61));
        Rec2[10]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[8] = new QPushButton(centralWidget);
        Rec2[8]->setObjectName(QString::fromUtf8("Rec2_8"));
        Rec2[8]->setGeometry(QRect(330, 610, 71, 61));
        Rec2[8]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[6] = new QPushButton(centralWidget);
        Rec2[6]->setObjectName(QString::fromUtf8("Rec2_6"));
        Rec2[6]->setGeometry(QRect(260, 610, 71, 61));
        Rec2[6]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[4] = new QPushButton(centralWidget);
        Rec2[4]->setObjectName(QString::fromUtf8("Rec2_4"));
        Rec2[4]->setGeometry(QRect(190, 610, 71, 61));
        Rec2[4]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[2] = new QPushButton(centralWidget);
        Rec2[2]->setObjectName(QString::fromUtf8("Rec2_2"));
        Rec2[2]->setGeometry(QRect(120, 610, 71, 61));
        Rec2[2]->setCursor(QCursor(Qt::PointingHandCursor));
        Rec2[12] = new QPushButton(centralWidget);
        Rec2[12]->setObjectName(QString::fromUtf8("Rec2_12"));
        Rec2[12]->setGeometry(QRect(470, 610, 71, 61));
        Rec2[12]->setCursor(QCursor(Qt::PointingHandCursor));

        practiceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(practiceClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 985, 19));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        practiceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(practiceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        practiceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(practiceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        practiceClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionExit_2);

        retranslateUi(practiceClass);
        QObject::connect(Square1_1, SIGNAL(clicked(bool)), Square2_1, SLOT(click()));

        QMetaObject::connectSlotsByName(practiceClass);
    } // setupUi

    void retranslateUi(QMainWindow *practiceClass)
    {
        practiceClass->setWindowTitle(QApplication::translate("practiceClass", "practice", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("practiceClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionExit_2->setText(QApplication::translate("practiceClass", "Exit", 0, QApplication::UnicodeUTF8));

        Square1[1]->setText(QApplication::translate("practiceClass", "Square1_1", 0, QApplication::UnicodeUTF8));
        Square1[2]->setText(QApplication::translate("practiceClass", "Sqaure1_2", 0, QApplication::UnicodeUTF8));
        Square1[4]->setText(QApplication::translate("practiceClass", "Sqaure1_4", 0, QApplication::UnicodeUTF8));
        Square1[3]->setText(QApplication::translate("practiceClass", "Sqaure1_3", 0, QApplication::UnicodeUTF8));

        Square2[1]->setText(QApplication::translate("practiceClass", "Square2_1", 0, QApplication::UnicodeUTF8));
        Square2[2]->setText(QApplication::translate("practiceClass", "Square2_2", 0, QApplication::UnicodeUTF8));
        Square2[4]->setText(QApplication::translate("practiceClass", "Square2_4", 0, QApplication::UnicodeUTF8));
        Square2[3]->setText(QApplication::translate("practiceClass", "Square2_3", 0, QApplication::UnicodeUTF8));

        Square3[1]->setText(QApplication::translate("practiceClass", "Square3_1", 0, QApplication::UnicodeUTF8));
        Square3[3]->setText(QApplication::translate("practiceClass", "Square3_3", 0, QApplication::UnicodeUTF8));
        Square3[4]->setText(QApplication::translate("practiceClass", "Square3_4", 0, QApplication::UnicodeUTF8));
        Square3[2]->setText(QApplication::translate("practiceClass", "Square3_2", 0, QApplication::UnicodeUTF8));

        Rec1[1]->setText(QApplication::translate("practiceClass", "Rec1_1", 0, QApplication::UnicodeUTF8));
        Rec1[3]->setText(QApplication::translate("practiceClass", "Rec1_3", 0, QApplication::UnicodeUTF8));
        Rec1[5]->setText(QApplication::translate("practiceClass", "Rec1_5", 0, QApplication::UnicodeUTF8));
        Rec1[7]->setText(QApplication::translate("practiceClass", "Rec1_7", 0, QApplication::UnicodeUTF8));
        Rec1[9]->setText(QApplication::translate("practiceClass", "Rec1_9", 0, QApplication::UnicodeUTF8));
        Rec1[11]->setText(QApplication::translate("practiceClass", "Rec1_11", 0, QApplication::UnicodeUTF8));
        Rec1[2]->setText(QApplication::translate("practiceClass", "Rec1_2", 0, QApplication::UnicodeUTF8));
        Rec1[4]->setText(QApplication::translate("practiceClass", "Rec1_4", 0, QApplication::UnicodeUTF8));
        Rec1[6]->setText(QApplication::translate("practiceClass", "Rec1_6", 0, QApplication::UnicodeUTF8));
        Rec1[8]->setText(QApplication::translate("practiceClass", "Rec1_8", 0, QApplication::UnicodeUTF8));
        Rec1[10]->setText(QApplication::translate("practiceClass", "Rec1_10", 0, QApplication::UnicodeUTF8));
        Rec1[12]->setText(QApplication::translate("practiceClass", "Rec1_12", 0, QApplication::UnicodeUTF8));

        Rec2[1]->setText(QApplication::translate("practiceClass", "Rec2_1", 0, QApplication::UnicodeUTF8));
        Rec2[3]->setText(QApplication::translate("practiceClass", "Rec2_3", 0, QApplication::UnicodeUTF8));
        Rec2[5]->setText(QApplication::translate("practiceClass", "Rec2_5", 0, QApplication::UnicodeUTF8));
        Rec2[11]->setText(QApplication::translate("practiceClass", "Rec2_11", 0, QApplication::UnicodeUTF8));
        Rec2[9]->setText(QApplication::translate("practiceClass", "Rec2_9", 0, QApplication::UnicodeUTF8));
        Rec2[7]->setText(QApplication::translate("practiceClass", "Rec2_7", 0, QApplication::UnicodeUTF8));
        Rec2[10]->setText(QApplication::translate("practiceClass", "Rec2_10", 0, QApplication::UnicodeUTF8));
        Rec2[8]->setText(QApplication::translate("practiceClass", "Rec2_8", 0, QApplication::UnicodeUTF8));
        Rec2[6]->setText(QApplication::translate("practiceClass", "Rec2_6", 0, QApplication::UnicodeUTF8));
        Rec2[4]->setText(QApplication::translate("practiceClass", "Rec2_4", 0, QApplication::UnicodeUTF8));
        Rec2[2]->setText(QApplication::translate("practiceClass", "Rec2_2", 0, QApplication::UnicodeUTF8));
        Rec2[12]->setText(QApplication::translate("practiceClass", "Rec2_12", 0, QApplication::UnicodeUTF8));

        menu->setTitle(QApplication::translate("practiceClass", "\353\263\264\352\270\260", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("practiceClass", "\354\230\265\354\205\230", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("practiceClass", "\354\236\254\353\260\260\354\271\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class practiceClass: public Ui_practiceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICE_H
