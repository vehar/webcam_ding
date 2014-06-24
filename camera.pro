greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
TEMPLATE = app
TARGET = camera

/*
 unix {
     LIBS += -L/usr/lib/i386-linux-gnu/
 }
 win32 {
    INCLUDEPATH += "C:\Serial-Lib"
    LIBS += -L"C:\Serial-Lib"
}
*/

QT += multimedia multimediawidgets
QT += testlib
QT += printsupport

Q_IMPORT_PLUGIN(QprintSupport)

HEADERS = \
    camera.h \
    subscreen.h \
    QCustomPlot/qcustomplot/qcustomplot.h

SOURCES = \
    main.cpp \
    camera.cpp \
    subscreen.cpp \
    QCustomPlot/qcustomplot/qcustomplot.cpp

FORMS += \
    camera.ui \
    subscreen.ui


QT+=widgets
