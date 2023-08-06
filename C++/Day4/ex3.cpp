#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr1size,arr2size,arr3size;
    cout<<"Enter the Size of the Array 1 : ";
    cin>>arr1size;
    cout<<"Enter the Size of the Array 2 : ";
    cin>>arr2size;
    arr3size = arr1size + arr2size;
    int arr3[arr3size];
    int arr1[arr1size],arr2[arr2size];

    cout<<"Enter the First Array Elements : ";
    for(int i =0;i<arr1size;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the Second Array Elements : ";
    for(int i =0;i<arr2size;i++){
        cin>>arr2[i];
    }
    
    for(int i =0;i<arr1size;i++){
        int j=0;
        arr3[j] = arr1[i];
        j++;
    }

        for(int i =0;i<arr2size;i++){
        int j=0;
        arr3[j] = arr2[i];
        j++;
    }
        // Sorting Inbuilt method
    sort(arr3,arr3+arr3size);

    for(int i =0;i<arr3size;i++){
        cout<<arr3[i]<<endl;
    }

    for(int i =0;i<arr3size;i++){
        cout<<arr3[i]<<endl;
    }

	return 0;
}