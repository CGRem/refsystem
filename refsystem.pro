QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
LIBS += -lshlwapi
SOURCES += \
    functions.cpp \
    main.cpp \
    objects.cpp \
    procedures.cpp \
    settings.cpp \
    sqlite/sqlite3.c \
    widget.cpp

HEADERS += \
    functions.h \
    objects.h \
    procedures.h \
    settings.h \
    sqlite/sqlite3.h \
    widget.h

FORMS += \
    settings.ui \
    widget.ui
	
RESOURCES +=
RC_FILE = connect_ico.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
