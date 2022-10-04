#include<iostream>
using namespace std;

void main()
{
	int k;
	cout << "Enter the number of seconds of the day:" << endl;
	cin >> k;
	if (k > 3600 * 24)
	{
		cout << "The number is too big" << endl;
	}
	else
	{
		int hours, minutes, seconds;
		hours = k / 3600;
		minutes = (k - hours * 3600) / 60;
		seconds = k - hours * 3600 - minutes * 60;
		cout << "Hours - " << hours << endl;
		cout << "Minutes - " << minutes << endl;
		cout << "Seconds - " << seconds << endl;

	}
}