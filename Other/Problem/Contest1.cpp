#include<iostream>
using namespace std;
int main(){
    int num,temp,r,sum=0;
    cout<<"Enter a int num:"<<endl;
    cin>>num;
    temp=num;
    while(!temp==0){//123   1 2 3
        r=temp%10;
        cout<<r<<endl;
        sum=r;
        temp=temp/10;
        //cout<<<<endl;
    }
    return 0;
}
