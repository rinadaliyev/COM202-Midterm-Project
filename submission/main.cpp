#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;

bool isBalanced(string str) {
    Stack s;

    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {

            if (s.isEmpty()) return false;

            char top = s.peek();
            s.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {

                return false;
            }
        }

    }


    return s.isEmpty();
}


int main() {
    int selection = 0;
    string input;
    string exp;

    while (selection < 2)
    {
        cout << "Select Operation:" << endl;
        cout << "1. Test Paranthesis Balance." << endl;
        cout << "2. Quit." << endl;

        getline(cin, input); 

        try {
            selection = stoi(input); 

        }
        catch (...) {
            cout << "Invalid input. Please enter a number.\n";
            continue; 
        }

        if (selection > 2) {
            cout << "Invalid input. Please enter a number in the range.\n";
            continue;
        }


        if (selection == 1) {
            cout << "Enter your expression:" << endl;
            getline(cin, exp);

            if (isBalanced(exp))
            {
                cout << "Balanced " << endl;
            }
            else {
                cout << "NOT balanced " << endl;
            }
        }
    }

    return 0;
}