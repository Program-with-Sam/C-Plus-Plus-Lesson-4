#include<iostream>
#include<string>
#include"MathFunctions.h"

using namespace std;

int main()
{
	cout << "3 + 4 = " << to_string(funcs::add(3, 4)) << endl;
	cout << "3 - 4 = " << to_string(funcs::sub(3, 4)) << endl;
	cout << "3 * 4 = " << to_string(funcs::mul(3, 4)) << endl;
	cout << "3 / 4 = " << to_string(funcs::div(3, 4)) << endl;
}

