#include<iostream>
using namespace std;
class add
{
   float x,y;
   public:
     add()
	 {
	 	x=0;
	 	y=0;
     }
	 add(float real,float imag)
	 {
	 	x=real;
	 	y=imag;
      }
      void display(void);
      add operator +(add);
      
};

void add::display()
{
	cout<<"\n"<<"a= "<<x<<" b= "<<y;
}
add add::operator +(add a)
{
		return add((x+a.x),(y+a.y)); //complex temp; 
		                                //temp.x=x+a.x; 
										//temp.y=y+a.y; 
										//return temp; 

}

int main()
{
	add c1(2.5,3.5);
	add c2(1.7,2.8);
	add c3;
	c3=c1+c2;
	c3.display();
	return 0;
 } 
