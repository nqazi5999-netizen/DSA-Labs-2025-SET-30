#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position for insertion: ";
    cin >> pos;

    cout << "Enter new value: ";
    cin >> value;

    if (n >= 100 || pos < 1 || pos > n + 1) {
        cout << "Invalid position or array is full";
        return 0;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Updated array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
