#include <iostream>
using namespace std;
int main()
{
    int num1,num2,choice;
    cout<<"1. Addition";
    cout<<"2. Subtraction";
    cout<<"3. Multiply";
    cout<<"4. Divide";
    cout<<"Enter Operation You want to do : ";
    cin>>choice;
    cout<<"Enter the First Number : ";
    cin>>num1;
    cout<<"Enter the Second Number : ";
    cin>>num2;

    if(choice == 1){
        cout<<"Addition is : "<<num1+num2;
    }
    else if(choice == 2){
        cout<<"Subtraction is : "<<num1-num2;
    }
    else if(choice == 3){
        cout<<"Multiplication is : "<<num1*num2;
    }
    else if(choice == 4){
        cout<<"Division is : "<<num1/num2;
    }
    else{
        cout<<"Wrong Input";
    }


    return 0;
}