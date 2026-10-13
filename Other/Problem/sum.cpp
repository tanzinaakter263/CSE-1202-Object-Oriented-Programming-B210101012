#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
string s;
cin>>s;
long long sum=0;
    for(int i=0 ; i<num ;i++){
     int x=s[i]-'0';
     sum+=x;
    }
    cout<<sum<<endl;;


    return 0;
}

