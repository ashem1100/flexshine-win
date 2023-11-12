#include <iostream>
using namespace std;
int main()
{

    int n;
    int sumi=0, a;
    for (n = 0;n < 10;n++) {
        cout << "Enter number " << n + 1 << "Integer :";
        cin >> a;
        sumi += a; // sam = sam + a;
    }

    cout << sumi << " is the sum!\n";
    cout << sumi / n;

}

