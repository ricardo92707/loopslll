//Create a program that checks if a number is a prime number. Use `for` loop to solve the problem. 
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number and check if its prime " << endl;
    cin >> num;
    bool prime = true;
    for(int i =2; i<num; i++) {
        if(num%i==0) {
            prime = false;
            break;
        }
    } if (prime) {
        cout << num << " is a prime number " << endl;
    } else {
        cout << num << " is not a prime number " << endl;
    }
}