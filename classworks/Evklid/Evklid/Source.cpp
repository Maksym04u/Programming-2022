// ��������� ������
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	int m, n;
	cout << "Enter 2 numbers:" << endl;
	cout << "m = ";
	cin >> m;
	cout<< "" << endl;
	cout << "n = ";
	cin >> n;
	if (m == n)
	{
		cout << "����i����� �i����� = " << m << endl;
	}
	else if (m > n)
	{
		if (m % n == 0)
		{
			cout << "����i����� �i����� = " << n << endl;
		}
		else
		{
			int i = n - 1;
			while ((m % i != 0) || (n % i != 0))
			{
				i = i - 1;
			}
			cout << "����i����� �i����� = " << i << endl;
		}
	}
	else
	{
		if (n % m == 0)
		{
			cout << "����i����� �i����� = " << m << endl;
		}
		else
		{
			int i = m - 1;
			while ((m % i != 0) || (n % i != 0))
			{
				i = i - 1;
			}
			cout << "����i����� �i����� = " << i << endl;
		}
	}
	return 0;
}
