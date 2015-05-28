//
//  LLColorPaint.h
//
//  Copyright (c) 2011-2015 Ripeware, LLC. All rights reserved.
//

#ifndef __LL_COLOR_PAINT_H__
#define __LL_COLOR_PAINT_H__

#include "LLBase.h"

#define LLColorPaintClassName "Ovaltine.ColorPaint"

LLColorPaintRef LLColorPaintCreate(void);

void LLColorPaintSetRGBA(LLColorPaintRef colorPaint, double r, double g, double b, double a);
void LLColorPaintGetRGBA(LLColorPaintRef colorPaint, double * r, double * g, double * b, double * a);

CGColorRef LLColorPaintGetCGColor(LLColorPaintRef colorPaint);

bool LLColorPaintEquals(LLColorPaintRef colorPaint1, LLColorPaintRef colorPaint2);

#endif /* __LL_COLOR_PAINT_H__ */
