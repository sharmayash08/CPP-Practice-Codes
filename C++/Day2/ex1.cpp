#include <iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    //Temp Variable way
/* 
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"Swapped Number are : "<<num1<<endl<<num2;
*/

    // Without Temp Variable way

    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1-num2;


    cout<<"Swapped Number are : "<<num1<<endl<<num2;

    return 0;
}