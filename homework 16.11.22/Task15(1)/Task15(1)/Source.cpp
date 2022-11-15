#include<iostream>
using namespace std; 

void main()
{
	int n, m;
	cout << "Enter n and m." << endl;
	cin >> n;
	cin >> m;
	int* arr_n = new int[n];
	int* arr_m = new int[m];
	int flag;
	for (int i = 0; i < n; i++)
	{
		cin >> arr_n[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr_m[i];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr_n[i] == arr_m[j])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}

		}
		if (flag == 0)
		{
			break;
		}
	}
	if (flag == 1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	delete [] arr_n;
	delete[] arr_m;
}
