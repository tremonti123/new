#include<iostream>
#include<string.h>
using namespace std;
int size=3;
class books
{
	char author[40],title[40],publisher[40];
	int price,stock;
	
	public:
		getdata()
		{
			cout<<"enter author of the book: ";
			gets(author);
			cout<<"\n enter Title of the book: ";
			gets(title);
			cout<<"\n Enter publisher of the book: ";
			gets(publisher);
			cout<<"\n Enter price: ";
			cin>>price;
			cout<<"\n enter stock : ";
			cin>>stock;
			
		}
		int search(char *s1,char *s2)
		{
			if(stricmp(author,s1) == 0 && stricmp(title,s2)==0)
				return 1;
			else
				return 0;
			
		}
		
		void putdata()
	      {
		     cout<<"Author : "<<author<<endl;
		     cout<<"Title: "<<title<<endl;
		     cout<<"Publisher: "<<publisher<<endl;
		     cout<<"Stock: "<<stock<<endl;
		     cout<<"Price: "<<price<<endl;
      	  }
		
		
};

int main()
{
	books b[size];
	for(int i=0;i<size;i++)
    {
        b[i].getdata();
    }
    
    for(int i=0;i<size;i++)
     {
        b[i].putdata();
     }  
	
	char t[200],a[200];
	int index;
    cout<<"Enter the title and author to be searched"<<endl;
    cin>>t>>a;
	for(int i=0;i<size;i++)
     {
        if(b[i].search(a,t))
        {
        	index=i;
		}
     } 
	
	return 0;
} 
