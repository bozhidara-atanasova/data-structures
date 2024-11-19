#include <iostream>
#include <stack> //it will help us to follow up the brackets
#include <string>

bool areBracketsBalanced(const std::string& str) { //we give back false or true depends on the input
    std::stack<char> s;

    for (char ch : str) { //this cycle checks every character
        // checks if it is open bracket
        if (ch == '(' || ch == '{' || ch == '[' || ch == '<') {
            s.push(ch); //if it is open bracket than we add it in the stack
        }//that means we keep it to check if it matches the closing bracket
        // checks if it is closing bracket
        else if (ch == ')' || ch == '}' || ch == ']' || ch == '>') {
            //here we check if the stack is empty 
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop(); // here we craete new variable to putn the last bracket so it will be 
            //easier to check if it matches an ending bracket
            // checks if the opening bracket and the closing brackets
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[') ||
                (ch == '>' && top != '<')) {
                return false;
            }
        }
    }
    //if the stack is empty than the brackets are balanced
    return s.empty();
}

int main() {
    std::string input1 = "( fh{  6* [a+b].} <>{ <>} )";
    std::string input2 = "(.[а)3]";

    std::cout << "Input: \"" << input1 << "\"\nOutput: " << (areBracketsBalanced(input1) ? "true" : "false") << std::endl;
    std::cout << "Input: \"" << input2 << "\"\nOutput: " << (areBracketsBalanced(input2) ? "true" : "false") << std::endl;

    return 0;
}
