#include <iostream>
using namespace std;
void testFunction();
// this total is global, visible to main and testFunction
// int total=10;
int main()
{
	// this total is local to main
	int number, total = 0;
	//int number;
	do
	{
		cout << "Enter a number(0 to end): ";
		cin >> number;
		total += number;
		cout << total << endl;
		testFunction();
	} while (number != 0);
	cout << "Total: " << total << endl;
	testFunction();
	system("pause");
	return 0;
}
void testFunction()
{
	// this total is local to this function
	int total = 0;
	cout << "Total from testFunction: " << total << endl;
