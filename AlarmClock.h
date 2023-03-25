#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <mainwindow.h>
#include <ProblemGenerator.h>
#include <QLabel>
#include <ui_mainwindow.h>
#include <QMediaPlayer>
#include <assert.h>


class AlarmClock : public Ui::MainWindow
{
public:
    AlarmClock()
       : m_probGenerator{}
       , correctCounter{0}
{
}
    void updateLabels();

    QString genNumStringOne;
    QString genNumStringTwo;
    QString genNumStringThree;

    // Composition determined to be best, as an Alarm Clock HAS A Problem Generator
    ProblemGenerator m_probGenerator;

    friend class ProblemGenerator;
private:

    void instantiateAudio();
    int correctCounter;

    static constexpr QChar plus = '+';
    static constexpr QChar minus = '-';
};

#endif // ALARMCLOCK_H
