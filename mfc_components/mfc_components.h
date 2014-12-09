// mfc_components.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmfc_componentsApp:
// See mfc_components.cpp for the implementation of this class
//

class Cmfc_componentsApp : public CWinApp
{
public:
	Cmfc_componentsApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_componentsApp theApp;