#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int factorialNumber = 10;
	int factorialTotal = 1;

	for (int n = 2; n <= factorialNumber; ++n) {
		factorialTotal *= n;
	}

	cout << factorialTotal << endl;
}

