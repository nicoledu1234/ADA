#include <iostream>
using namespace std;


long long binary_exponentation( long long x, long long y ){

    long long res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y >>1)
            res = (res * x);
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    return res;
}

int main(){
    
    long long x = 2;
    long long  y = 5;

    cout << binary_exponentation(x, y);
    return 0;


    return 0;
}