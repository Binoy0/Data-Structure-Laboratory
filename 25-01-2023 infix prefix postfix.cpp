#include <bits/stdc++.h>
using namespace std;

stack<char> s;
string result;

int check_level(char c) {
    if (c == '^')
        return 3;
    else if ((c == '*') || (c == '/') || (c == '%'))
        return 2;
    else if ((c == '+') || (c == '-'))
        return 1;
    else
        return -1;
}

void infix_to_prefix(string input) {
    reverse(input.begin(), input.end());
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c >= 'A' && c <= 'Z') {
            result = c + result;
        } else if (c == ')') {
            s.push(c);
        } else if (c == '(') {
            while (s.top() != ')') {
                char r = s.top();
                result = r + result;
                s.pop();
            }
            s.pop();
        } else {
            if ((!s.empty()) && (check_level(s.top()) >= check_level(c))) {
                result = s.top() + result;
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }
    cout << result;
}

int main() {
    string input;
    cin >> input;
    infix_to_prefix(input);
    return 0;
}

