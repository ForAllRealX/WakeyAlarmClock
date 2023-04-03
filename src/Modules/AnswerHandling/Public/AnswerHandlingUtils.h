#ifndef ANSWERHANDLINGUTILS_H
#define ANSWERHANDLINGUTILS_H

#include <ProblemGenerator.h>

#include <qlineedit.h>
#include <qpushbutton.h>
#include <qvalidator.h>

namespace AnswerHandlingUtils
{
	typedef bool t_isCorrect;
	
	const QValidator* setInputValidator();
	void deleteInputValidator();
	t_isCorrect checkAnswer(QLineEdit* lineEd, int answer);
}

#endif // ANSWERHANDLINGUTILS_H