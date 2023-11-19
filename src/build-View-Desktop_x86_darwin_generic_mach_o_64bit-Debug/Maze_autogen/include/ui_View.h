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
    QPushButton *Button_Load_File_Cave;
    QPushButton *Button_Save_File_Cave;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *spin_cave_rows_;
    QSpinBox *spin_cave_cols_;
    QLabel *label_17;
    QSpinBox *spin_cave_life_chance;
    QPushButton *btn_generate_cave_;
    QSpinBox *spin_live_up;
    QSpinBox *spin_born_up;
    QSpinBox *spin_born_low;
    QSpinBox *spin_live_low;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QWidget *Maze;
    QGraphicsView *graphicsView_2;
    QPushButton *btn_load_file;
    QPushButton *btn_save_to_file;
    QLabel *label;
    QPushButton *btn_generate_maze;
    QLabel *label_2;
    QSpinBox *spin_box_rows;
    QLabel *label_4;
    QSpinBox *spin_box_cols;
    QPushButton *btn_solving_maze;
    QSpinBox *spin_box_x_start;
    QLabel *label_3;
    QSpinBox *spin_box_y_start;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spin_box_y_finish;
    QSpinBox *spin_box_x_finish;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;

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
        graphicsView->setGeometry(QRect(40, 20, 503, 503));
        Button_Load_File_Cave = new QPushButton(Cave);
        Button_Load_File_Cave->setObjectName(QString::fromUtf8("Button_Load_File_Cave"));
        Button_Load_File_Cave->setGeometry(QRect(570, 20, 250, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Menlo")});
        font.setPointSize(24);
        Button_Load_File_Cave->setFont(font);
        Button_Load_File_Cave->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
""));
        Button_Save_File_Cave = new QPushButton(Cave);
        Button_Save_File_Cave->setObjectName(QString::fromUtf8("Button_Save_File_Cave"));
        Button_Save_File_Cave->setGeometry(QRect(570, 80, 250, 50));
        Button_Save_File_Cave->setFont(font);
        Button_Save_File_Cave->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        label_7 = new QLabel(Cave);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(570, 150, 251, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Menlo")});
        font1.setPointSize(25);
        font1.setBold(true);
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(Cave);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(570, 250, 161, 30));
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(Cave);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(570, 300, 161, 33));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_16->setAlignment(Qt::AlignCenter);
        spin_cave_rows_ = new QSpinBox(Cave);
        spin_cave_rows_->setObjectName(QString::fromUtf8("spin_cave_rows_"));
        spin_cave_rows_->setGeometry(QRect(730, 250, 91, 33));
        spin_cave_rows_->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_cave_rows_->setMaximum(50);
        spin_cave_cols_ = new QSpinBox(Cave);
        spin_cave_cols_->setObjectName(QString::fromUtf8("spin_cave_cols_"));
        spin_cave_cols_->setGeometry(QRect(730, 300, 91, 33));
        spin_cave_cols_->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_cave_cols_->setMaximum(50);
        label_17 = new QLabel(Cave);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(545, 350, 181, 33));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_17->setAlignment(Qt::AlignCenter);
        spin_cave_life_chance = new QSpinBox(Cave);
        spin_cave_life_chance->setObjectName(QString::fromUtf8("spin_cave_life_chance"));
        spin_cave_life_chance->setGeometry(QRect(730, 350, 91, 33));
        spin_cave_life_chance->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_cave_life_chance->setMaximum(100);
        btn_generate_cave_ = new QPushButton(Cave);
        btn_generate_cave_->setObjectName(QString::fromUtf8("btn_generate_cave_"));
        btn_generate_cave_->setGeometry(QRect(570, 400, 250, 50));
        btn_generate_cave_->setFont(font);
        btn_generate_cave_->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        spin_live_up = new QSpinBox(Cave);
        spin_live_up->setObjectName(QString::fromUtf8("spin_live_up"));
        spin_live_up->setGeometry(QRect(730, 510, 91, 33));
        spin_live_up->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_live_up->setMaximum(8);
        spin_born_up = new QSpinBox(Cave);
        spin_born_up->setObjectName(QString::fromUtf8("spin_born_up"));
        spin_born_up->setGeometry(QRect(730, 590, 91, 33));
        spin_born_up->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_born_up->setMaximum(8);
        spin_born_low = new QSpinBox(Cave);
        spin_born_low->setObjectName(QString::fromUtf8("spin_born_low"));
        spin_born_low->setGeometry(QRect(730, 550, 91, 33));
        spin_born_low->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_born_low->setMaximum(8);
        spin_live_low = new QSpinBox(Cave);
        spin_live_low->setObjectName(QString::fromUtf8("spin_live_low"));
        spin_live_low->setGeometry(QRect(730, 470, 91, 33));
        spin_live_low->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_live_low->setMaximum(8);
        label_50 = new QLabel(Cave);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(650, 590, 61, 30));
        label_50->setFont(font1);
        label_50->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_50->setAlignment(Qt::AlignCenter);
        label_51 = new QLabel(Cave);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(650, 550, 61, 30));
        label_51->setFont(font1);
        label_51->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_51->setAlignment(Qt::AlignCenter);
        label_52 = new QLabel(Cave);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(650, 470, 61, 30));
        label_52->setFont(font1);
        label_52->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_52->setAlignment(Qt::AlignCenter);
        label_53 = new QLabel(Cave);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(650, 510, 61, 30));
        label_53->setFont(font1);
        label_53->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_53->setAlignment(Qt::AlignCenter);
        label_54 = new QLabel(Cave);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(560, 490, 71, 30));
        label_54->setFont(font1);
        label_54->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_54->setAlignment(Qt::AlignCenter);
        label_55 = new QLabel(Cave);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(560, 570, 71, 30));
        label_55->setFont(font1);
        label_55->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_55->setAlignment(Qt::AlignCenter);
        TabWidget->addTab(Cave, QString());
        Maze = new QWidget();
        Maze->setObjectName(QString::fromUtf8("Maze"));
        graphicsView_2 = new QGraphicsView(Maze);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 20, 503, 503));
        graphicsView_2->setBaseSize(QSize(0, 0));
        graphicsView_2->setStyleSheet(QString::fromUtf8(""));
        graphicsView_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        graphicsView_2->setRenderHints(QPainter::TextAntialiasing);
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
        btn_save_to_file = new QPushButton(Maze);
        btn_save_to_file->setObjectName(QString::fromUtf8("btn_save_to_file"));
        btn_save_to_file->setGeometry(QRect(570, 80, 250, 50));
        btn_save_to_file->setFont(font);
        btn_save_to_file->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
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
        label->setGeometry(QRect(570, 150, 251, 60));
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
        btn_generate_maze->setGeometry(QRect(570, 380, 250, 50));
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
        label_2->setGeometry(QRect(570, 250, 161, 30));
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
        spin_box_rows->setGeometry(QRect(730, 250, 91, 33));
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
        label_4->setGeometry(QRect(570, 300, 161, 33));
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
        spin_box_cols->setGeometry(QRect(730, 300, 91, 33));
        spin_box_cols->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_cols->setMaximum(50);
        btn_solving_maze = new QPushButton(Maze);
        btn_solving_maze->setObjectName(QString::fromUtf8("btn_solving_maze"));
        btn_solving_maze->setGeometry(QRect(180, 560, 250, 50));
        btn_solving_maze->setFont(font);
        btn_solving_maze->setStyleSheet(QString::fromUtf8("QPushButton {background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #797979, stop:0.48 #696969, stop:0.52 #5e5e5e, stop:1 #4f4f4f);\n"
"    border-radius: 3px;\n"
"    border: 1px solid #333333;\n"
"    color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #595959, stop:0.48 #494949, stop:0.52 #434343, stop:1 #363636);\n"
"    border-style: inset;\n"
"}\n"
""));
        spin_box_x_start = new QSpinBox(Maze);
        spin_box_x_start->setObjectName(QString::fromUtf8("spin_box_x_start"));
        spin_box_x_start->setGeometry(QRect(730, 470, 91, 33));
        spin_box_x_start->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_x_start->setMaximum(50);
        label_3 = new QLabel(Maze);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 490, 76, 30));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);
        spin_box_y_start = new QSpinBox(Maze);
        spin_box_y_start->setObjectName(QString::fromUtf8("spin_box_y_start"));
        spin_box_y_start->setGeometry(QRect(730, 510, 91, 33));
        spin_box_y_start->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_y_start->setMaximum(50);
        label_5 = new QLabel(Maze);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 470, 31, 30));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(Maze);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 510, 31, 30));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_6->setAlignment(Qt::AlignCenter);
        spin_box_y_finish = new QSpinBox(Maze);
        spin_box_y_finish->setObjectName(QString::fromUtf8("spin_box_y_finish"));
        spin_box_y_finish->setGeometry(QRect(730, 590, 91, 33));
        spin_box_y_finish->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_y_finish->setMaximum(50);
        spin_box_x_finish = new QSpinBox(Maze);
        spin_box_x_finish->setObjectName(QString::fromUtf8("spin_box_x_finish"));
        spin_box_x_finish->setGeometry(QRect(730, 550, 91, 33));
        spin_box_x_finish->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"font-weight: bold;\n"
