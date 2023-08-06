#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the First Initial of Your Name : ";
    cin>>ch;
    char Gender;
    cout<<"Enter Gender : ";
    cin>>Gender;
    if(Gender == 'M' || Gender == 'm'){
        cout<<"Hello Mr "<<ch<<endl;
    }
    else if(Gender == 'F' || Gender == 'f'){
        cout<<"Hello Ms "<<Gender<<endl;
    }
    else{
        cout<<"Invalid Input";
    }
    return 0;
}