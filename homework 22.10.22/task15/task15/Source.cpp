// Task 15
#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	double x;
	const double PI = 3.141592653589793;
	x = (PI / 6) * (PI / 6) * (5 * PI / 6);
	double y;
	y = (pow(PI, 2) / 8) - ((PI / 4) * abs(x));
	double n, Pohubka;
	double arrS[10]{};
	double arrP[10]{};
	for (int i = 0; i < 10; ++i)
	{
		cout << "Enter n:" << endl;
		cin >> n;
		double S = 0;
		for (int j = 0; j != n; ++j)
		{
			S += cos((2 * j - 1) * x * PI / 180.0) / (2 * j - 1);
		}
		Pohubka = abs((S - y) / y) * 100;
		arrS[i] = S;
		arrP[i] = Pohubka;
	}
	cout << "X       \t" << "S            \t" << "Y          \t" << "Pohubka        \t" << endl;
	for (int i = 0; i < 9; ++i)
	{
		cout << x << "         " << arrS[i] << "          " << y << "          " << arrP[i] << endl;
	}
}