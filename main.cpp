#pragma once
#include<iostream>
#include"TPolinom.h"
#include"TList.h"
#include<math.h>

using namespace std;

int main() {
	try {
		TPolinom p, p1;
		TMonom m[3];
		cin >> p ;
		cout << p;
		cin >> p1 ;
		cout << p1 << endl;
		p += p1;
		cout << p << endl;
		cin >> m[1];
		p.AddMonom(m[1]);
		cout << p << endl;
		
	}
	catch (char *s) {
		cout << s;
	}
	system("pause");
	return 0;
}