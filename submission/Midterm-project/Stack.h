#include <iostream>
using namespace std;
#ifndef STACK_H
#define STACK_H

#define MAX 100

class Stack {
    int top;
    char arr[MAX];

public:
    Stack() { top = -1; };

    void push(char e) {
        if (top == MAX - 1) {
            cout << "Stack Overflow. Cannot push " << e << endl;
        }
        else
        {
            arr[++top] = e;
        }
    }

    void pop() {
        if (top == - 1) {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    char peek() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return '\0';
        }
        else
        {
            return arr[top];
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty " << endl;
        }
        else {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }

    bool isEmpty() {
        return top == -1;
    }

};

#endif