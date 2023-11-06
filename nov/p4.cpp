//Create a program that takes a string and checks if it is a valid phone number.
//Use `for` loop and check if the phone number follows +1(123)456-7890 format.
#include <iostream>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    bool format = false;

    for(int i=0; i<s1.length(); i++) {
        switch(i) {
        case 0: if(s1[i]!='+') {
            format = true;
        } break;
        case 1: if(s1[i]!='1') {
            format = true;
        } break; 
        case 2: if(s1[i]!='(') {
            format = true;
        } break;
        case 6: if(s1[i]!=')') {
            format = true;
        } break;
        case 10: if(s1[i]!='-') {
            format = true;
        } break;
        default: if(s1[i]>57 || s1[i]<48) {
            format = true;

            }
        }
    } 
    if(format) {
        cout << " wrong format! " << endl;
    } else {
        cout << " format is correct " << endl;
    }
}