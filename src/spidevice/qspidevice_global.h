#ifndef QTIOHELPER_GLOBAL_H
#define QTIOHELPER_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef QT_STATIC
#if defined(QT_SPIDEVICE_LIB)
#  define QTSPIDEVICESHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTSPIDEVICESHARED_EXPORT Q_DECL_IMPORT
#endif
#endif

#endif // QTIOHELPER_GLOBAL_H
