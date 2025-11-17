#include <iostream>
#include <fstream>
using namespace std;

bool isKeyword(string s) {
    string keywords[] = {"int", "float", "double", "string", "bool", "const"};
    for(string k : keywords) {
        if(s == k) return true;
    }
    return false;
}

bool isValidIdentifier(string s) {

    if(s.length() == 0) return false;

    if(!((s[0] >= 'A' && s[0] <= 'Z') ||
         (s[0] >= 'a' && s[0] <= 'z') ||
           s[0] == '_'))
        return false;

    for(int i = 1; i < s.length(); i++) {
        if(!((s[i] >= 'A' && s[i] <= 'Z') ||
             (s[i] >= 'a' && s[i] <= 'z') ||
             (s[i] >= '0' && s[i] <= '9') ||
               s[i] == '_'))
            return false;
    }

    return true;
}

void IdentifierCheck() {
    string c;
    int line = 1;

    ifstream MyReadFile("Sample.txt");

    while (getline(MyReadFile, c)) {
        cout << c << endl;
        cout << "Checking line " << line << "..." << endl;

        if (isKeyword(c)) {
            cout << "Not a valid identifier (keyword)." << endl << endl;
            line++;
            continue;
        }

        if (isValidIdentifier(c))
            cout << "It is a valid identifier." << endl << endl;
        else
            cout << "Not a valid identifier." << endl << endl;

        line++;
    }
}

int main() {
    IdentifierCheck();
    return 0;
}

