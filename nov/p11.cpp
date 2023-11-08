// Develop a C++ program that asks the user to enter a string and then uses a `for` loop to determine if it's a palindrome
//(reads the same forwards and backwards). Run the program in a way that number of loop's iteration is approximately equal to half of length of the string.
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i=0;
    int y= s.length()-1;
    bool isPal= true;
    while(i<y) {
        if(s[i]!=s[y]) {
            isPal = false;
            break;
        }
        i++;y--;
    }
    if(isPal) {
        cout << "Palindrome " << endl;
    } else {
        cout << "Not Palindrome " << endl;
    }
}


   
