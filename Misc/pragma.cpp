#include <bits/stdc++.h>
using namespace std;

//Pragma is not supported by gcc/g++ compilers.

void func1();
void func2();

//stratup pragma will run func1 in the beginning just before program startup.
//startup pragma will be executed just before the control goes to main.
#pragma startup func1

//exit pragma wil be executed just before the control returns from main().
//i.e. it will run just beofre the program exit.
#pragma exit func2

void func1()
{
	cout << "Inside func1()\n";
}

void func2()
{
	cout << "Inside func2()\n";
}

int main()
{
	void func1();
	void func2();
	cout << "Inside main()\n";

	return 0;
}

// This code is contributed by shivanisinghss2110
