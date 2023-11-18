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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QPushButton *pushButton_3;
    QWidget *Maze;
    QGraphicsView *graphicsView_2;
    QPushButton *btn_load_file;
    QPushButton *btn_import_file;
    QLabel *label;
    QPushButton *btn_generate_maze;
    QLabel *label_2;
    QSpinBox *spin_box_rows;
    QLabel *label_4;
    QSpinBox *spin_box_cols;

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
        pushButton_3 = new QPushButton(Cave);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 20, 250, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Menlo")});
        font.setPointSize(24);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
""));
        TabWidget->addTab(Cave, QString());
        Maze = new QWidget();
        Maze->setObjectName(QString::fromUtf8("Maze"));
        graphicsView_2 = new QGraphicsView(Maze);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 20, 500, 500));
        graphicsView_2->setStyleSheet(QString::fromUtf8(""));
        btn_load_file = new QPushButton(Maze);
        btn_load_file->setObjectName(QString::fromUtf8("btn_load_file"));
        btn_load_file->setGeometry(QRect(570, 20, 250, 50));
        btn_load_file->setFont(font);
        btn_load_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f); \n"
"color: white;\n"
"border: 1px solid #333333;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        btn_import_file = new QPushButton(Maze);
        btn_import_file->setObjectName(QString::fromUtf8("btn_import_file"));
        btn_import_file->setGeometry(QRect(570, 80, 250, 50));
        btn_import_file->setFont(font);
        btn_import_file->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        label = new QLabel(Maze);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(570, 210, 251, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Menlo")});
        font1.setPointSize(25);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        btn_generate_maze = new QPushButton(Maze);
        btn_generate_maze->setObjectName(QString::fromUtf8("btn_generate_maze"));
        btn_generate_maze->setGeometry(QRect(570, 430, 250, 50));
        btn_generate_maze->setFont(font);
        btn_generate_maze->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        label_2 = new QLabel(Maze);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(570, 300, 161, 30));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        spin_box_rows = new QSpinBox(Maze);
        spin_box_rows->setObjectName(QString::fromUtf8("spin_box_rows"));
        spin_box_rows->setGeometry(QRect(730, 300, 91, 33));
        spin_box_rows->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_rows->setMaximum(50);
        label_4 = new QLabel(Maze);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 350, 161, 33));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        spin_box_cols = new QSpinBox(Maze);
        spin_box_cols->setObjectName(QString::fromUtf8("spin_box_cols"));
        spin_box_cols->setGeometry(QRect(730, 350, 91, 33));
        spin_box_cols->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_cols->setMaximum(50);
        TabWidget->addTab(Maze, QString());
        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        TabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        pushButton_3->setText(QCoreApplication::translate("View", "Load File", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Cave), QCoreApplication::translate("View", "Cave", nullptr));
        btn_load_file->setText(QCoreApplication::translate("View", "Load File", nullptr));
        btn_import_file->setText(QCoreApplication::translate("View", "Import File", nullptr));
        label->setText(QCoreApplication::translate("View", "MAZE GENNERATING \n"
"SETTING", nullptr));
        btn_generate_maze->setText(QCoreApplication::translate("View", "GENERATE", nullptr));
        label_2->setText(QCoreApplication::translate("View", "MAZE ROWS:", nullptr));
        label_4->setText(QCoreApplication::translate("View", "MAZE COLS:", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Maze), QCoreApplication::translate("View", "Maze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
