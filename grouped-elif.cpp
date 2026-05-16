/*#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday=0): ";

	int dayInput = Sunday;
	cin >> dayInput;

	if (dayInput == Sunday)
		cout << "Sunday was named after the Sun" << endl;
	else if (dayInput == Monday)
		cout << "Monday was named after the Moon" << endl;
	else if (dayInput == Tuesday)
		cout << "Tuesday was named after Mars" << endl;
	else if (dayInput == Wednesday)
		cout << "Wednesday was named after Mercury" << endl;
	else if (dayInput == Thursday)
		cout << "Thursday was named after Jupiter" << endl;
	else if (dayInput == Friday)
		cout << "Friday was named after Venus" << endl;
	else if (dayInput == Saturday)
		cout << "Saturday was named after Saturn" << endl;
	else
		cout << "Wrong input, execute again!" << endl;

	return 0;
}*/



#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};

	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday=0): ";

	int dayInput = Sunday;
	cin >> dayInput;

	switch (dayInput)
	{

	case Sunday:
		cout << "Sunday was named after the Sun" << endl;
		break;

	case Monday:
		cout << "Monday was named after the Moon" << endl;
		break;

	case Tuesday:
		cout << "Tuesday was named after Mars" << endl;
		break;

	case Wednesday:
		cout << "Wednesday was named after Mercury" << endl;
		break;

	case Thursday:
		cout << "Thursday was named after Jupiter" << endl;
		break;

	case Friday:
		cout << "Friday was named after Venus" << endl;
		break;

	case Saturday:
		cout << "Saturday was named after Saturn" << endl;
		break;

	default:
		cout << "Wrong input, execute again!" << endl;
		break;

	}

	return 0;

}

