#include "utilities.h"
#include "bar_chart.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	cout << "***********************\n";
	cout << "*      BAR CHART      *\n";
	cout << "***********************\n" << endl;

	cout << "Enter the (integer) values you want to represent, separated by spaces" << endl;
	string input_string;
	getline(cin, input_string);

	if (input_string.empty()) {
		cerr << "Error: empty input" << endl;
		return EXIT_FAILURE;
	}

	if (input_string.find_first_of("1234567890") == string::npos) {
		cerr << "Error: invalid argument" << endl;
		return EXIT_FAILURE;
	}

	vector<int> elements;
	try {
		elements = utilities::tokenize(input_string);
	} catch (const invalid_argument &ia) {
		cerr << "Error: invalid argument" << endl;
		return EXIT_FAILURE;
	}

	cout << "\nBar chart:" << endl;
	bar_chart::Bar_chart bar_chart(elements);
	bar_chart.draw();

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
