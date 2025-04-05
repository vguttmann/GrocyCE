// GrocyCE.h : main header file for the GrocyCE application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#ifdef POCKETPC2003_UI_MODEL
#include "resourceppc.h"
#endif 

// CGrocyCEApp:
// See GrocyCE.cpp for the implementation of this class
//

class CGrocyCEApp : public CWinApp
{
public:
	CGrocyCEApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
public:
	afx_msg void OnAppAbout();

	DECLARE_MESSAGE_MAP()
};

extern CGrocyCEApp theApp;
