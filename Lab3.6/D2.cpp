#include "D2.h"

D2::D2(int x, int y, int z, int i)
	: D1(x, z, i)
{
	d2 = y;
}

void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D1();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}