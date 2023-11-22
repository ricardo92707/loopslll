/* Write a program to receive integers (stop when 0 is entered) and put them in a vector and then prints out two summation equations for numbers in odd and even positions of the vector.
Example input: 1, 2, 5, 9, 12, 3, 23, 0
Example output: 1 + 5 + 12 + 23 = 41
                              2 + 9 + 3 = 14 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int x = 0;
    int sum1 = 0;
    int sum2 = 0;
    do
    {
        cin >> x;
        v1.push_back(x);
    } while (x != 0);
    for (int i = 0; i < v1.size(); i += 2)
    {
        sum1 += v1[i];
        if (i < v1.size() - 2)
        {
           cout << v1[i] << " + ";
        }
        else
        {
             cout << v1[i] << " = " << sum1;
        }
    } cout << endl;
    for(int j=1; j<v1.size(); j+=2) {
        sum2+=v1[j];
        if(j<v1.size()-2) {
            cout << v1[j] << " + ";
        } else {
            cout << v1[j] << " = " << sum2;
        }
    }
}