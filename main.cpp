#include "mainwindow.h"

#include <QApplication>
#include <AlarmClock.h>

class ProblemGenerator;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    

    MainWindow w;
    AlarmClock alarmClock{};

    alarmClock.setupUi(&w);
    alarmClock.m_probGenerator.generateProblem();

    alarmClock.updateLabels();

    w.show();

    return a.exec();
}
