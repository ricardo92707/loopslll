// Write a program that asks the user for their email address and
// extracts the domain name from it. For example if the input is myemail@saddleback.edu, the output should be saddleback.edu.
#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    bool found = false;
    string s2 = "";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '@')
        {
            found = true;
        }
        if (found == true)
        {
            s2 = s2 + s1[i];
        }
    }
    cout << s2;
}