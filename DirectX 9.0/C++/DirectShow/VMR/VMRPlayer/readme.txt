//-----------------------------------------------------------------------------
// Name: Windows XP DirectShow Sample -- VMRPlayer
// 
// Copyright (c) Microsoft Corporation. All rights reserved.
//-----------------------------------------------------------------------------


Description
===========

This sample demonstrates using the Video Mixing Renderer to blend
one or two running videos and a static image.  

Begin by opening a primary video stream from the File menu.  If you
would like to render a second file that will be alpha-blended with
the primary file, then open a secondary video stream from the File menu.

To control size, position, and alpha blending properties of the 
primary or secondary video, choose "Primary Stream" or "Secondary Stream"
from the VMR Properties menu.  By default, the Primary stream will have
an alpha value of 1.0 and the secondary stream will blend with an 
alpha value of 0.5.  The properties dialogs are implemented as modal dialogs.

You may also overlay an alpha-blended static image by opening the 
"Static App Image" option on the VMR Properties menu.  Enable the
"Display App Image" checkbox to cause the image to appear.  By default,
the image will be centered and will blend with an alpha value of 0.5.

NOTE: This sample requires Windows XP (or greater) functionality 
and will exit on other systems.


Usage:
======
        VMRPlayer </P filename>

	/P: Optional filename to automatically render and play at startup


Windows Media support in VMR samples
------------------------------------

Because of the Windows Media Format SDK (and WMStub.lib) dependency,
along with the extra filter connection and key provider code required,
the DirectShow SDK Video Mixing Renderer samples do not fully support
rendering and playback of Windows Media content (ASF, WMA, WMV) by default.

Many of these samples allow you to render ASF/WMA/WMV files with the legacy
DirectShow ASF Reader filter, which is adequate for simple playback.  This method,
however, does not offer the benefits of the newer Windows Media ASF Reader filter
and does not support "dekeying" of keyed Windows Media content.

For more detailed information, see "Using DirectShow->Windows Media Applications"
in the DirectX SDK documentation.
