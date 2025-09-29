#include <iostream>
#include <cmath> // for pow and sqrt
using namespace std;

int main()
{
	int choice;
	double a, b;

	cout << "Simple Calculator (C++)\n";

	while (true)
	{
		// menu
		cout << "\n1 - Add\n";
		cout << "2 - Subtract\n";
		cout << "3 - Multiply\n";
		cout << "4 - Divide\n";
		cout << "5 - Power (a^b)\n";
		cout << "6 - Square root\n";
		cout << "0 - Exit\n";
		cout << "Enter choice: ";
		cin >> choice;

		if (choice == 0)
		{
			cout << "Goodbye!\n";
			break;
		}

		if (choice == 1)
		{
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result = " << a + b << endl;
		}
		else if (choice == 2)
		{
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result = " << a - b << endl;
		}
		else if (choice == 3)
		{
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result = " << a * b << endl;
		}
		else if (choice == 4)
		{
			cout << "Enter two numbers: ";
			cin >> a >> b;
			if (b == 0)
				cout << "Error: cannot divide by zero\n";
			else
				cout << "Result = " << a / b << endl;
		}
		else if (choice == 5)
		{
			cout << "Enter base and exponent: ";
			cin >> a >> b;
			cout << "Result = " << pow(a, b) << endl;
		}
		else if (choice == 6)
		{
			cout << "Enter a number: ";
			cin >> a;
			if (a < 0)
				cout << "Error: cannot take sqrt of negative\n";
			else
				cout << "Result = " << sqrt(a) << endl;
		}
		else
		{
			cout << "Invalid choice\n";
		}
	}

	return 0;
}