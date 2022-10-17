//а)Задано натуральне число  , дійсні числа      Отримати послідовність дійсних чисел  , де    
#include<iostream>
using namespace std;

int main()
{
	float n;
	cout << "Enter quantity of numbers:" << endl;
	cin >> n;
	float a, b;
	cout << "Enter a and b (b > a > 0):" << endl;
	cin >> a;
	cin >> b;
	float x, y;
	float h;
	h = (b - a) / n;
	for (int i = 0; i != n; ++i)
	{
		x = a + i * h;
		y = pow(x, 0.5);
		cout << y << " ";
	}
	
}