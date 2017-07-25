TEMPLATE = app

QT += qml quick
CONFIG += c++11

HEADERS += \
    incubator.h

SOURCES += \
    main.cpp \
    incubator.cpp

RESOURCES += qml.qrc

# Binary and obj files path
DESTDIR = bin
UI_DIR = build
MOC_DIR = build
RCC_DIR = build
OBJECTS_DIR = build
