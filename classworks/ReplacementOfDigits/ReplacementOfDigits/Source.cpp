#include<iostream>
using namespace std;

int main()
{
	int m, b = 0, a = 0;
	cout << "Enter m = ";
	cin >> m;
	while (m > 0)
	{
		a = m % 10;
		m = m / 10;
		b = b * 10;
		b = b + a;
	}
	cout << b;
	return 0;
}