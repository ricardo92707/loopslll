//Write a C++ program that receives an integer from the user and calculates the sum of its digits.
#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int y = 0;
    int x = 0;
    int sum=0;
   

    while (num!=0) {
    
    y = num%10;
    sum = sum + y;
    num = num/10; 
   
    }
    
    cout << sum;
}