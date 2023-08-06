#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the First Number : ";
    cin>>num1;
    cout<<"Enter the Second Number : ";
    cin>>num2;
    cout<<"Enter the third Number : ";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Greatest number between those three is : "<<num1;
    }
    if(num2>num1 && num2>num3){
        cout<<"Greatest number between those three is : "<<num2;
    }
    else{
        cout<<"Greatest number between those three is : "<<num3;
    }

    return 0;
}