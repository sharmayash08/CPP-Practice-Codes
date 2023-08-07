#include<bits/stdc++.h>

using namespace std;

// Merge two Sorted Array using Functions

void cal(){
    int total_num;
    int num1,num2,choice;

        cout<<"1. Addition"<<endl;
        cout<<"2. Multiply"<<endl;
        cout<<"Enter Operation You want to do : ";
        cin>>choice;

        if(choice == 1){
                cout<<"Enter how many numbers you want to add : ";
                cin>>total_num;
                if(total_num <=4){
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
                else{
                    cout<<"Total Numbers Cannot be more than 4"<<endl;
                }
        }

        else if(choice == 2){
            cout<<"Enter how many numbers you want to Multiply : "; // asking User to enter no. of elements he want to enter
                cin>>total_num;
                if(total_num<=4){
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
                    cout<<"Total Numbers cannot be more than 4"<<endl;
                }
        }
        else{
            cout<<"Wrong Input";
        }
}


int main()
{   
    bool f =1;
    while(f){
        cout<<"Do you want to calculate (y/n) : ";
        char ch;
        cin>>ch;
        if(ch=='y')cal();
        else{
            f = 0;
        }
    }
	return 0;
}