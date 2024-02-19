//
// selection sort

#include<iostream>
using namespace std;
int main(){
    int a[]={7,4,10,8,3,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"before sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
            min=j;
        }
       if(min!=i){
           int temp=a[i];
           a[i]=a[min];
           a[min]=temp;
       }
    }

    cout<<"\nAfter sorted: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
