#include<bits/stdc++.h>

using namespace std;



int FD(int num){
    int digit = 0;
    while(num){
        digit = num%10;
        num = num/10;
    }
    return digit;
}

int countBP(int arr[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        int first_digit = FD(arr[i]);
        for(int j = i+1; j<size; j++){
            int last_digit = arr[j]%10;
            if(__gcd(first_digit, last_digit) == 1)count++;
        }
    }
    return count;
}

int main()
{   int size = 3;
    int arr[size] = {11,21,12};

    cout<<countBP(arr, size);
	return 0;
}