"    border-radius: 3px;\n"
"    border: 1px solid rgb(255, 255, 255)\n"
"}"));
        spin_box_x_finish->setMaximum(50);
        label_25 = new QLabel(Maze);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(690, 550, 31, 30));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(Maze);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(690, 590, 31, 30));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(Maze);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(570, 570, 91, 30));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-family: Menlo;\n"
"font-size: 25pt;\n"
"color:white;\n"
"background: none;\n"
"font-weight: bold;\n"
"}"));
        label_27->setAlignment(Qt::AlignCenter);
        TabWidget->addTab(Maze, QString());
        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "View", nullptr));
        Button_Load_File_Cave->setText(QCoreApplication::translate("View", "Load File", nullptr));
        Button_Save_File_Cave->setText(QCoreApplication::translate("View", "Save File", nullptr));
        label_7->setText(QCoreApplication::translate("View", "CAVE GENNERATING \n"
"SETTING", nullptr));
        label_15->setText(QCoreApplication::translate("View", "CAVE ROWS:", nullptr));
        label_16->setText(QCoreApplication::translate("View", "CAVE COLS:", nullptr));
        label_17->setText(QCoreApplication::translate("View", "LIFE CHANCE:", nullptr));
        btn_generate_cave_->setText(QCoreApplication::translate("View", "GENERATE", nullptr));
        label_50->setText(QCoreApplication::translate("View", " UP:", nullptr));
        label_51->setText(QCoreApplication::translate("View", "LOW:", nullptr));
        label_52->setText(QCoreApplication::translate("View", "LOW:", nullptr));
        label_53->setText(QCoreApplication::translate("View", " UP:", nullptr));
        label_54->setText(QCoreApplication::translate("View", "LIVE", nullptr));
        label_55->setText(QCoreApplication::translate("View", "BORN", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Cave), QCoreApplication::translate("View", "Cave", nullptr));
        btn_load_file->setText(QCoreApplication::translate("View", "Load File", nullptr));
        btn_save_to_file->setText(QCoreApplication::translate("View", "Save File", nullptr));
        label->setText(QCoreApplication::translate("View", "MAZE GENNERATING \n"
"SETTING", nullptr));
        btn_generate_maze->setText(QCoreApplication::translate("View", "GENERATE", nullptr));
        label_2->setText(QCoreApplication::translate("View", "MAZE ROWS:", nullptr));
        label_4->setText(QCoreApplication::translate("View", "MAZE COLS:", nullptr));
        btn_solving_maze->setText(QCoreApplication::translate("View", "Solving Maze", nullptr));
        label_3->setText(QCoreApplication::translate("View", "START", nullptr));
        label_5->setText(QCoreApplication::translate("View", "X:", nullptr));
        label_6->setText(QCoreApplication::translate("View", "Y:", nullptr));
        label_25->setText(QCoreApplication::translate("View", "X:", nullptr));
        label_26->setText(QCoreApplication::translate("View", "Y:", nullptr));
        label_27->setText(QCoreApplication::translate("View", "FINISH", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(Maze), QCoreApplication::translate("View", "Maze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
