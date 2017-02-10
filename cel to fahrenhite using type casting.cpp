#include<iostream>
using namespace std;
class fr
{
float a;
public:
fr(float m=0)
{
a=(m*1.8)+32;
}
void display()
{
cout<<a<<" ";
}

};

class cel
{
float z;
public:
cel(float ft=0)
{
z=ft;
}
operator fr()
{
fr d(z);
return d;
}

};

int main()
{
fr D(5);
D.display();
cel h;
D=h;
D.display();
return 0;
}
