#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
if(ch>='A'&&ch<='Z'){
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
}
else if(ch>='a'&&ch<='z'){
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
}
//else if(ch>=0&&ch<=9){


else
{
    cout<<"IS DIGIT"<<endl;
    //cout<<"Equal"<<endl;
}
return 0;
}
