#include <iostream>
#include <stack>
#include <string>
#include <cctype>

int countLetters(const std::string& s) //i did this to train counting digits and then i did the min length
{
    int counter = 0;
    for (char c : s)
    {
        if (isalpha(c))counter++;
    }
    return counter;
}
int minLength(std::string a)
{
    std::stack<char> st;

    for (char c : a)
    {
        if (!st.empty() && ((st.top() == 'A' && c == 'B' || (st.top() == 'C' && c == 'D'))))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.size();
}
int main()
{


    std::string expression;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    int letterCount = countLetters(expression);
    std::cout << "The number of letters in the expression is: " << letterCount << std::endl;


    std::string s1 = "ABFCACDB";
    std::string s2 = "ACBBD";

    std::cout << "Input: \"" << s1 << "\" Output: " << minLength(s1) << std::endl;
    std::cout << "Input: \"" << s2 << "\" Output: " << minLength(s2) << std::endl;

    return 0;
}

