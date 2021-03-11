#include <iostream>
#include <ostream>
#include <time.h>
using namespace std;
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
} 
int main()
{	
    for(int i = 0; i<100000; i = i+1)
    {
    cout << "N";
    delay(1);
    cout << "\b";
    delay(1);
    cout << "";

    }
    cout << "Done" << endl;
	return(0);
}
