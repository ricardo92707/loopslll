// Write a program that takes a all lower-case string and encrypts it using a simple Caesar cipher (shift each letter by a fixed number of positions).
// For example, a key of 3 and the sentence, “i like to wear z hats.”
// When this sentence is encrypted using a key of 3, it becomes: "l olnh wr zhdu c kdwv."
#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == ' ')
        {
            cout << " ";
        }
        else
        {
            s1[i] += 3;
        }
    }
    cout << s1;
}