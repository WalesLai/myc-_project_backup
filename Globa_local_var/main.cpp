#include <cstdlib>
#include <iostream>
//loacal variable
/*using namespace std;

int main(int argc, char *argv[])
{
 	int sum(void);
 	int i;
 	for(i=1;i<=3;i++)
 	cout<<i<<"th time = "<<sum()<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int sum(void)
{
 	int x=0;//loacal variable
 	x++;
 	return x;
 	}*/
using namespace std;

int main(int argc, char *argv[])
{
 	int sum(void);
 	int i;
 	for(i=1;i<=3;i++)
 	cout<<i<<"th time = "<<sum()<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
int sum(void)
{
 	static int x=0;//靜態變數 不會消失 
 	x++;
 	return x;
 	}
