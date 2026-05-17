#include<iostream>
using namespace std;

void fibinacci(int n)
{
    int sum ;
    int a = 0 , b = 1 ;
    cout<< a <<" " << b << " " ;
    for(int i = 1 ; i <= n-2 ; i++)
    {
        sum = a + b ;
        cout << sum <<" " ;
        a = b ;
        b = sum ;
    }
}

int main()
{
    int n ;
    cout << "enter the number:" ;
    cin >> n ;
    fibinacci(n);
}