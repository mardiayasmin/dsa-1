//Binary Search

//
// selection sort

#include<iostream>
using namespace std;
int Binary(int a[],int l,int r,int key) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (a[mid] < key) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }

    }
    return -1;
}

int main() {
    int a[] = {7, 4, 10, 8, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 8;
    int index = Binary(a, 0, n - 1, key);
    if (index==0) {
        cout << "key is present at index " << index << endl;
    } else {
        cout << "key is absent." << endl;
    }
}