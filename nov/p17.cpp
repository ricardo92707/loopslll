//Write a program to receive integers (stop when 0 is entered) from the input, put them in a vector and then prints out the second largest number of the vector. 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v1;
    int x=0;
    int num =0;
    do{
        cin >> x;
        v1.push_back(x);
    } while(x!=0);
   for(int i=0; i<v1.size(); i++) {
        if(v1[i]>num) {
           num=v1[i];
        }
   } cout << num;
   v1.pop_back();
    
   }