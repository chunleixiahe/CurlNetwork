﻿#ifndef CURLNETWORK_GLOBAL_H
#define CURLNETWORK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CURLNETWORK_SOURCECODE)
#  define CURLNETWORKSHARED_EXPORT
#elif defined(CURLNETWORK_LIBRARY)
#  define CURLNETWORKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CURLNETWORKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CURLNETWORK_GLOBAL_H
