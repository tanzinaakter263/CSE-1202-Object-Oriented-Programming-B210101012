#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,even=0,odd=0,pos=0,neg=0,x;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>x;
      if(x%2==0)
            even=even+1;
       if(x%2!=0)
            odd=odd+1;
             if(x>0)
            pos=pos+1;
             if(x<0)
            neg=neg+1;
    }
    cout<<"Even: " << even <<endl;
cout<<"Odd: " << odd <<endl;
cout<<"Positive: " << pos <<endl;
cout<<"Negative: " << neg <<endl;
return 0;
    }

