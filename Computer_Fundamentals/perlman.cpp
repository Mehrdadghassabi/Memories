// ConsoleApplication50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double A;
	cin >> A;
	float arrnum[22] = { 2,2.0761,2.1814,2.2936,2.4152,2.5477,2.6926,2.8519,
	3.0279,3.2237,3.4430,3.6903,3.9716,4.2952,4.6713,5.1140,5.6436,6.2890,
	7.0935,8.1257,9.4987,10.001 };
	for (int i = 0 ; i < 25 ; ++i) {
		double pi = 3.1415926;
		double delta;
		if ((A >= arrnum[i]) && (A < arrnum[i + 1]))
		{
			double teta = (26 - i - 1)*(pi) / 180;
			double t = sin((26 - i - 1)*(pi) / 180);
			double y = cos((26 - i - 1)*(pi) / 180);
			double a = A * A + y * y;
			double b = (2 * t * y) -(2 * y * y * teta);
			double c = -1+(teta*teta*y*y)-(2*t*y*teta)+(t*t);
			delta = b*b - 4 * a*c;
			double s;
			s = ((sqrt(delta) - b) / (2 * a));
			cout << setprecision(3) << setiosflags(ios::fixed | ios::showpoint) << s;

			break;
		}
	}
}
