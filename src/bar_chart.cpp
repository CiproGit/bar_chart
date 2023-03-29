#include "bar_chart.h"
#include <iostream>
#include <algorithm>

using namespace std;

namespace bar_chart {
	Bar_chart::Bar_chart(vector<int> elements) {
		this->elements = elements;
		this->max = *max_element(elements.begin(), elements.end());
		this->dim = size(elements);
	}

	Bar_chart::~Bar_chart() {}

	void Bar_chart::draw() const {
		for (int row = this->max; row > 0; row--) {
			cout << "| ";

			for (int column = 0; column < this->dim; column++) {
				if (row <= this->elements[column]) cout << "x ";
				else cout << "  ";
			}

			cout << endl;
		}

		// Last line
		cout << "| ";
		for (int column = 0; column < this->dim; column++) {
			cout << "- ";
		}
		cout << endl;
	}
} // namespace bar_chart
