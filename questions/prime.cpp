#include<iostream>
using namespace std;

void primeNumber(int n)
{
    int check = 0;
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0){
            cout << "not prime " << endl;
            check++;
            break;
        }
    }
    if(check == 0){
        cout << "prime " << endl;
    }
}

int main()
{
    int n ; 
    cout << "enter the number:" ;
    cin >> n ;
    primeNumber(n);
}