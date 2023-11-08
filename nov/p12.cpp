//Write a C++ program that receives a 16-character string from the user and prints it as a 4x4 matrix.
#include<iostream>
using namespace std;
//s1[row*4+column]
int main() {
    string s1;
    cin >> s1;
    int k=0;
    for(int i =0; i<=4; i++) {
        for(int j=0; j<4;j++) {
            cout << s1[k];
            k++;
        } cout << endl;
    }
}