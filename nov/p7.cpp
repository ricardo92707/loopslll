//Write a program that calculates and prints the sum of all prime numbers between 1 and 100 using a nested `for` loop.'
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i;
    int j;
    for( i =2; i<=100; i++) {
        for( j =2; j<i; j++) {
            if(i%j==0) {
                break;
            }
        } if(i==j) {
        sum += i;
    } 
    } cout << sum << " is total sum of prime numbers " << endl; 
}