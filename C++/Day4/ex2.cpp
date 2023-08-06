#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n = 5;

    int arr[]={1,3,4,9,8};

    sort(arr,arr+n);
    
    for(int i =0; i<n;i++){
        cout<<arr[i]<<endl;
    }

	return 0;
}