#include "src/Modules/AnswerHandling/Public/AnswerHandlingUtils.h"

inline int AnswerHandlingUtils::returnTextAsInt(QLineEdit* lineEd)
{
	return lineEd->text().toInt();
}

