// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the Five Elements : ";

    for(int i =0;i<5;i++){
        cin>>arr[1];
    }

    int ch;
    cout<<"Enter the number between 1-5 : ";
    cin>>ch;
    
    // Code for Deletion
    for(int i =ch-1;i<4;i++){
        arr[i] = arr[i+1];
    }

    for(int i =0;i<4;i++){
        cout<<arr[i]<<endl;
    }
  return 0;
}
