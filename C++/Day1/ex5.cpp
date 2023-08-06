#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the First Initial of Your Name : ";
    cin>>ch;
    cout<<"1. Male"<<endl;
    cout<<"2. Female"<<endl;
    cout<<"Enter Choice : "<<endl;
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Hello Mr. "<<ch<<endl;
        break;
    case 2:
        cout<<"Hello Ms. "<<choice<<endl;
        break;
    default:
        cout<<"Invalid Input";
   
    }
    return 0;
}