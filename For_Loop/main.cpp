#include <cstdlib>
#include <iostream>
#include<iomanip>

int main(int argc, char *argv[])
{
    for(int i=1;i<16;i+=2)
    {
            std::cout<<std::setw(8-(i-1)/2);
            for(int j=1;j<=i;j++)
            std::cout<<"*";
            std::cout<<std::endl;
            
            
    }
     for(int i=13;i>0;i=i-2)
    {
    	std::cout<<std::setw(8-(i)/2);
    	for(int j=1;j<=i;j++)
      	std::cout<<"*";  
        std::cout<<std::endl;
	}
            
    system("PAUSE");
    return EXIT_SUCCESS;
}
