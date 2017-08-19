#include <cstdlib>
#include <iostream>
//#include <iomanip.h>
#define n 100
#include <time.h>
#include<stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
 	
 	int c[6]={0,0,0,0,0,0};
 	void initial();
 	void counting(int c[]);
 	void print(int c[]);
 	initial();
 	counting(c);
 	print(c);
 	

    system("PAUSE");
    return EXIT_SUCCESS;
}
void initial()
{
 	 unsigned int s;
 	 //cout<<"Enter 0-65535 for seed:";
 	//cin>>s;
 	srand(time(NULL));//利用時間函數 
 	 }
void counting(int c[])
{
 	 for(int i=0;i<n;i++)
 	 {
	  		 int num=rand()%6;
	  		 c[num]++;
	  		 }
  	  }
  	  void print(int c[])
  	  {
	   	   for(int i=0;i<6;i++)
	   	   cout<<i+1<<" ==> "<<c[i]<<" times\n";
	   	   			 }
