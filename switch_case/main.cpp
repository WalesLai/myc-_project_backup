#include <cstdlib>
#include <iostream>
#include <iomanip.h>
using namespace std;

int main(int argc, char *argv[])
{
    char p1,p2;
    cout<<"Enter s,r or p for play 1: ";
    cin>>p1;
    cout<<"Enter s,r or p for play 2: ";
    cin>>p2;
    switch(p1)
    {
	 	case's':
				switch(p2)
				{
				 		  case's':
						  cout<<"scissors ties scissors,p1=p2\n";
				          break;
				          
				          case'r':
						  cout<<"scissors crush by rock,p1<p2\n";
                          break;	
						
						  case'p':
						  cout<<"scissors cut paper,p1>p2\n";
                          break;				
	 		     }	
				  break;  
			
			case'r':
					cout<<"rock";
				switch(p2)
				{
				 		  case's':
						  cout<<"cursh scissors,p1>p2\n";
				          break;
				          
				          case'r':
						  cout<<"ties rock,p1=p2\n";
                          break;	
						
						  case'p':
						  cout<<"warpe by paper,p1<p2\n";
                          break;				
	 		     }	
				  break; 
				
				case'p':
						cout<<"paper";
				switch(p2)
				{
				 		  case's':
						  cout<<"cut by scissors,p1<p2\n";
				          break;
				          
				          case'r':
						  cout<<"warps rock,p1>p2\n";
                          break;	
						
						  case'p':
						  cout<<"ties paper,p1=p2\n";
                          break;				
	 		     }	
				  break;  	   		  
			   }
    system("PAUSE");
    return EXIT_SUCCESS;
}
