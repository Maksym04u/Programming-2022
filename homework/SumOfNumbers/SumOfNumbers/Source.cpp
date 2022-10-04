#include<iostream>
using namespace std;

void main()
{
	int num;
	cout << "Pick number from 100 to 999" << endl;
	cin >> num;
	int suma;
	suma = num % 10 + num / 10 % 10 + num / 100;
	cout << "The sum of digits is " << suma << endl;

}