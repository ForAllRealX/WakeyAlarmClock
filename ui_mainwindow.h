/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionf;
    QWidget *centralwidget;
    QLabel *solveQuestionBanner;
    QLineEdit *answerLine;
    QLabel *yourAnswerBanner;
    QLabel *plusMinusOne;
    QLabel *plusMinusTwo;
    QFrame *decorativeLine;
    QLabel *dynNumberOne;
    QLabel *dynNumberTwo;
    QLabel *dynNumberThree;
    QFrame *decorativeLine_2;
    QTimeEdit *currentTime;
    QProgressBar *progressBar;
    QPushButton *checkAnswerButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1024, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 720));
        MainWindow->setMaximumSize(QSize(1024, 720));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 223, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(86, 173, 130, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(45, 182, 111, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 127, 63, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 156, 78, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        QBrush brush7(QColor(211, 211, 211, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QBrush brush8(QColor(75, 75, 75, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush9(QColor(21, 116, 81, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush9);
        QBrush brush10(QColor(127, 255, 191, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush12(QColor(0, 0, 0, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QBrush brush13(QColor(240, 240, 240, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush14(QColor(227, 227, 227, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        QBrush brush15(QColor(160, 160, 160, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        QBrush brush16(QColor(105, 105, 105, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush16);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        QBrush brush17(QColor(245, 245, 245, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush18(QColor(0, 0, 0, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush19(QColor(0, 120, 215, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush19);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionf = new QAction(MainWindow);
        actionf->setObjectName("actionf");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        solveQuestionBanner = new QLabel(centralwidget);
        solveQuestionBanner->setObjectName("solveQuestionBanner");
        solveQuestionBanner->setGeometry(QRect(220, 50, 581, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font1.setPointSize(28);
        font1.setItalic(false);
        solveQuestionBanner->setFont(font1);
        solveQuestionBanner->setLayoutDirection(Qt::LeftToRight);
        solveQuestionBanner->setAlignment(Qt::AlignCenter);
        answerLine = new QLineEdit(centralwidget);
        answerLine->setObjectName("answerLine");
        answerLine->setGeometry(QRect(470, 434, 71, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font2.setPointSize(20);
        answerLine->setFont(font2);
        answerLine->setMaxLength(256);
        answerLine->setAlignment(Qt::AlignCenter);
        answerLine->setCursorMoveStyle(Qt::LogicalMoveStyle);
        answerLine->setClearButtonEnabled(false);
        yourAnswerBanner = new QLabel(centralwidget);
        yourAnswerBanner->setObjectName("yourAnswerBanner");
        yourAnswerBanner->setGeometry(QRect(410, 374, 201, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font3.setPointSize(26);
        yourAnswerBanner->setFont(font3);
        plusMinusOne = new QLabel(centralwidget);
        plusMinusOne->setObjectName("plusMinusOne");
        plusMinusOne->setGeometry(QRect(460, 270, 21, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Light")});
        font4.setPointSize(32);
        plusMinusOne->setFont(font4);
        plusMinusOne->setAlignment(Qt::AlignCenter);
        plusMinusTwo = new QLabel(centralwidget);
        plusMinusTwo->setObjectName("plusMinusTwo");
        plusMinusTwo->setGeometry(QRect(570, 270, 20, 51));
        plusMinusTwo->setFont(font4);
        plusMinusTwo->setAlignment(Qt::AlignCenter);
        decorativeLine = new QFrame(centralwidget);
        decorativeLine->setObjectName("decorativeLine");
        decorativeLine->setGeometry(QRect(280, 90, 481, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font5.setPointSize(18);
        decorativeLine->setFont(font5);
        decorativeLine->setFrameShape(QFrame::HLine);
        decorativeLine->setFrameShadow(QFrame::Sunken);
        dynNumberOne = new QLabel(centralwidget);
        dynNumberOne->setObjectName("dynNumberOne");
        dynNumberOne->setGeometry(QRect(380, 280, 71, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI Historic")});
        font6.setPointSize(32);
        dynNumberOne->setFont(font6);
        dynNumberOne->setFrameShape(QFrame::NoFrame);
        dynNumberOne->setFrameShadow(QFrame::Plain);
        dynNumberOne->setAlignment(Qt::AlignCenter);
        dynNumberTwo = new QLabel(centralwidget);
        dynNumberTwo->setObjectName("dynNumberTwo");
        dynNumberTwo->setGeometry(QRect(490, 280, 71, 41));
        dynNumberTwo->setFont(font6);
        dynNumberTwo->setAlignment(Qt::AlignCenter);
        dynNumberThree = new QLabel(centralwidget);
        dynNumberThree->setObjectName("dynNumberThree");
        dynNumberThree->setGeometry(QRect(590, 280, 71, 41));
        dynNumberThree->setFont(font6);
        dynNumberThree->setAlignment(Qt::AlignCenter);
        decorativeLine_2 = new QFrame(centralwidget);
        decorativeLine_2->setObjectName("decorativeLine_2");
        decorativeLine_2->setGeometry(QRect(430, 404, 161, 20));
        decorativeLine_2->setFont(font5);
        decorativeLine_2->setFrameShape(QFrame::HLine);
        decorativeLine_2->setFrameShadow(QFrame::Sunken);
        currentTime = new QTimeEdit(centralwidget);
        currentTime->setObjectName("currentTime");
        currentTime->setGeometry(QRect(390, 130, 251, 71));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI Semilight")});
        font7.setPointSize(36);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setUnderline(false);
        currentTime->setFont(font7);
        currentTime->setFocusPolicy(Qt::WheelFocus);
        currentTime->setAcceptDrops(false);
        currentTime->setLayoutDirection(Qt::LeftToRight);
        currentTime->setAutoFillBackground(true);
        currentTime->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0.023, x2:0.983, y2:1, stop:0 rgba(43, 255, 148, 255), stop:0.363128 rgba(109, 210, 170, 255), stop:0.659218 rgba(127, 193, 160, 255), stop:1 rgba(141, 141, 141, 255));\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.023, x2:0.983, y2:1, stop:0 rgba(43, 255, 148, 255), stop:0.363128 rgba(109, 210, 170, 255), stop:0.659218 rgba(127, 193, 160, 255), stop:1 rgba(141, 141, 141, 255));"));
        currentTime->setWrapping(false);
        currentTime->setFrame(false);
        currentTime->setAlignment(Qt::AlignCenter);
        currentTime->setReadOnly(true);
        currentTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        currentTime->setAccelerated(false);
        currentTime->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        currentTime->setProperty("showGroupSeparator", QVariant(false));
        currentTime->setCurrentSection(QDateTimeEdit::HourSection);
        currentTime->setCalendarPopup(false);
        currentTime->setTimeSpec(Qt::LocalTime);
        currentTime->setTime(QTime(6, 37, 0));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(440, 495, 131, 21));
        progressBar->setAutoFillBackground(false);
        progressBar->setMinimum(0);
        progressBar->setMaximum(5);
        progressBar->setValue(3);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        checkAnswerButton = new QPushButton(centralwidget);
        checkAnswerButton->setObjectName("checkAnswerButton");
        checkAnswerButton->setGeometry(QRect(550, 440, 61, 21));
        checkAnswerButton->setFont(font);
#if QT_CONFIG(tooltip)
        checkAnswerButton->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        checkAnswerButton->setAutoFillBackground(false);
        checkAnswerButton->setCheckable(false);
        checkAnswerButton->setChecked(false);
        checkAnswerButton->setAutoDefault(false);
        checkAnswerButton->setFlat(false);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Wakey Alarm Clock", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        actionf->setText(QCoreApplication::translate("MainWindow", "f", nullptr));
        solveQuestionBanner->setText(QCoreApplication::translate("MainWindow", "Solve All Questions To Turn Off Alarm:", nullptr));
        answerLine->setText(QString());
        yourAnswerBanner->setText(QCoreApplication::translate("MainWindow", "Your Answer:", nullptr));
        plusMinusOne->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        plusMinusTwo->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        dynNumberOne->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        dynNumberTwo->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
        dynNumberThree->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%v/5", nullptr));
        checkAnswerButton->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
