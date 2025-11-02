#include <iostream>
using namespace std;

int main() {
    int n, i;
    float sum = 0;
    cin >> n;
    int arr[100];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Average = " << sum / n;
    return 0;
}
