TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        datagate.cpp \
        main.cpp \
        temperatursensor.cpp

HEADERS += \
    datagate.h \
    temperatursensor.h
