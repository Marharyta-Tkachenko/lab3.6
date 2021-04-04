#pragma once
#include "D1.h"

class D3 : private D1
{
private:
	int d3;

public:
	D3(int d1, int d3, int b1, int b2);
	void show_D3();
};