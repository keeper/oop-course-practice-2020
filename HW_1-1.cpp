/*
HW_1-1
List prime number under 30
*/

#include <iostream>
using namespace std;

int main(){
    int d = pow(30, 0.5);  // factor of a number under 30 couldn't be over aquare root of 30.
    int i;
    int j;
    cout << "2 is a prime number.\n"; // too small to be dealt in the loop
    cout << "3 is a prime number.\n"; // too small to be dealt in the loop
    for (i = 2; i <= 30; i = i + 1)
    {
        for (j = 2; j <= d; j = j + 1)
        {
            if (i % j == 0)
            {
                break;
            }
            if (j == static_cast<int>(pow(i, 0.5)))
            {
                cout << i << " is a prime number.\n";
            }
            
        }
    }
    system("PAUSE");
    return 0;
} 