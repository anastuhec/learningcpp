/*#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Functions declarations
double Area(double radius);
double Circumference(double radius);
void SayHello();

int main()
{
	SayHello();
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	// Call function Area
	cout << "Area is: " << Area(radius) << endl;

	// Call function Circumference
	cout << "Circumference is: " << Circumference(radius) << endl;

	return 0;
}

// Function definitions
double Area(double radius)
{
	return Pi * radius * radius;
}

double Circumference(double radius)
{
	return 2 * Pi * radius;
}

void SayHello()
{
	cout << "Hello world!" << endl;
}

*/

/*#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << numbers[index] << " ";
	cout << endl;
}

void DisplayArray(char characters[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << characters[index] << " ";
	cout << endl;
}

int main()
{
	int myNums[4] = { 5,10,15,20 };
	DisplayArray(myNums, 4);

	char myStatement[7] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
	DisplayArray(myStatement, 7);
	
	return 0;
}
*/

/*#include <iostream>
using namespace std;

const double Pi = 3.1416;

// output parameter result by reference

void Area(double radius, double& result)
{
	result = Pi * radius * radius;
}

int main()
{
	double radius = 0;
	cout << "Enter radius: " << endl;
	cin >> radius;

	double areaFetched = 0;
	Area(radius, areaFetched);

	cout << "The area is: " << areaFetched << endl;

	return 0;
}*/

/*#include <iostream>
using namespace std;

const double Pi = 3.14159265;

inline long DoubleNum(int inputNum)
{
	return inputNum * 2;
}

int main()
{
	cout << "Enter an integer: ";
	int inputNum = 0;
	cin >> inputNum;

	//Call inline function
	cout << "Double is: " << DoubleNum(inputNum) << endl;

	return 0;
}*/


// lambda functions to display elements in an array and sort them
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void DisplayName(vector<int>& dynArray)
{
	for_each(dynArray.begin(), dynArray.end(), \
		[](int Element) {cout << Element << " ";});

	cout << endl;
}

int main()
{
	vector<int> myNums;
	myNums.push_back(501);
	myNums.push_back(-5);
	myNums.push_back(11);

	DisplayName(myNums);

	cout << "Sorting elements in ascending order" << endl;

	sort(myNums.begin(), myNums.end(), \
		[](int Num1, int Num2) {return (Num2 > Num1);});

	DisplayName(myNums);

	return 0;
}

