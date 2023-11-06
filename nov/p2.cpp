//Write a program that converts a string to uppercase. Use `for` loop to solve the problem.
//For example if the input is “I Like to Wear Hats." the output should be "I LIKE TO WEAR HATS."
#include<iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    for(int i=0; i<s1.length();i++) {
        if(s1[i]==' ') {
            cout << " ";
        } else {
        s1[i]= s1[i]-32;
        }
       
    } cout << s1;
}