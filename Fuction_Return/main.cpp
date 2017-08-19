#include <cstdlib>
#include <iostream>
#include <iomanip.h>
using namespace std;

int main(int argc, char *argv[])
{
 	int fact(int);
 	int n;
 	cout<<"Enter one value: ";
 	cin>>n;
 	cout<<"The factorial="<<fact(n)<<endl;
 	/*setiosflags(ios::scientific)<<setprecision(7)<<*/
    system("PAUSE");
    return EXIT_SUCCESS;
}
int fact(int n)
{
 	   int f=1;
 	   for(int i=1;i<=n;i++)
 	   f=f*(int)i;
 	   return(f);
 	   }
