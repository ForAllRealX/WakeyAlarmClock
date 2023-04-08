#include <QApplication>
#include <qobject.h>

#include <AlarmClock.h>

static constexpr int NUM_PROBLEMS{ 5 };

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    

    MainWindow w;
    w.show();

    AlarmClock* alarmClock{new AlarmClock};

    alarmClock->setupUi(&w);
    QObject::connect(alarmClock->checkAnswerButton, SIGNAL(clicked()), alarmClock, SLOT(on_checkAnswerButton_clicked()));

#if 0
    while (alarmClock->getCorrectCounter() <= NUM_PROBLEMS)
    {
        static int cc = alarmClock->getCorrectCounter();
        static int old_cc = 0;

        if (cc != old_cc)
        {
            alarmClock->m_probGenerator.generateProblem();
            alarmClock->updateLabels();
            ++old_cc;
        }
    }
#endif


#if 0
    do
    {
        alarmClock->m_probGenerator.generateProblem();
        alarmClock->updateLabels();

    } while (alarmClock->getCorrectCounter() >= NUM_PROBLEMS);
#endif
    

    return a.exec();
}
