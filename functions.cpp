#include <iostream>
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


