require qt5.inc

DEPENDS += "qtbase"

# older copyright year than what e.g. qtbase is using now
LIC_FILES_CHKSUM = "file://LICENSE.LGPL;md5=4193e7f1d47a858f6b7c0f1ee66161de \
                    file://LICENSE.GPL;md5=d32239bcb673463ab874e80d47fae504 \
                    file://LGPL_EXCEPTION.txt;md5=0145c4d1b6f96a661c2c139dfb268fb6"

PACKAGES =. "${PN}-assistant \
             ${PN}-designer \
             ${PN}-linguist \
             ${PN}-qmlviewer \
             ${PN}-qtconnectivity \
             ${PN}-qtmultimedia \
             ${PN}-qtlocation \
             ${PN}-qtdeclarative \
             ${PN}-qtxmlpatterns \
             ${PN}-qtconfig \
             ${PN}-qtquick1 \
             ${PN}-qtscript \
             ${PN}-qtbase \
             ${PN}-qthelp \
             ${PN}-qt \
             "

FILES_${PN}-assistant = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/assistant_*.qm \
            "

FILES_${PN}-designer = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/designer_*.qm \
            "

FILES_${PN}-linguist = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/linguist_*.qm \
            "

FILES_${PN}-qmlviewer = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qmlviewer_*.qm \
            "

FILES_${PN}-qtconnectivity = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtconnectivity_*.qm \
            "

FILES_${PN}-qtmultimedia = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtmultimedia_*.qm \
            "

FILES_${PN}-qtlocation = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtlocation_*.qm \
            "

FILES_${PN}-qtdeclarative = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtdeclarative_*.qm \
            "

FILES_${PN}-qtxmlpatterns = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtxmlpatterns_*.qm \
            "

FILES_${PN}-qtconfig = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtconfig_*.qm \
            "

FILES_${PN}-qtquick1 = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtquick1_*.qm \
            "

FILES_${PN}-qtscript = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtscript_*.qm \
            "

FILES_${PN}-qtbase = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qtbase_*.qm \
            "

FILES_${PN}-qthelp = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qt_help_*.qm \
            "

FILES_${PN}-qt = " \
                ${OE_QMAKE_PATH_TRANSLATIONS}/qt_*.qm \
            "
