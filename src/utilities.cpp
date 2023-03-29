#include "utilities.h"
#include <sstream>

using namespace std;

namespace utilities {
	vector<int> tokenize(string input_string) {
		vector<int> elements;

		stringstream string_stream(input_string);
		string token;

		while (string_stream >> token) {
			try {
				elements.push_back(stoi(token));
			} catch (const invalid_argument &ia) {
				throw;
			}
		}

		return elements;
	}
} // namespace utilities
