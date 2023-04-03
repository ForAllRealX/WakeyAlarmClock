#include "src/Modules/AnswerHandling/Public/AnswerHandlingUtils.h"

namespace AnswerHandlingUtils
{
#if 0
	// Probably delete all this. Unsafe. Take out and implement it directly into MainWindow constructors/destructors.
	// Perhaps create a separate file for setup utilities, as there seems to be some use for that.
	const QValidator* setInputValidator()
	{
		const QValidator* inputValidator = new QIntValidator(ProblemGenerator::MIN_ANSWER, ProblemGenerator::MAX_ANSWER);
		return inputValidator;
	}

	void deleteInputValidator()
	{
		if ()
			delete inputValidator;
	}
#endif

	t_isCorrect checkAnswer(QLineEdit* lineEd, int answer)
	{
		return (lineEd->text().toInt() == answer) ? true : false;
	}
}