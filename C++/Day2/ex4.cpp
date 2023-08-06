#include <iostream>
using namespace std;
int main()
{
    int num1,num2,choice;
    do
    {
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiply"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Operation You want to do : ";
        cin>>choice;
        if(choice==5){
            cout<<"Exiting Program";
        }
        else{
            if(choice == 1){
                cout<<"Enter the First Number : ";
                cin>>num1;
                cout<<"Enter the Second Number : ";
                cin>>num2;
                cout<<"Addition is : "<<num1+num2<<endl;
        }
        else if(choice == 2){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Subtraction is : "<<num1-num2<<endl;
        }
        else if(choice == 3){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Multiplication is : "<<num1*num2<<endl;
        }
        else if(choice == 4){
            cout<<"Enter the First Number : ";
            cin>>num1;
            cout<<"Enter the Second Number : ";
            cin>>num2;
            cout<<"Division is : "<<num1/num2<<endl;
        }
        else{
            cout<<"Wrong Input";
        }
        }
    } while (choice!=5);
    
    


    return 0;
}