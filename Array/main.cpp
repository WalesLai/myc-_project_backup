#include <cstdlib>
#include <iostream>
#include <iomanip>
#define n 4
/*using namespace std;

int main(int argc, char *argv[])
{
 	int x[n];
 	int *p=x;
 	for(int i=0;i<n;i++)
 	{
	 		cout<<"x["<<i<<"]=";
	 		cin>>x[i];
	 		}
	 		for(int i=0;i<n;i++)
	 		cout<<setw(5)<<*(p+i);
	 		cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}*/
/*using namespace std;

int main(int argc, char *argv[])
{
 int x[10]={12,23,34,45,56,67,78,89,90,100};
 for(int i=0;i<=9;i++)
 cout<<setw(5)<<x[i];
 cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}*/
using namespace std;

int main(int argc, char *argv[])
{
 	void display(int *);
	 int x[6]={611,310,521,823,42,95};
	 display(x);	
    system("PAUSE");
    return EXIT_SUCCESS;
}
void display(int *p)
{
 	 int i;
 	 for(i=0;i<6;i++)
 	 cout<<setw(5)<<*(p+i);
 	 cout<<endl;
 	 }

