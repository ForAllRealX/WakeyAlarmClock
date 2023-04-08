#ifndef ANSWERHANDLINGUTILS_H
#define ANSWERHANDLINGUTILS_H

#include <qlineedit.h>

namespace AnswerHandlingUtils
{
	typedef bool isCorrect_t;

	isCorrect_t checkAnswer(QLineEdit* lineEd, int answer);
}

#endif // ANSWERHANDLINGUTILS_H