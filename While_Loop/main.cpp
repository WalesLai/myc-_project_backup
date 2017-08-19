#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double f=1.0;
    long i,n,e=0;
    cout<<"Key in a positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      f*=i;
      while(f>=10.0)
      {
        f/=10.0;//除10  
        e++;//計算次數 
                    }
                    }
        cout.setf(ios::fixed);
        cout<<n<<"!="<<f<<"E+"<<e<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
