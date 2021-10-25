#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i;
	P = 1;
	n = 1;
	while (n <= 25)
	{
		S = 0;
		i = 1;
		while (i <= n)
		{
			S += 1/n;
			i++;
		}
		P *= 1 + S;
		n++;
	}
	cout << P << endl;
	P = 1;
	n = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{

			S += 1 / n;
			i++;
		} while (i <= n);
		P *= 1 + S;
		n++;
	} while (n <= 25);
	cout << P << endl;
	P = 1;
	for (n = 1; n <= 25; n++)
	{
		S = 0;
		for (i = 1; i <= n; i++)
		{
			S += 1 / n;
		}
		P *= 1 + S;
	}
	cout << P << endl;
	P = 1;
	for (n =25 ; n >= 1; n--
		)

	{
		S = 0;
		for (i = n; i >= 1; i--
			)

		{
			S += 1 / n;


		}
		P *= 1 + S;
	}
	cout << P << endl;
	return 0;
}