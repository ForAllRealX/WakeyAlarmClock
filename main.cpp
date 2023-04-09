#include <QApplication>
#include <qobject.h>

#include <AlarmClock.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  

    MainWindow w;
    w.show();

    AlarmClock* alarmClock{new AlarmClock};
    alarmClock->setupUi(&w);

    QObject::connect(alarmClock->checkAnswerButton, SIGNAL(clicked()), alarmClock, SLOT(on_checkAnswerButton_clicked()));   

    // Create a first problem to base on
    alarmClock->m_probGenerator.generateProblem();
    alarmClock->updateLabels();

    return a.exec();
}
