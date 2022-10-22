#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, k;
	double S;

	cout << "k = "; cin >> k; cout << endl;

	S = 0;
	i = k;
	while (i <= 15)
	{
		S += cos(i) / (1 + sin(i) * sin(i));
		i++;
	}
	cout << "S = " << S << endl;

	S = 0;
	i = k;
	do
	{
		S += cos(i) / (1 + sin(i) * sin(i));
		i++;
	} while (i <= 15);
	cout << "S = " << S << endl;

	S = 0;
	for (i = k; i <= 15; i++)
	{
		S += cos(i) / (1 + sin(i) * sin(i));
	}
	cout << "S = " << S << endl;

	S = 0;
	for (i = 15; i >= k; i--)
	{
		S += cos(i) / (1 + sin(i) * sin(i));
	}
	cout << "S = " << S << endl;

	cin.get();
	system("pause");
	return 0;
}