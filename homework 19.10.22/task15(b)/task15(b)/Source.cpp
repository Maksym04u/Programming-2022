//����� ��� �����, , � ³����, ��   � �� �����, � � ���� � ���� �䒺��� �����.�����  � ����� ������ �����������, �� ����������� ����� ������ �䒺���� ������(� ������� �������).��������:
#include<iostream>
using namespace std;

int main()
{
	int a1, a2, mini;
	mini = 10000000000000000;
	cout << "Enter a1 (a1 > 0):" << endl;
	cin >> a1;
	cout << "Now you need to enter numbers, but 1 of them must be < 0" << endl;
	for (int i = 0; ;)
	{
		cout << "Enter random number" << endl;
		cin >> a2;
		if (a2 < 0)
		{
			break;
		}
		if ((a1 + a2) < mini)
		{
			mini = a1 + a2;
			a1 = a2;
		}
		


	}
	cout << "The smallest sum of numbers is " << mini << endl;
	return 0;
}