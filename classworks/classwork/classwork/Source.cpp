#include<iostream>
using namespace std;

int main()
{
	int m;
	cout << "Enter m = ";
	cin >> m;
	int k = 0;
	while (pow(4, k) < m) {
		k = k + 1;
	}
	cout << "k = " << k << endl;
	return 0;
}