#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin.getline(str, 200);

    if (str[0] == '/' && str[1] == '/')
        cout << "Single line comment";
    else if (str[0] == '/' && str[1] == '*') {
        int i = 2, found = 0;
        while (str[i] != '\0') {
            if (str[i] == '*' && str[i + 1] == '/') {
                found = 1;
                break;
            }
            i++;
        }
        if (found)
            cout << "Multiple line comment";
        else
            cout << "Not comment";
    } else
        cout << "Not comment";

    return 0;
}
