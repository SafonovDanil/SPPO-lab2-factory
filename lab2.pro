QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ClassUnit.cpp \
        MethodUnit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    CSharp/CSharpFactory.h \
    CSharp/CSharpMethodUnit.h \
    CSharp/CSharpPrintOperatorUnit.h \
    CSharp/CSharpUnit.h \
    ClassUnit.h \
    Cpp/CppFactory.h \
    Cpp/CppMethodUnit.h \
    Cpp/CppPrintOperatorUnit.h \
    Cpp/CppUnit.h \
    Java/JavaFactory.h \
    Java/JavaMethodUnit.h \
    Java/JavaPrintOperatorUnit.h \
    Java/JavaUnit.h \
    MethodUnit.h \
    Unit.h \
    ifactory.h
