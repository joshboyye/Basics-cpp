#include <iostream>
using namespace std;

int removeOddDigits(int n) {

    int d = 0, r = 0, end =0;

    while(n> 0) {

        if (n % 2 == 0) { 
            d = n % 10;
            d = d * 10 + d;
        } 
        n = n / 10;
    } 


    while (r > 0) {
        d = r % 10;
        end = end * 10 + d;
        r /= 10;
    }

    return end;
}

int sumDigits(int n) {
    if (n < 10) 
    return n;

    return (n % 10 + sumDigits(n/10));
}

int main() {

    int n;
    cout << "Enter a number\n";
    cin >> n;
    cout << "The sum of your diget is" << sumDigits(n) << endl;
    cout << " The number with the odd digits removed is" << removeOddDigits(n);

    return 0;
}