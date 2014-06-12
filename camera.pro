greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
TEMPLATE = app
TARGET = camera

QT += multimedia multimediawidgets

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
