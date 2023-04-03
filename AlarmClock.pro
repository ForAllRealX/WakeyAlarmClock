QT += core gui
QT += multimedia
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AlarmClock.cpp \
    AudioImpl.cpp \
    ProblemGenerator.cpp \
    debug/moc_mainwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    release/moc_mainwindow.cpp \
    src/AlarmClock/Private/AlarmClock.cpp \
    src/Modules/AnswerHandling/Private/AnswerHandlingUtils.cpp \
    src/Modules/Audio/src/AudioImpl.cpp \
    src/Modules/ProblemGenerator/Private/ProblemGenerator.cpp

HEADERS += \
    AlarmClock.h \
    ProblemGenerator.h \
    debug/moc_predefs.h \
    mainwindow.h \
    release/moc_predefs.h \
    src/AlarmClock/Public/AlarmClock.h \
    src/Modules/AnswerHandling/Public/AnswerHandlingUtils.h \
    src/Modules/ProblemGenerator/Public/ProblemGenerator.h \
    ui_mainwindow.h

FORMS += \
    mainwindow.ui \
    src/Forms/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .gitignore \
    .qmake.stash \
    AlarmClock.sln \
    AlarmClock.vcxproj \
    AlarmClock.vcxproj.filters \
    README.md \
    debug/AlarmClock.Build.CppClean.log \
    debug/AlarmClock.exe \
    debug/AlarmClock.exe.recipe \
    debug/AlarmClock.ilk \
    debug/AlarmClock.log \
    debug/AlarmClock.pdb \
    debug/AlarmClock.tlog/AlarmClock.lastbuildstate \
    debug/AlarmClock.tlog/AlarmClock.write.1u.tlog \
    debug/AlarmClock.tlog/CL.command.1.tlog \
    debug/AlarmClock.tlog/CL.read.1.tlog \
    debug/AlarmClock.tlog/CL.write.1.tlog \
    debug/AlarmClock.tlog/CustomBuild.command.1.tlog \
    debug/AlarmClock.tlog/CustomBuild.read.1.tlog \
    debug/AlarmClock.tlog/CustomBuild.write.1.tlog \
    debug/AlarmClock.tlog/link.command.1.tlog \
    debug/AlarmClock.tlog/link.read.1.tlog \
    debug/AlarmClock.tlog/link.write.1.tlog \
    debug/AlarmClock.tlog/moc.read.1u.tlog \
    debug/AlarmClock.tlog/moc.write.1u.tlog \
    debug/AlarmClock.tlog/uic.read.1u.tlog \
    debug/AlarmClock.tlog/uic.write.1u.tlog \
    debug/AlarmClock.vcxproj.FileListAbsolute.txt \
    debug/moc_predefs.h.cbt \
    debug/qmake/qtvars_x64_Debug.props \
    debug/qmake/temp/.qmake.stash \
    debug/qmake/temp/9B8A73EB-6064-3F94-AD53-9735E98CC45F.AlarmClock.designtime.idx \
    debug/qmake/temp/moc_predefs.h.cbt \
    debug/qmake/temp/props.txt \
    debug/qmake/temp/qtvars.log \
    debug/qmake/temp/qtvars.vcxproj \
    debug/qmake/temp/qtvars.vcxproj.filters \
    debug/qmake/temp/qtvars_x64_Debug.props \
    debug/qt.natvis \
    debug/qt_work.log \
    debug/vc143.pdb \
    release/AlarmClock.exe \
    release/AlarmClock.exe.recipe \
    release/AlarmClock.log \
    release/AlarmClock.tlog/AlarmClock.lastbuildstate \
    release/AlarmClock.tlog/AlarmClock.write.1u.tlog \
    release/AlarmClock.tlog/CL.command.1.tlog \
    release/AlarmClock.tlog/CL.read.1.tlog \
    release/AlarmClock.tlog/CL.write.1.tlog \
    release/AlarmClock.tlog/CustomBuild.command.1.tlog \
    release/AlarmClock.tlog/CustomBuild.read.1.tlog \
    release/AlarmClock.tlog/CustomBuild.write.1.tlog \
    release/AlarmClock.tlog/link.command.1.tlog \
    release/AlarmClock.tlog/link.read.1.tlog \
    release/AlarmClock.tlog/link.write.1.tlog \
    release/AlarmClock.tlog/moc.read.1u.tlog \
    release/AlarmClock.tlog/moc.write.1u.tlog \
    release/AlarmClock.tlog/uic.read.1u.tlog \
    release/AlarmClock.tlog/uic.write.1u.tlog \
    release/AlarmClock.tlog/unsuccessfulbuild \
    release/AlarmClock.vcxproj.FileListAbsolute.txt \
    release/moc_predefs.h.cbt \
    release/qmake/qtvars_x64_Release.props \
    release/qmake/temp/.qmake.stash \
    release/qmake/temp/9B8A73EB-6064-3F94-AD53-9735E98CC45F.AlarmClock.designtime.idx \
    release/qmake/temp/moc_predefs.h.cbt \
    release/qmake/temp/props.txt \
    release/qmake/temp/qtvars.log \
    release/qmake/temp/qtvars.vcxproj \
    release/qmake/temp/qtvars.vcxproj.filters \
    release/qmake/temp/qtvars_x64_Release.props \
    release/qt_work.log \
    src/Modules/Audio/Assets/AlarmSound.mp3

SUBDIRS += \
    debug/qmake/temp/qtvars.pro \
    release/qmake/temp/qtvars.pro
