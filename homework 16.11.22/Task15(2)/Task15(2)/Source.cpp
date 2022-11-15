#include<iostream>
using namespace std;

void main()
{
	int n;
	cout << "Enter n:" << endl;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	cout << "Enter numbers of matrix" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}


	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{   
			if (i == j)
			{
				continue;
			}
			flag = 0;
			if ((i > j) && (arr[i][j] < 0))
			{
				flag = 1;
			}
			if ((i < j) && (arr[i][j] > 0))
			{
				flag = 1;
			}
			if (flag == 0)
			{
				break;
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

	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}