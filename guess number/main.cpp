#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
 	int num,guess,count=0;
 	srand(time(NULL));
 	num=rand()%80+1;
 	do
 	{
      cout<<"Enter your guess (1-80):";
      cin>>guess;
      count++;
      if(guess>num)
      cout<<"Too high..\n";
      else if(guess<num)
      cout<<"Too low...\n";
      else
      cout<<"Bingo..\n";
      
	  				  
    }
    while((guess!=num)&&(count<5));//繼續執行的條件 
    if(guess!=num)
    cout<<"Too bad u r lose\nThe number is "<<num<<endl;
    else
    cout<<"U r win! \n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
