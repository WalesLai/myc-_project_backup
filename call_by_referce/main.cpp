#include <cstdlib>
#include <iostream>
/* 
using namespace std;
int z=10;
int main(int argc, char *argv[])
{
 	int sneak(int );
 	int a;
 	a=sneak(z);
 	cout<<"+a= "<<a<<"  z="<<z<<endl;
 	z=10;
 	a=sneak(10)*sneak(z);//呼叫完畢 = 0*0 
 	cout<<"++a= "<<a<<"  z="<<z<<endl;
 	z=10;
 	a=sneak(z)*sneak(10);//sneak(z)=100  sneak(10)=100 
 	
 	cout<<"+++a= "<<a<<"  z="<<z<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int sneak(int x)
{
 	z-=x;
 	return(x*x);
 	
 	}*/ 
using namespace std;

int main(int argc, char *argv[])
{
 	void swap(int &,int &);
 	int x,y;
    cout<<"Enter two value:";
	cin>>x>>y;
	cout<<"+ x= "<<x<<"  y="<<y<<endl;
	swap(x,y); 
	cout<<"++ x= "<<x<<"  y="<<y<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
void swap(int &a,int &b)
{
 	 int t;
	  t=a;
	  a=b;
	  b=t; 
 	 }
 
