# include <iostream >
using namespace std;
class coord
{
public :
int x, y; // coordinate values
coord () { x=0; y=0; }
coord (int i, int j) { x=i; y=j; }
void get_xy (int &i, int &j) { i=x; j=y; }
coord operator +( coord ob2);
coord operator -( coord ob2);
coord operator =( coord ob2);
};
// Overload + relative to coord class .
coord coord :: operator +( coord ob2)
{
coord temp ;
cout << " Using coord operator +() \n";
temp .x = x + ob2 .x;
temp .y = y + ob2 .y;
return temp ;
}
// Overload - relative to coord class .
coord coord :: operator -( coord ob2)
{
coord temp ;
cout << " Using coord operator -() \n";
temp .x = x - ob2 .x;
temp .y = y - ob2 .y;
return temp ;
}
// Overload = relative to coord .
coord coord :: operator =( coord ob2)
{
cout << " Using coord operator =() \n";
x = ob2.x;
y = ob2.y;
return * this ; // return the object that is assigned to
}
class quad : public coord
{


int quadrant ;
public :
quad ()
{
x = 0;
y = 0;
quadrant = 0;
}
quad (int x, int y) : coord (x, y)
{
if(x >=0 && y >= 0)
quadrant = 1;
else if(x <0 && y >=0)
quadrant = 2;
else if(x <0 && y <0)
quadrant = 3;
else
quadrant = 4;

}
void showq ()
{
cout << " Point in Quadrant : " << quadrant << "\n";
}
quad operator =( coord ob2 );
};
quad quad :: operator =( coord ob2 )
{
cout << " Using quad operator =() \n";
x = ob2.x;
y = ob2.y;
if(x >=0 && y >= 0)
quadrant = 1;
else if(x <0 && y >=0)
quadrant = 2;
else if(x <0 && y <0)
quadrant = 3;
else
quadrant = 4;
return * this ;
}
int main ()
{
quad o1 (10 , 10) , o2 (15 , 3) , o3;
int x, y;
o3 = o1 + o2; // add two objects - this calls operator +()
o3. get_xy (x, y);

o3. showq ();
cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";
o3 = o1 - o2; // subtract two objects
o3. get_xy (x, y);
o3. showq ();
cout << "(o1 -o2) X: " << x << ", Y: " << y << "\n";
o3 = o1; // assign an object
o3. get_xy (x, y);
o3. showq ();
cout << "(o3=o1) X: " << x << ", Y: " << y << "\n";
return 0;
}

