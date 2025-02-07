#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	cout << "Enter a temperature in Fahrenheit:\n";
	int fahrenheit;
	cin >> fahrenheit;
	float celsius = 5.0 / 9.0 * (fahrenheit - 32);
	cout << "The temperature in Celsius is " << celsius << endl;
}

