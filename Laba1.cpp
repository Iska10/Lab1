#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double y;

	while (true)
	{
		cout << " Введите значение X" << endl;
		cin >> x ;
	
		if (x<=-7)
		{
			y = 0;
		}
		else if (x>-7 && x<=-3)
		{
			y = x+7;
		}
		else if (x>-3 && x<=-2)
		{
			y = -4;
		}
		else if (x>-2 && x<2)
		{
			y = x*x;
		}
		else if (x>=2 && x<4)
		{
			y = -x*2+8;
		}
		else if (x>=4)
		{
			y = 0;
		}
		cout << " y = " << y << endl;
	}
	return 0;
}
