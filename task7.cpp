#include <iostream>
using namespace std;

int findAllIndices(int arr[], int size, int key, int indices[]) {
    if (arr == nullptr || size == 0) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices[count++] = i;
        }
    }
    return count;
}

int main() {

    // Test case 1
    int arr1[] = {1, 3, 5, 3, 7, 3, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 3;
    int indices1[size1];
    int count1 = findAllIndices(arr1, size1, key1, indices1);

    cout << "Indices of " << key1 << ": ";
    if (count1 == 0) {
        cout << "Not found";
    } else {
        for (int i = 0; i < count1; i++) {
            cout << indices1[i] << " ";
        }
    }
    cout << endl;

    // Test case 2: Key not present
    int arr2[] = {1, 2, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 3;
    int indices2[size2];
    int count2 = findAllIndices(arr2, size2, key2, indices2);

    cout << "Indices of " << key2 << ": ";
    if (count2 == 0) {
        cout << "Not found";
    } else {
        for (int i = 0; i < count2; i++) {
            cout << indices2[i] << " ";
        }
    }
    cout << endl;

    // Test case 3: Empty array
    int arr3 [] = {};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int key3 = 1;
    int indices3[1]; 
    int count3 = findAllIndices(arr3, size3, key3, indices3);

    cout << "Indices in empty array: ";
    if (count3 == 0) {
        cout << "Not found";
    }
    cout << endl;

    return 0;
}
