#include<iostream>
using namespace std;

void main()
{
	int a, b, c;
	cout << "Pick any three numbers" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((((a > 0) && (a <= 59)) && ((b > 0) && (b <= 59)) && ((a > 0) && (c <= 59))) && ((a <= 24) || (b <= 24) || (c <= 24)))
	{
		cout << "Your numbers can represent hours, minutes and seconds." << endl;
	}
	else
	{
		cout << "Your numbers can't represent hours, minutes and seconds." << endl;
	}

	

}