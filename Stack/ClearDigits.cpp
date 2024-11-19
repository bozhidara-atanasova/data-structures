#include <iostream>
#include <stack>
#include <string>
std::string clearDigits(const std::string& s)
{
    std::stack<char> st;
	for (char c : s)
	{
		if (isdigit(c))
		{
			if (!st.empty())
			{
				st.pop();
			}
		}
		else
			st.push(c);
	}
	std::string result;
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}
	std::reverse(result.begin(), result.end());
	return result;
}
int main()
{
	std::string s1 = "abc";
	std::string s2 = "cb34";

	std::cout << "Input: \"" << s1 << "\" Output: \"" << clearDigits(s1) << "\"" << std::endl;
	std::cout << "Input: \"" << s2 << "\" Output: \"" << clearDigits(s2) << "\"" << std::endl;

	return 0;
}
