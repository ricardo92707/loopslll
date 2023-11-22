// Write a program that receives a string from the user and removes any duplicate characters, leaving only the first
// occurrence of each character. The input string doesn't have any space or special character and only includes lower case alphabet characters.
#include <iostream>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    string word = "";
    for(int i=0; i<text.length(); i+=2) {
        if(i==text.length()-1) {
            word+=text[i];
        } else {
            word += text[i+1];
            word += text[i];
        }
    } cout << word << endl;
    }