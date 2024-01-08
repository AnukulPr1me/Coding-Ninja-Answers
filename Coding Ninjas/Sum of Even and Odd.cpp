#include<iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int digit;
    int evenSum = 0;
    int oddSum = 0;

    while (n > 0) {
        digit = n % 10;  

        if (digit % 2 == 0) {
            evenSum += digit;  
        } else {
            oddSum += digit;  
        }

        n = n / 10; 
    }

    cout <<evenSum<<" "<<oddSum;

    return 0;
}