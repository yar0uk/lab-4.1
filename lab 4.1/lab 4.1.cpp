#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k,i;
	double S;
	cout << "k = "; cin >> k;
	S = 0;
	i = k;
	while (i <= 15)
	{
		S += cos(1.*i)/(1+sin(1.*i)*sin(1.*i));
		i++;
	}
	cout << S << endl;
		S = 0;
	i = k;
	do {
		S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
		i++;
	} while (i <= 15);
	cout << S << endl;
	S = 0;
	for (i = k; i <= 15; i++)
	{
		S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	S = 0;
	for (i = 15; i >= k; i--)
	{
		S += cos(1. * i) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	return 0;
}
