//--------------------------------------------------------------------------------------
// File: SimpleBezier11.cpp
//
// This sample shows an simple implementation of the DirectX 11 Hardware Tessellator
// for rendering a Bezier Patch.
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------

// Control point for a Bezier patch
struct BEZIER_CONTROL_POINT
{
	float m_vPosition[3];
};

// Simple Bezier patch for a Mobius strip
// 4 patches with 16 control points each
const BEZIER_CONTROL_POINT g_MobiusStrip[64] = {
	{ 1.0f, -0.5f, 0.0f },
	{ 1.0f, -0.5f, 0.5f },
	{ 0.5f, -0.3536f, 1.354f },
	{ 0.0f, -0.3536f, 1.354f },
	{ 1.0f, -0.1667f, 0.0f },
	{ 1.0f, -0.1667f, 0.5f },
	{ 0.5f, -0.1179f, 1.118f },
	{ 0.0f, -0.1179f, 1.118f },
	{ 1.0f, 0.1667f, 0.0f },
	{ 1.0f, 0.1667f, 0.5f },
	{ 0.5f, 0.1179f, 0.8821f },
	{ 0.0f, 0.1179f, 0.8821f },
	{ 1.0f, 0.5f, 0.0f },
	{ 1.0f, 0.5f, 0.5f },
	{ 0.5f, 0.3536f, 0.6464f },
	{ 0.0f, 0.3536f, 0.6464f },
	{ 0.0f, -0.3536f, 1.354f },
	{ -0.5f, -0.3536f, 1.354f },
	{ -1.5f, 0.0f, 0.5f },
	{ -1.5f, 0.0f, 0.0f },
	{ 0.0f, -0.1179f, 1.118f },
	{ -0.5f, -0.1179f, 1.118f },
	{ -1.167f, 0.0f, 0.5f },
	{ -1.167f, 0.0f, 0.0f },
	{ 0.0f, 0.1179f, 0.8821f },
	{ -0.5f, 0.1179f, 0.8821f },
	{ -0.8333f, 0.0f, 0.5f },
	{ -0.8333f, 0.0f, 0.0f },
	{ 0.0f, 0.3536f, 0.6464f },
	{ -0.5f, 0.3536f, 0.6464f },
	{ -0.5f, 0.0f, 0.5f },
	{ -0.5f, 0.0f, 0.0f },
	{ -1.5f, 0.0f, 0.0f },
	{ -1.5f, 0.0f, -0.5f },
	{ -0.5f, 0.3536f, -1.354f },
	{ 0.0f, 0.3536f, -1.354f },
	{ -1.167f, 0.0f, 0.0f },
	{ -1.167f, 0.0f, -0.5f },
	{ -0.5f, 0.1179f, -1.118f },
	{ 0.0f, 0.1179f, -1.118f },
	{ -0.8333f, 0.0f, 0.0f },
	{ -0.8333f, 0.0f, -0.5f },
	{ -0.5f, -0.1179f, -0.8821f },
	{ 0.0f, -0.1179f, -0.8821f },
	{ -0.5f, 0.0f, 0.0f },
	{ -0.5f, 0.0f, -0.5f },
	{ -0.5f, -0.3536f, -0.6464f },
	{ 0.0f, -0.3536f, -0.6464f },
	{ 0.0f, 0.3536f, -1.354f },
	{ 0.5f, 0.3536f, -1.354f },
	{ 1.0f, 0.5f, -0.5f },
	{ 1.0f, 0.5f, 0.0f },
	{ 0.0f, 0.1179f, -1.118f },
	{ 0.5f, 0.1179f, -1.118f },
	{ 1.0f, 0.1667f, -0.5f },
	{ 1.0f, 0.1667f, 0.0f },
	{ 0.0f, -0.1179f, -0.8821f },
	{ 0.5f, -0.1179f, -0.8821f },
	{ 1.0f, -0.1667f, -0.5f },
	{ 1.0f, -0.1667f, 0.0f },
	{ 0.0f, -0.3536f, -0.6464f },
	{ 0.5f, -0.3536f, -0.6464f },
	{ 1.0f, -0.5f, -0.5f },
	{ 1.0f, -0.5f, 0.0f },
};
