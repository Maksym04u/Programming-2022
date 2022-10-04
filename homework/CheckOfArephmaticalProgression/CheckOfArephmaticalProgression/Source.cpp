#include<iostream>
using namespace std;

void main()
{
	int a, b, c;
	cout << "Pick any three numbers" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a + b == 2 * c) || (a + c == 2 * b) || (b + c == 2 * a))
	{
		cout << "Your numbers can be an arephmatical progression." << endl;
		
	}
	else
	{
		cout << "your numbers can't be an arephmatical progrssion." << endl;
	}
}