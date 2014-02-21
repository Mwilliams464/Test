
//  EulerProblem2
//
//  Created by Michael Williams on 2/11/14.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[])
{

    int num1 = 1;
    int num2 = 2;
    int fNum = 0;
    int totalSum = 2;
    int evenNum = 0;
    
    cout << num1 << "\n";
    cout << num2 << "\n";

    
    while(fNum<= 4000000){
        fNum = num1 + num2;
        cout << fixed << setprecision (0) << fNum<< "\n";
        num1 = num2;
        num2 = fNum;
        
        evenNum = (fNum % 2);
        
        if (evenNum == 0) {
            totalSum += fNum;
            cout << "Even Num - " << fNum<< "\n";
        }
        
    }
    
    cout << "Total - ";
    cout << totalSum << "\n";
    return 0;
}

