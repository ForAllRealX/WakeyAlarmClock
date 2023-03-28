#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <mainwindow.h>
#include <ProblemGenerator.h>
#include <QLabel>
#include <ui_mainwindow.h>


class AlarmClock : public Ui::MainWindow
{
public:
    AlarmClock()
       : m_probGenerator{}
       , correctCounter{0}
{
        playAudio();
}
    void updateLabels();

    QString genNumStringOne;
    QString genNumStringTwo;
    QString genNumStringThree;

    friend class ProblemGenerator;
    // Composition determined to be best, as an Alarm Clock HAS A Problem Generator
    ProblemGenerator m_probGenerator;

private:

    void playAudio();
    int correctCounter;

    static constexpr QChar plus = '+';
    static constexpr QChar minus = '-';
};

#endif // ALARMCLOCK_H
