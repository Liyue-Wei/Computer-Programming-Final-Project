// Bubble Sort - The last element finish sortting first. 

#include <iostream>
using namespace std;
void sort(int arr[], int l) {
    for (int i=0; i<l; i++) {
        for (int n=0; n<l-1; n++) {
            if (arr[n] > arr[n+1]) {swap(arr[n], arr[n+1]);}
        }
    }

    for (int i=0; i<l; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int l = 10, arr[10] = {54, 23, 46, 56, 45, 12, 98, 38, 84, 93};
    sort(arr, l);

    system("PAUSE");
    return 0;
}