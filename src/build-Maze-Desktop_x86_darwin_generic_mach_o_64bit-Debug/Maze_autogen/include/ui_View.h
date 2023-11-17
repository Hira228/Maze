/********************************************************************************
** Form generated from reading UI file 'View.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QTabWidget *TabWidget;
    QWidget *Cave;
    QGraphicsView *graphicsView;
    QWidget *Maze;
    QGraphicsView *graphicsView_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(849, 678);
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("bckground-color:grey;"));
        TabWidget = new QTabWidget(centralwidget);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->setGeometry(QRect(-10, 10, 861, 671));
        TabWidget->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);"));
        Cave = new QWidget();
        Cave->setObjectName(QString::fromUtf8("Cave"));
        Cave->setStyleSheet(QString::fromUtf8(""));
        graphicsView = new QGraphicsView(Cave);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 20, 500, 500));
        TabWidget->addTab(Cave, QString());
        Maze = new QWidget();
        Maze->setObjectName(QString::fromUtf8("Maze"));
        graphicsView_2 = new QGraphicsView(Maze);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 20, 500, 500));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: grey;"));
        pushButton = new QPushButton(Maze);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 20, 251, 71));
        pushButton->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
""));
        TabWidget->addTab(Maze, QString());
        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        TabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Cave), QCoreApplication::translate("View", "Cave", nullptr));
        pushButton->setText(QCoreApplication::translate("View", "PushButton", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Maze), QCoreApplication::translate("View", "Maze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
