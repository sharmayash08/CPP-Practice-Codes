#include<bits/stdc++.h>

using namespace std;

int len(int Nn){
    int count =0;
    /*
    while(Nn){
        Nn = Nn/10;
        count++;
    }
    return count;
    */
   if(Nn/10 == 0){
    return 1;
   }
   return 1 + len(Nn/10);
}

int reverse(int num){
    /*
    int reverse_num =0;
    
    while(num!=0){
        int digit = num%10;
        reverse_num = (reverse_num*10) + digit;
        num = num/10;
    }
    return reverse_num; 
    */
   if(num>=1 && num<=9) return num;

   int Nn = reverse(num/10);

   int d = num%10;
   d*= pow(10,len(Nn));
   return d+Nn;

}

int main()
{   
    int num = 123;
    cout<<reverse(num);
	return 0;
}