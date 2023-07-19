#ifndef SetSolver_h
#define SetSolver_h

#include <string>
#include <iostream>
#include <vector>

using std::vector;
using std::string;
//You can add another .h class to help you create a data structure of your choosing.

class SetSolver
{
private:
    int boardSize = 9;
    
public:
    
void PopulateBoard(vector<string>skeletonBoard)
{
    // implement your code here
}
    
int ReturnValue(size_t row, size_t col)
{
    // implement your code here
    
    //return the right value
    return 0;
}
    
void RemovePosibilities()
{
    // implement your code here
}

vector<int> ReturnPosibilities(int row, int col)
{
    // implement your code here
    
    // return the correct values based on the requested square.
   vector<int> temp {1,2,3,4};
   return temp;
}
    
void NearlyThere(int row, int col, string direction)
{
    // implement your code here
        
}
void Solve()
{
    // implement your code here
}
    
    
};
#endif /* SetSolver_h */
