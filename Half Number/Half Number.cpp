#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution_7 
// Half Number.

int ReadNumber()
{
	int Num;

	cout << "Enter a Number " << endl;
	cin >> Num;
	return Num;
}

float CalculateHalfNumber(int Num)
{
	return (float)Num / 2;
}

void PrintResult(int Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
	cout << Result << endl;
}


int main()
{
	PrintResult(ReadNumber());
	return 0;
}

