#include <iostream>
#include <stack>
#include <string>
#include <cctype>

void check(const std::string& input)
{
    std::stack<char> s;
    for (char ch : input)
    {
        s.push(ch);
    }
    while (!s.empty())
    {
        char ch = s.top();
        s.pop();

        if (std::isalpha(ch))
        {
            std::cout << ch << " is char." << std::endl;
        }
        else
            std::cout << ch << "is symbol. " << std::endl;
    }
}
int main()
{
    std::string input;
    std::cout << "Input text: ";
    std::getline(std::cin, input);

    std::cout << "Result from the checking:" << std::endl;
    check(input);

    return 0;
}
