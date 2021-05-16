#include <iostream>
using namespace std;
int main()
{
	double length = 0.0;
	double width = 0.0;
	double area = 0.0;
	double basePrice = 0.0;
	double totalPrice = 0.0;

	cout << "Enter Length in feet: ";
	cin >> length;
	cout << "Enter Width in feet: ";
	cin >> width;
	cout << "Enter base price per square feet: ";
	cin >> basePrice;
	area = length * width;
	totalPrice = basePrice * area;
		cout << "The area in square feet is: " << area << ". The total price per square feet is: $" << totalPrice << endl;

}