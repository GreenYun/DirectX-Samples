//------------------------------------------------------------------------------
// File: VMRMix.cpp
//
// Desc: DirectShow sample code
//       Implementation of CVMRMixApp
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//------------------------------------------------------------------------------

#include "stdafx.h"
#include "VMRMix.h"
#include "VMRMixDlg.h"
#include "vmrutil.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CVMRMixApp

BEGIN_MESSAGE_MAP(CVMRMixApp, CWinApp)
    //{{AFX_MSG_MAP(CVMRMixApp)
        // NOTE - the ClassWizard will add and remove mapping macros here.
        //    DO NOT EDIT what you see in these blocks of generated code!
    //}}AFX_MSG
    ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVMRMixApp construction

CVMRMixApp::CVMRMixApp()
{
    // TODO: add construction code here,
    // Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CVMRMixApp object

CVMRMixApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CVMRMixApp initialization

BOOL CVMRMixApp::InitInstance()
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

    // Initialize COM
    CoInitializeEx(NULL, COINIT_MULTITHREADED);

    // Verify that the Video Mixing Renderer is present (requires Windows XP).
    // Otherwise, this sample cannot continue.
    if (!VerifyVMR())
    {
       CoUninitialize();   
       return FALSE;
    }
    CoUninitialize();   

    // Display the main application dialog
    CVMRMixDlg dlg;
    m_pMainWnd = &dlg;

    int nResponse = (int) dlg.DoModal();
    if (nResponse == IDOK)
    {
        // TODO: Place code here to handle when the dialog is
        //  dismissed with OK
    }
    else if (nResponse == IDCANCEL)
    {
        // TODO: Place code here to handle when the dialog is
        //  dismissed with Cancel
    }

    // Since the dialog has been closed, return FALSE so that we exit the
    //  application, rather than start the application's message pump.
    return FALSE;
}
