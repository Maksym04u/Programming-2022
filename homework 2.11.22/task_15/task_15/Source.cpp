#include<iostream>
using namespace std;

int main()
{

	double arrA[2]{};
	double arrB[2]{};
	double arrC[2]{};
	cout << "Enter coordinates of 3 dots." << endl;

	cout << "Enter x and y:" << endl;
	cout << "Coordinates of A:" << endl;
	cin >> arrA[0];
	cin >> arrA[1];
	cout << "Coordinates of B:" << endl;
	cin >> arrB[0];
	cin >> arrB[1];
	cout << "Coordinates of C:" << endl;
	cin >> arrC[0];
	cin >> arrC[1];

	cout << "Enter coordinates of dot in triangle." << endl;
	double x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	double distA = 0;
	double distB = 0;
	double distC = 0;
	distA = pow(pow(x - arrA[0], 2) + pow(y - arrA[1], 2), 0.5);
	distB = pow(pow(x - arrB[0], 2) + pow(y - arrB[1], 2), 0.5);
	distC = pow(pow(x - arrC[0], 2) + pow(y - arrC[1], 2), 0.5);
	double dot1, dot2;
	dot1 = min(distA, distB, distC);
	double line = 0;
	if (dot1 == distA)
	{
		dot2 = min(distB, distC);
	}
	if (dot1 == distB)
	{
		dot2 = min(distA, distC);
	}
	if (dot1 == distC)
	{
		dot2 = min(distA, distB);
	}
	if ((dot1 == distA || dot2 == distA) && (dot2 == distB || dot1 == distB))
	{
		
		line = pow(pow(arrB[0] - arrA[0], 2) + pow(arrB[1] - arrA[1], 2), 0.5);
	}
	if ((dot1 == distA || dot2 == distA) && (dot2 == distA || dot1 == distA))
	{
		
		line = pow(pow(arrC[0] - arrA[0], 2) + pow(arrC[1] - arrA[1], 2), 0.5);
	}
	if ((dot1 == distC || dot2 == distC) && (dot2 == distB || dot1 == distB))
	{
		
		line = pow(pow(arrB[0] - arrC[0], 2) + pow(arrB[1] - arrC[1], 2), 0.5);
	}
	double m;
	m = dot1 * dot1 - (dot2 * dot2 - line * line) / (line * 2);
	double len;
	len = dot1 * dot1 - m * m;
	cout << "The least distance is " << m << endl;
	return 0;
}