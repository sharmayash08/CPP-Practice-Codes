#include<bits/stdc++.h>

using namespace std;

int max(int a, int b){
    return(a>b ? a : b);
}

int max(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}

int max(int a,int b,int c,int d){
    return max(max(a,b,c),d);

}
int main()
{   
    cout<<max(2,5,1,7);
	return 0;
}