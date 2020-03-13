#pragma once
#include<iostream>
#include"TPolinom.h"

#include<math.h>

using namespace std;

int main() {
	try {
		TPolinom pol, pol_t;
		TMonom m[3];
		for (int i = 0; i < 3; i++)
		{
			m[i].coef = 7 * pow(-1, i);
			m[i].p_x = i / 2;
			m[i].p_y = 2;
			m[i].p_z = i;
			pol.AddMonom(m[i]);
		}
		cout << pol << endl;
		pol *= m[1];
		cout << pol << endl;
	}
	catch (char *s) {
		cout << s;
	}
	system("pause");
	return 0;
}