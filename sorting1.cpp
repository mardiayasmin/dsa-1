
// C++ program for implementation
// of Bubble sort
#include <iostream>
using namespace std;

// A function to implement bubble sort
void swap(int arr[], int a,int b) {
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int main(){
    int a[]={5,9,2,6};
    int n= sizeof(a)/ sizeof(a[0]);
    cout<<"Before sort: ";
    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
                swap(a,j,j+1);

        }
    }
    cout<<"\n after sort: ";

    for(int i=0;i<=n-1;i++){
        cout<<a[i]<<" ";
    }

}