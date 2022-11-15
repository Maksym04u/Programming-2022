#include<iostream>
#include<string>;
using namespace std;

int main()
{    
	char text[100];
	cout << "Enter text:" << endl;
	cin.getline(text, 100);
	for (int i = 0; i < strlen(text); i++)
	{
		if (isdigit(text[i]) || isalpha(text[i]))
		{
			cout << text[i];
		}
	}
	
	return 0;
}