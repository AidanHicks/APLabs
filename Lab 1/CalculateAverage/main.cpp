#include <iostream>;
using namespace std;

int main(int argc, char** argv) {
	int numProcessed = 0;
	double sum = 0;
	double value;

	while ((cin >> value) && (value > 0)) {
		sum += value;
		++numProcessed;
	}
	cin.clear();

	if (numProcessed > 0) {
		double average = sum / numProcessed;
		cout << "Average: " << average << endl;
	}
	else {
		cout << "No list to average." << endl;
	}
}
		
