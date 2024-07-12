#include <iostream>
using namespace std;
    int main(){
        // This is a program to count the digits of given number
        int n;
        cout<<" Enter a digit:- ";
        cin>>n;

        int count = 0;
        while(n>0){
            n/=10;
            count++;
        }
        cout<<" This number has these digits:- ";
        cout<<count;
    }