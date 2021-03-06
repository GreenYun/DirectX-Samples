//------------------------------------------------------------------------------
// File: PlayCapMoniker.h
//
// Desc: DirectShow sample code - header file for PlayCapMoniker
//       previewer application.
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//------------------------------------------------------------------------------


//
// Function prototypes
//
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hInstP, LPSTR lpCmdLine, int nCmdShow);
LRESULT CALLBACK WndMainProc (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

HRESULT GetInterfaces(void);
HRESULT CaptureVideoByMoniker();
HRESULT AddCaptureMonikerToGraph(IMoniker *pMoniker);
HRESULT FindCaptureDeviceMoniker(IMoniker **pMoniker);
HRESULT HandleGraphEvent(void);

HRESULT SetupVideoWindow(void);
void ResizeVideoWindow(void);

void Msg(TCHAR *szFormat, ...);
void CloseInterfaces(void);

// Remote graph viewing functions
HRESULT AddGraphToRot(IUnknown *pUnkGraph, DWORD *pdwRegister);
void RemoveGraphFromRot(DWORD pdwRegister);

//
// Macros
//
#define SAFE_RELEASE(x) { if (x) x->Release(); x = NULL; }

#define JIF(x) if (FAILED(hr=(x))) \
    {Msg(TEXT("FAILED(hr=0x%x) in ") TEXT(#x) TEXT("\n\0"), hr); return hr;}

//
// Constants
//
#define DEFAULT_VIDEO_WIDTH     320
#define DEFAULT_VIDEO_HEIGHT    320

#define APPLICATIONNAME TEXT("PlayCapMoniker Sample\0")
#define CLASSNAME       TEXT("VidCapPreviewerByMoniker9\0")

// Application-defined message to notify app of filtergraph events
#define WM_GRAPHNOTIFY  WM_APP+1

//
// Resource constants
//
#define IDI_VIDPREVIEW          100
