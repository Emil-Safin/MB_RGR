//#include"stdafx.h"
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<iomanip>

using namespace std;

long double a = 1;
long double b = 2;
int n = 1;
long double h = (b - a) / n;
int lines = 25;
long double* js = new long double[lines];

long double f(long double x)
{
	return log(x);
}

long double x(int i)
{
	return a + h * i;
}

int main()
{
	int t = 0;
	cout << setw(15) << "n | " << setw(17) << "Jh" << endl;
	while (n <= 16777216) {
		long double j = 0.0;

		// ***** СЧИТАЕМ J ПО МЕТОДУ ЛЕВЫХ ПРЯМОУГОЛЬНИКОВ
		for (int i = 1; i <= n - 1; i++)
		{
			j += (h)*f(x(i));

		}


		js[t] = j;

		cout << setw(15) << setprecision(15) << n << "|" << "       " << setw(17) << j;
		cout << endl;
		n = n * 2;
		t++;
		h = (b - a) / n;
	}
	return 0;
}
