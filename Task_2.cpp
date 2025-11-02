#include <iostream>
using namespace std;

int main() {
    char str[200];
    cout << "Enter an expression: ";
    cin.getline(str, 200);

    cout << "Operators found:\n";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '=') {
            cout << "operator: " << str[i] << endl;
        }
    }

    return 0;
}
