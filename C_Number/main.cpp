#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
 	int n,r;
 	int comb(int,int);
 	do
 	{
	  	cout<<"Enter n,r(n>=r;r>=0):";
	  	cin>>n>>r;
	  				  }
    while((n<r)||(r<0)||(n<0));
	cout<<"C("<<n<<","<<r<<")"<<comb(n,r)<<endl; 	
    system("PAUSE");
    return EXIT_SUCCESS;
}
int comb(int n,int r)
{
 	if((n==r)||(r==0))
 	return(1);
 	else
 	return(comb(n-1,r)+comb(n-1,r-1));
 	}
