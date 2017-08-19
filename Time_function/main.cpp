#include <cstdlib>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
 	unsigned long i,t,count=25000000;//unsigned long 0-4294967295
 	double a,b,c,d;
 	clock_t ticksnow;
 	for(i=1;i<=count;i++)
 	{
	 a=(double(i+1));
	 b=(double(i-i));
	 c=(double(i*2));
	 d=(double(i/2));
	  }
	  if((ticksnow=clock())==(clock_t)-1)
	  {
        cout<<"processor time not avaiable!\n";
        exit(1);
        }
        t=(unsigned long)ticksnow/CLK_TCK;
        cout<<count<<" loops take "<<t<<" seconds\n";
		
    system("PAUSE");
    return EXIT_SUCCESS;
}
