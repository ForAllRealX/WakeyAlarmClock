#ifndef ALARMUTILS_H
#define ALARMUTILS_H

#include <qlineedit.h>

namespace AlarmUtils
{
	typedef bool isCorrect_t;

	enum class fadeType
	{
		fadeIn = 2,
		fadeOut = 3
	};

	isCorrect_t checkAnswer(QLineEdit* lineEd, int answer);
	void fadeWidget(QWidget* widget, fadeType f);
}

#endif // ALARMUTILS_H