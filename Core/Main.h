/******************************************************************************\
* 
* 
*  Copyright (C) 2004 Daniel 'Necr0Potenc3' Cavalcanti
* 
* 
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2 of the License, or
*  (at your option) any later version.
* 
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
* 
* 	Jun 07th, 2004 -- yay, started
* 
\******************************************************************************/


#ifndef _MAIN_H_INCLUDED
#define _MAIN_H_INCLUDED

/* INTERNALS */
BOOL APIENTRY DllMain(HINSTANCE hDLLInst, DWORD fdwReason, LPVOID lpvReserved);
void UnloadIRW(void);

/* EXPORTS */
void Install(void);
HINSTANCE GetIRWInstance(void);
char* GetIRWVersion(void);

#endif
