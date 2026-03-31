# COM202-Midterm-Project
# Parenthesis Balance Checker 🖥️

A simple console-based application built with Dart for the COM202 Data Structures and Algorithms exam. This app helps users verify whether a given expression has balanced parentheses using a stack-based approach.

Features
✅ Checks for balanced parentheses (), {}, and []
✅ Handles nested and mixed parentheses
✅ Provides clear console feedback for unbalanced expressions
✅ Efficient stack-based algorithm implementation
How It Works

The app uses a stack data structure to keep track of opening parentheses.

When an opening parenthesis is encountered, it is pushed onto the stack.
When a closing parenthesis is encountered, the app checks the top of the stack:
If it matches, pop the opening parenthesis.
If it doesn’t match or the stack is empty, the expression is unbalanced.
After processing the entire expression, if the stack is empty, the parentheses are balanced.

Example:

Input:  { [ ( ) ] }  
Output: Balanced
Input:  { [ ( ] ) }  
Output: Not Balanced
