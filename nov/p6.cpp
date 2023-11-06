// Develop a C++ program that takes a sentence and counts the number of vowels,
// consonants, and digits in it. The letters in the sentence can be in lowercase or uppercase. Use `for` loop to solve the problem.
#include <iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    int vowels = 0;
    int numbers = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            vowels++;
        }
        if (s1[i] < 57 && s1[i] > 48)
        {
            numbers++;
        }
    }
    cout << vowels << " vowels in string " << endl;
    cout << numbers << " numbers in string " << endl;
}