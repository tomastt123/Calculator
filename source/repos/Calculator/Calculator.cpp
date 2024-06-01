/* My first program using C++*/
/* This is a simple calculator program that solves simple mathematical calculations*/

# include <iostream>
using namespace std;

int main() {

    char op;
    float num1, num2;

    cout << "Enter operator: +, -, *, /: "; // Please choose from + - * / //
    cin >> op;

    cout << "Enter two operands: "; // Please choose two operands ( two numbers ) and enter them with a white space //
    cin >> num1 >> num2;

    switch (op) {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}