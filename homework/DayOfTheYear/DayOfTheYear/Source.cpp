#include<iostream>
using namespace std;

void main()
{
	int k;
	cout << "Enter number of the day of the year:" << endl;
	cin >> k;
	while (k > 7)
	{

		k -= 7;
	
	}
	cout << "Day of the week is " << k << endl;
}