#ifndef VIEW_H
#define VIEW_H

#include <QBrush>
#include <QFileDialog>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QLine>
#include <QMainWindow>
#include <QMessageBox>
#include <QThread>
#include <QTimer>
#include <QtCore>
#include <QtGui>
#include <cmath>

#include "../Controller/Controller.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class View;
}
QT_END_NAMESPACE

namespace s21 {
class View : public QMainWindow {
  Q_OBJECT
public:
  View(Controller &&controller_, QWidget *parent = nullptr);
  ~View();

private:
  std::unique_ptr<Controller> controller;
  QGraphicsScene *scene;
  QList<QGraphicsLineItem *> vec_line;
  QGraphicsScene *scene_;
  Ui::View *ui;
  void DrawMaze();
  void DrawSolvingMaze();
  void ClearLinesFromScene();
  void DrawNextCave();
  size_t iter = 0;
  void DrawCave(const cave_type &);
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
} // namespace s21
#endif // VIEW_H
