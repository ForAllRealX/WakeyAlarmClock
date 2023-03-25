#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class ProblemGenerator;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    friend ProblemGenerator;

protected:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
