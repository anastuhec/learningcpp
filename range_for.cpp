#include <iostream>
using namespace std;

int main()
{

	int someNums[] = { 1, 101, -1, 502, 2040 };

	for (const int& aNum : someNums)
		cout << aNum << ' ';
	cout << endl;

	for (auto anElement : { 5, 222, 110, -45, 2026 })
		cout << anElement << ' ';
	cout << endl;

	char charArray[] = { 'a', 'b', 'c' };
	for (auto aChar : charArray)
		cout << aChar << ' ';
	cout << endl;

	double moreNums[] = { 3.14, -2.2, 101 };
		for (auto anElement : moreNums)
			cout << anElement << ' ';
	cout << endl;

	string sayHello("Hello world!");
	for (auto anElement : sayHello)
		cout << anElement << ' ';
	cout << endl;

	return 0;
}