// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int total_num;
    int num1,num2,choice;
    do
    {
        cout<<"1. Addition"<<endl;
        cout<<"2. Multiply"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter Operation You want to do : ";
        cin>>choice;
        if(choice==3){
            cout<<"Exiting Program";
        }
        else{
            if(choice == 1){
                cout<<"Enter how many numbers you want to add : ";
                cin>>total_num;
                int arr[total_num];
                cout<<"Enter the Numbers : ";
                for(int i=0;i<total_num;i++){
                    cin>>arr[i];
                }
                int sum =0 ;
                for(int i=0;i<total_num;i++){
                    sum = sum+arr[i];
                }
                cout<<"Addition of Given Numbers is : "<<sum<<endl;
        }
        else if(choice == 2){
            cout<<"Enter how many numbers you want to Multiply : "; // asking User to enter no. of elements he want to enter
                cin>>total_num;
                int arr[total_num];
                cout<<"Enter the Numbers : ";
                for(int i=0;i<total_num;i++){
                    cin>>arr[i];
                }
                int Multiply =1 ;
                for(int i=0;i<total_num;i++){
                    Multiply = Multiply*arr[i];
                }
                cout<<"Multiplication of Given Numbers is : "<<Multiply<<endl;
        }
        else{
            cout<<"Wrong Input";
        }
        }
    } while (choice!=3);
    
  return 0;
}
