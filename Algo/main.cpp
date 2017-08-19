#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j;
    i=10;
    j=3;
    cout<<i<<" mod "<<j<<" = "<<i%j<<endl;
    j=i++;//I值(10)先給J 然後I再加1(變成11)  
    cout<<"j="<<j<<endl;
    cout<<"i="<<i<<endl;
    i=10;
    j=++i;//I值+1
    cout<<"j="<<j<<endl;
    system("PAUSE");
   
}
