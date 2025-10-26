/* 2.	Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans:
operator1:  +
operator2:  =
 */

#include <iostream>
using namespace std;

void findOperators(string expr) {
    char ch;

    int count = 0;

    bool operatorFound = false;


    for (int i = 0; i < expr.length(); i++) {

        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '=') {

            count++;
            cout << "operator" << count << " = " << expr[i] << endl;
            operatorFound = true;
        }
    }


    if (!operatorFound) {
        cout << "No arithmetic found" << endl;
    }
}

int main() {
    string expression;

    cout << "Enter an expression: ";
    cin >> expression;

    findOperators(expression);

    return 0;
}
