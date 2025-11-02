#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i = 0, valid = 1;
    cin >> str;

    if (!((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z') || str[0] == '_'))
        valid = 0;
    else {
        for (i = 1; str[i] != '\0'; i++) {
            if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')) {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        cout << "Identifier";
    else
        cout << "Not Identifier";

    return 0;
}
