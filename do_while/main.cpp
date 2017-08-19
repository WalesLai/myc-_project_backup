#include <cstdlib>
#include <iostream>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[])
{
    char ch;
    do
    {
         ch=getche();
         cout<<"\nThe keypressed is "<<ch<<endl;
         cout<<"ASCII value is "<<(int)ch<<endl;
         }
         while(ch!='Q');
    system("PAUSE");
    return EXIT_SUCCESS;
}
