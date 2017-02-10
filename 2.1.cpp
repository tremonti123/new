#include<iostream>
using namespace std;
class rectangle{
int length , breath;
public:
rectangle(int l=0 , int b=0)
{
length =l;
breath=b;
}
void showdata()
{
cout<<"\nl="<<length<<"b="<<breath;
}
};
class square
{
int side;
public:
    square(int s=0)
    {
    side=s;
    }
    operator rectangle
    {
    rectangle r(side,side);
    return r;
    }
};

int main(){
rectangle R(10,20);
R.showdata();
square S(50);
R=S;
R.showdata;
return 0;
}
