//------------------------------------------------------------------------------
// File: StillView.cpp
//
// Desc: DirectShow sample code - an MFC based C++ StillView application.
//
// Copyright (c) 1998 - 2002 Microsoft Corporation.  All rights reserved.
//------------------------------------------------------------------------------


#include "stdafx.h"
#include "StillView.h"
#include "StillViewDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStillViewApp

BEGIN_MESSAGE_MAP(CStillViewApp, CWinApp)
	//{{AFX_MSG_MAP(CStillViewApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStillViewApp construction

CStillViewApp::CStillViewApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CStillViewApp object

CStillViewApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CStillViewApp initialization

BOOL CStillViewApp::InitInstance()
{
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#if (_MSC_VER <= 1200)
#ifdef _AFXDLL
    // In MFC 5.0, Enable3dControls and Enable3dControlsStatic are obsolete because
    // their functionality is incorporated into Microsoft's 32-bit operating systems.
    Enable3dControls();         // Call this when using MFC in a shared DLL
#else
    Enable3dControlsStatic();   // Call this when linking to MFC statically
#endif
#endif

	CStillViewDlg dlg;
	m_pMainWnd = &dlg;

	dlg.DoModal();

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
