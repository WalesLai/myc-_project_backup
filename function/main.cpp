#include <cstdlib>
#include <iostream>

using namespace std;
int k;
int  main(int argc, char *argv[])
{
    int sub(int , int);//必須先宣告函數型態 
 	int x=5;
 	int y=3;
 	sub(x,y);
 	cout<<x<<y<<k<<"--主程式印出"<<endl;
 		
 	system("PAUSE");
    return EXIT_SUCCESS;
}
int sub(int i,int f)
{
 		 int j=4;
 		 i=++i;
 		 f--;k=j;
 		 //return(i,f);
 		 cout<<i<<f<<k<<" --函數印出"<<endl;
 		 return(i,f);
}

