#ifndef VIEW_H
#define VIEW_H


#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QBrush>
#include <QFileDialog>
#include <QMessageBox>
#include <cmath>
#include <QGraphicsItem>
    #include <QLine>
#include "../Controller/Controller.h"
QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

namespace s21 {
class View : public QMainWindow
{
    Q_OBJECT
public:
    View(Controller&& controller_,QWidget *parent = nullptr);
    ~View();

private:
    std::unique_ptr<Controller> controller;
    QGraphicsScene * scene;
    Ui::View *ui;
    void DrawMaze();
    void DrawSolvingMaze();
    void ClearLinesFromScene();

    void DrawCave();
private slots:
          void LoadFromFile();
          void GenerateMaze();
          void SaveToFileMaze();
          void SolvingMaze();
};
}
#endif // VIEW_H
