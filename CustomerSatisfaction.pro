QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changedialog.cpp \
    client.cpp \
    clientlistmodel.cpp \
    deletedialog.cpp \
    editdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    shareddata.cpp

HEADERS += \
    changedialog.h \
    client.h \
    clientlistmodel.h \
    deletedialog.h \
    editdialog.h \
    mainwindow.h \
    shareddata.h

FORMS += \
    changedialog.ui \
    deletedialog.ui \
    editdialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Ressourcen.qrc
