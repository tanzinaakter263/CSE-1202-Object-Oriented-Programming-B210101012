#include<stdio.h>
#define f(x) pow(x,3)-2*x-5
int main(){

	float x0,x1;
	scanf("%f%f",&x0,&x1);	//cin >> x0 >> x1;
	float e = 0.001;
	float f0,f1,f2,x2;
	int cunt=0;
	do{
		f0 = f(x0);
		f1 = f(x1);
		x2 = (x0+x1)/2;
		f2 = f(x2);
		if(f2>0) x1=x2;
		else x0=x2;
		cunt++;
		printf(cunt);
		printf("x:",x2);
		printf("f(x0:",f2);
		//cout<<cunt<<" "<<"x: "<<x2<<" "<<"f(x): "<<f2<<"\n";

	}while(abs(f2)>e && cunt<120);

	printf("Root is:",x0);
	return 0;
	//cout<<"\nRoot is:"<<x0<<endl;

}
