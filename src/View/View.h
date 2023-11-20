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
#include <QThread>
#include <QTimer>
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
    QGraphicsScene * scene_;
    Ui::View *ui;
    void DrawMaze();
    void DrawSolvingMaze();
    void ClearLinesFromScene();
    void DrawNextCave();
    size_t iter = 0;
    void DrawCave(const cave_type&);
private slots:
       void DrawIteration();
          void LoadFromFile();
            void LoadFromFileCave();
          void GenerateMaze();
          void SaveToFileMaze();
          void SaveToFileCave();
          void SolvingMaze();
          void GenerateCave();
          void GenerateCaveSlow();
};
}
#endif // VIEW_H
