// An example of a friend function .
# include <iostream >
using namespace std;
class myclass
{
int n, d;
public :
myclass (int i, int j) { n = i; d = j; }
// declare a friend of myclass
friend int isfactor ( myclass ob);
};
/*
Here is friend function definition . It returns true
if d is a factor of n. Notice that the keyword friend is not
used in the definition of isfactor ()
*/
int isfactor ( myclass ob)
{
if (!( ob.n % ob.d))
return 1;
else
return 0;

}
int main ()
{
myclass ob1 (10 , 2) , ob2 (13 , 3);
if( isfactor ( ob1))
cout << "2 is a factor of 10\ n";
else
cout << "2 is not a factor of 10\ n";
if( isfactor ( ob2))
cout << "3 is a factor of 13\ n";
else
cout << "3 is not a factor of 13\ n";
return 0;
}
