
//insertion sort
#include<iostream>
using namespace std;
int main(){
    int a[]={5,4,10,1,6,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"before sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

    cout<<"\nAfter sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
