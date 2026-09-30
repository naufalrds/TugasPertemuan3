#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

class Stack {
private:
    char data[MAX];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX - 1; }

    void push(char c) {
        if (isFull()) {
            cout << "Stack penuh!" << endl;
            return;
        }
        data[++top] = c;
    }

    char pop() {
        if (isEmpty()) {
            return '\0';
        }
        return data[top--];
    }
};

int main() {
    string kata;
    Stack s;

    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    for (char c : kata) {
        s.push(c);
    }

    cout << "Kata terbalik: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;

    return 0;
}
