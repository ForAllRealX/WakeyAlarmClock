#include <AlarmClock.h>

void AlarmClock::playAudio()
{
    m_alarmPlayer->setAudioOutput(m_audioOutput);

    // TODO: Don't hardcode location here. Find a location where it'd be in a release build
    m_alarmPlayer->setSource(QUrl::fromLocalFile("/Users/GD/Documents/AlarmClock/src/Modules/Audio/Assets/AlarmSound.mp3"));
    m_alarmPlayer->setLoops(QMediaPlayer::Loops::Infinite);

    m_alarmPlayer->play();
}
