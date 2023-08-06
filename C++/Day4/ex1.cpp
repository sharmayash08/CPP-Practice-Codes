#include<iostream>
using namespace std;
int main()
{
	int n,new_n;
	cout<<"enter the number : ";
	cin>>n;
	new_n = n * 1000000 + (2 * n) * 1000 + 3 * n;
	cout<<new_n<<endl;
	int sum =45;
	int count =0;
	while (new_n != 0) {
        new_n = new_n / 10;
        ++count;
    }
	if(sum == 45 && count == 9){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
}