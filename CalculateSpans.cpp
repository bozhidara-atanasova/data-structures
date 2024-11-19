#include <iostream>
#include <stack>
void calculateSpans(const int prices[], int spans[], int n)
{
    std::stack<int> s;
	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && prices[s.top()] <= prices[i])
		{
			s.pop();
		}
		if (s.empty()) {
			spans[i] = i + 1;
		}
		else {
			spans[i] = i - s.top();
		}

		s.push(i);
	}
}
int main()
{
	const int n = 7; 
	int prices[n] = { 100, 80, 60, 70, 60, 75, 85 };
	int spans[n];   

	calculateSpans(prices, spans, n);

	std::cout << "Spans: ";
	for (int i = 0; i < n; ++i) {
		std::cout << spans[i] << " ";
	}
	return 0;
}
