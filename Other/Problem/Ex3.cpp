#include<iostream>
using namespace std;
/*class box{
    int a,b,c;
    int volume;
public:
    box(int x,int y,int z){
        void vol();
};
box::box(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        volume=a*b*c;
    }
void box::vol(){
    cout<<volume<<endl;
}
int main(){
    box x(1,2,3);
    x.vol();
    return 0;
}*/


/*class box{
 int l ,w , h;
 int volume;
 public:
 box(int a, int b, int c); //constructor
 void vol();
 };

 box::box(int a, int b, int c)
 {
 l = a;
 w = b;
 h = c;


 volume = l * w * h;
 }
 void box::vol()
 {

 cout << "The Volume is: " << volume << endl;


 }
 int main()
 {
 int p, a, b, c;
 cout << "Enter three sides: " << endl;
 cin >> a >> b >> c;
 box x(a, b, c);
x.vol();

cout << endl;

//pause;
 cin >> p;

 return 0;
 }*/
 class area_cl
{
public :
double height ;
double width;
};


class rectangle:public area_cl
{
    public:
rectangle(double h,double w);
double area();
};
class isosceles:public area_cl{
    public:
isosceles (double h,double w);
double area();
};
 rectangle:: rectangle(double h,double w){
    height=h;
    width=w;
}
double  rectangle::area(){
    return height*width;
}

 isosceles::isosceles (double h,double w){
    height=h;
    width=w;
}
double isosceles::area(){
    return height*width;
}
int main(){
   rectangle ob(5.5,5.5) ;
   cout<<ob.area()<<endl;

   return 0;
}
