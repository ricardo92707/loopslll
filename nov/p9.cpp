#include<iostream>
using namespace std;

int main() {
    string initialSentence;
    getline(cin, initialSentence);
    cout << "What word are you looking for" << endl;
    string wordFound;
    cin >> wordFound;
    bool found = true;
    for(int i=0; i<initialSentence.length()-wordFound.length();i++) {
        found = true;
        for(int j=0; j<wordFound.length(); j++) {
            if(initialSentence[i+j] != wordFound[j]) {
                found = false;
                break;
            }
        } if(found) {
            cout << "Found " << endl;
        } 
    }
}