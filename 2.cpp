#include<iostream>
using namespace std;
const int size=5;
class student 
{
	int roll_no;
	int marks[size];
	
	public :
		void getdata();
		void tot_marks();
		
};
void student ::getdata()
{
	cout<<"enter roll_no ";
	cin>>roll_no;
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter marks of subject "<<i+1<<" ";
		cin>>marks[i];
	}
}

void student::tot_marks()
{
	int total=0;
	for(int i=0;i<size;i++)
	{
		total+=marks[i];
	}
	cout<<"\ntotal marks="<<total<<endl;
	
}
int main()
{
	student s1;
	s1.getdata();
	s1.tot_marks();
	return 0;
}
