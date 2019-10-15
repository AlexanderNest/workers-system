TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mainwindow.cpp \
    companywindow.cpp \
    company.cpp \
    director.cpp \
    worker.cpp

HEADERS += \
    mainwindow.hpp \
    companywindow.hpp \
    company.hpp \
    director.hpp \
    worker.hpp
