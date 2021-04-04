#include "D3.h"

D3::D3(int x, int y, int z, int i)
	: D1(x, z, i)
{
	d3 = y;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_D1();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}