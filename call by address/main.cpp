#include <cstdlib>
#include <iostream>
//call by address
//first code
/*using namespace std;

int main(int argc, char *argv[])
{
 	void liar(int *a,int*b);
 	int x=-1;
    liar(&x,&x);
    cout<<"x= "<<x<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
void liar(int *a,int*b)
{
 	 *a=-*b;
 	 *b=-*b;
 	 }*/

//second code
/*using namespace std;
int x=-1;
void liar(int *a, int*b)
{
 	 *a=-*b;
 	 cout<<"++x= "<<x<<"  a="<<*a<<"  b="<<*b<<endl;
 	 *b=-*b;
 	 cout<<"x= "<<x<<"  a="<<*a<<"  b="<<*b<<endl;
 	 }
int main(int argc, char *argv[])
{
 	liar(&x,&x);
	cout<<"x= "<<x<<endl; 	
    system("PAUSE");
    return EXIT_SUCCESS;
}*/
//Third code
using namespace std;

int main(int argc, char *argv[])
{
 	int sub(int *,int *, int);
 	int a=0,b=1,c=2;
    cout<<"a= "<<a<<"  b= "<<b<<"  c= "<<c<<endl;
    a=sub(&b,&b,b+c);
    cout<<"a= "<<a<<"  b= "<<b<<"  c= "<<c<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int sub(int *x ,int *y,int z)
{
 	*y=z;
 	return(*x+z);
 	}
