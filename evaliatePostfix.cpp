#include <iostream>
#include <stack>
#include <string>

int evaluatePostfix(const std::string& expression) {
    std::stack<int> s;
    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (s.size() < 2) {
                std::cerr << "Error - Invalid" << std::endl;
                return -1;
            }
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();

            int result;
            switch (ch) {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                if (operand2 == 0) {
                    std::cerr << "Error: u cant divide by 0" << std::endl;
                    return -1;
                }
                result = operand1 / operand2;
                break;
            default:
                std::cerr << "Error - Invalid operator" << std::endl;
                return -1;
            }
            s.push(result);
        }
        else {
            std::cerr << "Error: Invalid symbol" << std::endl;
            return -1;
        }
    }
    if (s.size() != 1) {
        std::cerr << "Error : Invalid counts in the stack" << std::endl;
        return -1;
    }

    return s.top();
}

int main() {

    std::string expression = "53+82-*";

    int result = evaluatePostfix(expression);
    if (result != -1) {
        std::cout << "Result \"" << expression << "\" is: " << result << std::endl;
    }

    return 0;
}
