#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	const double x = 100000.123456789;
	const double a = 200000.123456789;
	double y = (x + a) / x;
	double z = x / y;

    if (y == z) {
        cout << "Y and Z are identical" << endl;
    } else {
        cout << "Y and Z are NOT identical" << endl;
    }
}