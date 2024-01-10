#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> vecBubble(100000);

    // Initialize vector in descending order
    for (int i = 0; i < 100000; ++i) {
        vecBubble[i] = 100000 - i;
    }

    // Perform Bubble Sort
    bubbleSort(vecBubble);

    // Print first 10 and last 10 integers
    cout << "First 10 integers after sorting:\n";
    for (int i = 0; i < 10; ++i) {
        cout << vecBubble[i] << " ";
    }
    cout << "\nLast 10 integers after sorting:\n";
    for (int i = 99990; i < 100000; ++i) {
        cout << vecBubble[i] << " ";
    }
    cout << endl;

    return 0;
}
