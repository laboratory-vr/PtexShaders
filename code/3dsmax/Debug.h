/*-------------------------------------------------------------------------*\
-----------------------------------------------------------------------------
Ptex Shaders
http://www.mankua.com/Ptex/Ptex.php

Author : Diego A. Casta�o
Copyright : (c) 2004-2011 Mankua Software Inc.

Licence : ZLib licence :

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
-----------------------------------------------------------------------------
\*-------------------------------------------------------------------------*/

#ifndef _DEBUG_H_
#define _DEBUG_H_

#define DODEBUG

#ifdef DODEBUG

void Debug( int a, int b );
void Debug( TSTR str, TSTR v, bool nl = true );
void Debug( TSTR str, int v, bool nl = true );
void Debug( TSTR str, unsigned int v, bool nl = true );
void Debug( TSTR str, float v, bool nl = true );
void Debug( TSTR str, IPoint2 v, bool nl = true );
void Debug( TSTR str, IPoint3 v, bool nl = true );
void Debug( TSTR str, Point3 v, bool nl = true );
void Debug( TSTR str, Point2 v, bool nl = true );

#else

#define debug

#endif

#endif