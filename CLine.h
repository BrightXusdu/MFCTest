#pragma once
#include "pch.h"
#include "CP2.h"


class CLine
{
public:
	void MoveTo(CDC* pDC, CP2 p0);
	void MoveTo(CDC* pDC, double x, double y);
	void LineTo(CDC* pDC, CP2 p1);
	void LineTo(CDC* pDC, double x,double y);
public:
	CP2 P0;
	CP2 P1;	
};

