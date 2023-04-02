#include "mainwindow.h"

#include <QApplication>

#include <AlarmClock.h>
#include <Modules/AnswerHandling/Public/AnswerHandlingUtils.h>

constexpr int NUM_PROBLEMS{ 5 };

class ProblemGenerator;

int main(int argc, char *argv[])
{
    using namespace AnswerHandlingUtils;

    QApplication a(argc, argv);    

    MainWindow w;
    AlarmClock alarmClock{};

    alarmClock.setupUi(&w);

    alarmClock.m_probGenerator.generateProblem();
    alarmClock.updateLabels();

    w.show();
#if 0
    for (int problemNum = 0; problemNum > NUM_PROBLEMS; problemNum++)
    {
        static int userAnswer{ 0 };

        userAnswer = returnTextAsInt(alarmClock.answerLine);   
    }
#endif
    return a.exec();
}
