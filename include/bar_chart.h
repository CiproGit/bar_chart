#ifndef BAR_CHART_H
#define BAR_CHART_H

#include <vector>

namespace bar_chart {
	class Bar_chart {
	private:
		std::vector<int> elements;
		int max; // Maximum value of elements
		int dim; // Number of elements
	public:
		Bar_chart(std::vector<int> input);
		virtual ~Bar_chart();
		void draw() const; // It draws a vertical bar chart
	};
} // namespace bar_chart

#endif // BAR_CHART_H
