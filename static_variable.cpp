/******************************************************************************
Static variables in a Function: When a variable is declared as static, 
space for it gets allocated for the lifetime of the program.

*******************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

void demo() 
{  
    // static variable 
    static int count = 0; 
    cout << count << " "; 
      
    // value is updated and 
    // will be carried to next 
    // function calls 
    count++; 
} 

int main()
{
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i=0; i<5; i++)     
        demo(); 
    
    return 0;
}



