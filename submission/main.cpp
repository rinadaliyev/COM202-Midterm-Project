#include <iostream>
#include "Stack.h"
#include <string>
#include <fstream>
#include <cstdlib>
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
    string line;
    string content = "";
    string warning;
    string contentWarning;
    string introText;
    string filename;
    
    cout << "Enter Your File Name (with extension): ";
    cin >> filename;

    ofstream file(filename);

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    introText = "Start typing. Your file is [ " + filename + " ] Type $SAVE for saving. ";


    system("cls");
    cout << introText << endl;
    cin.ignore();

    while (true)
    {
        getline(cin, line);
        if (line == "$SAVE") {
            break;
        }

        content += line + "\n";

        if (isBalanced(content)) {
            warning = "";
        }
        else {
            warning = "\033[41mParantheses are NOT balanced. \033[0m";
        }

        contentWarning = introText + warning + "\n" + content;

        system("cls");
        cout << contentWarning;



    }

    file << content;

    file.close();
    cout << "File Saved";

    return 0;
}
