#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <mainwindow.h>
#include <ui_mainwindow.h>

#include <ProblemGenerator.h>
#include <QLabel>

#include <QMediaPlayer>
#include <QAudioOutput>

class AlarmClock : public Ui::MainWindow
{
public:
    AlarmClock()
        : m_probGenerator{}
        , alarmPlayer{new QMediaPlayer}
        , audioOutput{new QAudioOutput} //QAudioOutput defaults to the OS's default audio output, which is fine for most purposes in this projects' scope
        , correctCounter{0}
    {
        playAudio();
    }

    friend class ProblemGenerator;
    // Composition determined to be best, as an Alarm Clock HAS A Problem Generator
    ProblemGenerator m_probGenerator;

    ~AlarmClock()
    {
        delete alarmPlayer;
        delete audioOutput;
    }

    void updateLabels();

private:

    QMediaPlayer* alarmPlayer;
    QAudioOutput* audioOutput;
    void playAudio();
    int correctCounter;

    static constexpr QChar plus = '+';
    static constexpr QChar minus = '-';
};

#endif // ALARMCLOCK_H
