
//linear search
#include<iostream>
using namespace std;

int index;
bool search(int array[], int size, int key){

    for( int i = 0; i< size; i++){
        if(array[i] == key){
            index = i;
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1  };

    cout << "Enter the key: " ;
    int key;
    cin >> key;
    //whether key is preasent or not?

    bool found = search(arr, 10, key);

    if(found){
        cout << "key is present at index " << index << endl;
    }else{
        cout<< "key is absent." << endl;
    }

    return 0;
}