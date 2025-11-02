#include <iostream>
#include <string>
using namespace std;

bool isNum() {
    string c;
    cout << "Enter input: ";
    cin >> c;

    for (int i = 0; i < c.length(); i++) {
        if (c[i] >= '0' && c[i] <= '9')
            continue;
        else
            return false;
    }
    return true;
}

int main() {
    if (isNum())
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}
