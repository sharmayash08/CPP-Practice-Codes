#include <iostream>
using namespace std;
int main()
{
    int main_tank,add_tank;
    int ans =0 ;
    int used = 0;
    cout<<"Enter the Petrol in main tank : ";
    cin>>main_tank;
    cout<<"Enter the petrol in additional tank : ";
    cin>>add_tank;

    while(main_tank>0){
        ans+=10;
        used++;
        main_tank--;

        if(used%5==0 && add_tank>0){
            main_tank = main_tank+1;
            add_tank-=1;
        }
    }
    cout<<"Total Distance Covered : "<<ans;
    return 0;
}                   