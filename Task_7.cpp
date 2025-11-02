#include <iostream>
using namespace std;

int main() {
    char first[100], last[100], full[200];
    int i = 0, j = 0;
    cin >> first >> last;
    while (first[i] != '\0') {
        full[i] = first[i];
        i++;
    }
    full[i] = ' ';
    i++;
    while (last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
    }
    full[i] = '\0';
    cout << "Full name = " << full;
    return 0;
}
