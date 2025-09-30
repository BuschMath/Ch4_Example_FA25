#include <iostream>

using namespace std;

int main()
{
	int i_num1;
	int i_num2;
	float f_num1;
	char c_char1;

	cout << "Enter your values: ";
	cin.get(c_char1); // To consume the dot
	cin >> i_num1;
	cin >> i_num2;

	cout << "You entered the following values: " << endl;
	cout << "Integer 1: " << i_num1 << endl;
	cout << "Integer 2: " << i_num2 << endl;
	cout << "Character: " << c_char1 << endl;

	cout << "Enter a float value: ";
	cin >> f_num1;
	cout << showpoint << "Float: " << f_num1 << endl;

	cout << "Demo of ignore() function" << endl;
	cout << "Enter a characters: ";
	cin.ignore(5, '3');
	cin.get(c_char1);
	cout << "Character: " << c_char1 << endl;

	return 0;
}