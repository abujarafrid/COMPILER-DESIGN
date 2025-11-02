#include <iostream>
using namespace std;

int main() {
    int n, i, min, max;
    cin >> n;
    int arr[100];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    min = arr[0];
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max;
    return 0;
}
