//-----------------------------------------------------------------------------
// Name: DirectShow Sample -- Ticker9
// 
// Copyright (c) Microsoft Corporation. All rights reserved.
//-----------------------------------------------------------------------------


This sample is an interactive video player, which uses the
Windowless mode of the DirectX 9 Video Mixing Renderer 9
to blend video and text.

It uses the VMR9's IVMRMixerBitmap9 interface to blend text onto
the bottom portion of the video window, in a style similar to
closed-captioning text.  When the video file opens, Ticker 
creates a bitmap with a default text string and begins to
scroll it across the bottom of the screen.  You may change the
scrolling text with the "Set Text String" dialog.  You may 
adjust the font and color of the blended text by choosing the 
"Set Font" menu option.

If you switch to "Use Static Image" on the Ticker menu,
a bitmap will be loaded from the application's resource file.
The loaded bitmap uses green text over a white background,
and Ticker configures the VMR to use a white color key, which
causes the text background to be transparent.


NOTE: This sample requires DirectX 9 (or greater) functionality 
and will exit on other systems.

KNOWN ISSUE: Some popular video drivers incorrectly advertise the 
D3DPTEXTURECAPS_NONPOW2CONDITIONAL flag, which indicates that the driver 
supports non-power-of-2 textures.  Because of this driver bug, you may 
see garbled text in the place of the alpha-blended text bitmap.  


Windows Media is not supported in most VMR9 samples
---------------------------------------------------

Because of the Windows Media Format SDK (and WMStub.lib) dependency,
along with the extra filter connection and key provider code required,
the DirectShow SDK Video Mixing Renderer 9 samples do not support
rendering and playback of Windows Media content (ASF, WMA, WMV) by default.

If you attempt to open a Windows Media file with these samples, you will be 
presented with a message box indicating the lack of Windows Media support, 
with a pointer to the samples that do properly support Windows Media files.

The following samples provide the necessary extra code and project settings
to enable proper Windows Media support (including unlocking of "keyed" files):

        - ASFCopy   - AudioBox  
        - Jukebox   - PlayWndASF

For more detailed information, see "Using DirectShow->Windows Media Applications"
in the DirectX SDK documentation.

