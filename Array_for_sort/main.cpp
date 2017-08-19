#include <cstdlib>
#include <iostream>
#define n 10
#include <iomanip.h>
using namespace std;

int main(int argc, char *argv[])
{
 	int x[n];
 	void input(int *);
 	void swap(int *,int *);
 	void sort(int *);
 	void display(int *);
 	input(x);
 	
 	sort(x);
 	display(x);
    system("PAUSE");
    return EXIT_SUCCESS;	
}
void input(int *p)
{
 	 cout<<"Array "<<n<<" integer:";
 	 for(int i=0;i<n;i++)
	  cin>>*(p+i);
 	 }
void swap(int *a,int *b)
{
 	 int t;
 	 t=*a;
 	 *a=*b;
 	 *b=t;
 	 }
void sort(int *p)
{
 	 for(int i=0;i<n;i++)
 	 for(int j=i+1;j<n;j++)
 	 if(*(p+i)>*(p+j))
 	 swap(p+i,p+j);
 	 }
void display(int *p)
{
 	 cout<<"Array data is listed as follow:";
 	 for(int i=0;i<n;i++)
 	 
	  		 cout<<setw(3)<<*(p+i);
	  		 cout<<endl;
	  		 
 	 }
/*{
 	int x[n],i,j,t;
 	cout<<"Enter "<<n<<" inter data";
 	for(i=0;i<n;i++)
 	cin>>x[i];
 	cout<<"Array data is listed as follows:";
 	for(i=0;i<n;i++)
 	cout<<setw(3)<<x[i];
 	cout<<endl;
 	//sort
 	for(int i=0;i<n-1;i++)
 	for(j=i+1;j<n;j++)
 	if(x[i]>x[j])
 	{
	  t=x[i];
	  x[i]=x[j];
	  x[j]=t;
    }
    cout<<"Array data after sorting is listed follows:";
    for(i=0;i<n;i++)
    cout<<setw(3)<<x[i];
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}*/
