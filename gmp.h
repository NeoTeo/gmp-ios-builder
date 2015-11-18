/* Definitions for GNU multiple precision functions.   -*- mode: c -*-

Copyright 1991, 1993, 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002, 2003,
2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012 Free Software Foundation,
Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#ifndef __GMP_DISPATCH_H__

#include "TargetConditionals.h"

#if TARGET_OS_MAC
  #if TARGET_IPHONE_SIMULATOR
    #include "gmp-iPhoneSimulator.h"
  #elif TARGET_OS_IPHONE
    #include "gmp-iPhoneOS.h"
  #else
    #if TARGET_CPU_X86_64
       #include "gmp-MacOSX.h"
    #else
      #error "unsupported MacOSX cpu for libgmp framework"
    #endif
  #endif
#else
  #error "unsupported platform for libgmp framework"
#endif

#define __GMP_DISPATCH_H__
#endif /* __GMP_DISPATCH_H__ */


