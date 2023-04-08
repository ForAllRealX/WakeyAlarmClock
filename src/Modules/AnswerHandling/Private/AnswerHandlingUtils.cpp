#include "src/Modules/AnswerHandling/Public/AnswerHandlingUtils.h"

namespace AnswerHandlingUtils
{
	isCorrect_t checkAnswer(QLineEdit* lineEd, int answer)
	{
		return (lineEd->text().toInt() == answer) ? true : false;
	}
}