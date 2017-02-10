#include<iostream>
using namespace std;
class dF
{
 float f;
 public:
  dF()
  {
  	f=0;
  }
  dF(float m)
  {
  	f=(m*1.8)+32;
   }	
   
   void putdata()
   {
   	cout<<"value in fareneith: "<<f;
   }
   
};


class dC
{
	float c;
	public:
	dC(float ft=0)
	{
		c=ft;
	}
	operator dF()
{
dF d(z);
return d;
}
	void getdata()
	{
		cout<<"enter value in celcius: "<<endl;
		cin>>c;
	}
};



int main()
{
	float c,f;
	df f;
	dC c;
	c.getdata();
	f=c;
	f.putdata();
	 return 0;
	
}
