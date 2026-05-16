#include <iostream>
using namespace std;

int main()
{
	for (;;)		// an infinite loop
	{
		cout << "Enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << "Do you wish to correct this numbers? (y/n) : ";
		char changeNumber = '\0';
		cin >> changeNumber;

		if (changeNumber == 'y')
			continue;	// restart the loop

		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;

		cout << "Press x to exit or any other key to recalculate" << endl;
		char userSelection = '\0';
		cin >> userSelection;

		if (userSelection == 'x')
			break;	// exit the infinite loop
	}

	cout << "Goodbye!" << endl;

	return 0;
}