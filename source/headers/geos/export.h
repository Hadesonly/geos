/**********************************************************************
 * $Id: export.h 2045 2008-03-17 20:18:24Z Ragi Burhum $
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.refractions.net
 *
 * Copyright (C) 2009   Ragi Y. Burhum <ragi@burhum.com>
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation. 
 * See the COPYING file for more information.
 *
 **********************************************************************/

#ifndef GEOS_EXPORT_H
#define GEOS_EXPORT_H

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
    #  if defined( GEOS_DLL_LIBRARY_STATIC )
    #    define GEOS_DLL
    #  elif defined( GEOS_DLL_LIBRARY )
    #    define GEOS_DLL   __declspec(dllexport)
    #  else
    #    define GEOS_DLL   __declspec(dllimport)
    #  endif 
#else
    #  define GEOS_DLL
#endif  


#endif // ndef GEOS_EXPORT_H


