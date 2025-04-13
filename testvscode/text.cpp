#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, char order) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if ((order == 'a' || order == 'A') && arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            if ((order == 'd' || order == 'D') && arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size < 1) {
        cout << "Invalid size. Exiting program." << endl;
        return 0;
    }
    
    int arr[size];
    cout << "Enter the temperature values between 0 - 40:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Temperature " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] < 0 || arr[i] > 40) {
            cout << "Invalid temperature value. Exiting program." << endl;
            return 0;
        }
    }
    
    cout << "Temperature values before sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    char choice;
    cout << "Enter 'a' for ascending or 'd' for descending order: ";
    cin >> choice;
    if (choice != 'a' && choice != 'A' && choice != 'd' && choice != 'D') {
        cout << "Invalid choice. Exiting program." << endl;
        return 0;
    }
    
    bubbleSort(arr, size, choice);
    
    cout << "Temperature values after sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}