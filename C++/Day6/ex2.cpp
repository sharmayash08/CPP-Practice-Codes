#include<bits/stdc++.h>

using namespace std;

int left_amount(int initial_amount, int Purchase_amount){
    int ans;
    int left_money = initial_amount - Purchase_amount;

    int rem = left_money % 10;
    if(rem<=5){
        ans= (left_money/10)*10;
        return ans;
    }
    else{
        ans = (left_money/10)*10;
        ans = ans +10;
        return ans;
    }
}

int main()
{   
    int initial_amount = 100;
    int Purchase_amount;
    cout<<"Enter the Purchase Amount : ";
    cin>>Purchase_amount;
    cout<<left_amount(initial_amount,Purchase_amount);
	return 0;
}