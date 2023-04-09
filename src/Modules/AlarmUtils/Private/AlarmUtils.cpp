#include "AlarmUtils/Public/AlarmUtils.h"
#include <QGraphicsOpacityEffect>
#include <qpropertyanimation.h>

namespace AlarmUtils
{
	isCorrect_t checkAnswer(QLineEdit* lineEd, int answer)
	{
		return (lineEd->text().toInt() == answer) ? true : false;
	}

	void fadeWidget(QWidget* widget, AlarmUtils::fadeType f)
	{
		

		if (f == AlarmUtils::fadeType::fadeOut)
		{
			QGraphicsOpacityEffect* eff = new QGraphicsOpacityEffect(widget);
			widget->setGraphicsEffect(eff);
			eff->setOpacity(1);
			QPropertyAnimation* anim = new QPropertyAnimation(eff, "opacity", widget);
			anim->setDuration(4000);
			anim->setStartValue(1);
			anim->setEndValue(0);
			anim->setEasingCurve(QEasingCurve::OutBack);
			anim->start(QPropertyAnimation::DeleteWhenStopped);
		}
		else
		{
			QGraphicsOpacityEffect* eff = new QGraphicsOpacityEffect(widget);
			widget->setGraphicsEffect(eff);
			eff->setOpacity(0);
			QPropertyAnimation* anim = new QPropertyAnimation(eff, "opacity", widget);
			anim->setDuration(3500);
			anim->setStartValue(0);
			anim->setEndValue(1);
			anim->setEasingCurve(QEasingCurve::InBack);
			anim->start(QPropertyAnimation::DeleteWhenStopped);
		}
	}
} // AlarmUtils