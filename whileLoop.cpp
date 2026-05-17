#include <iostream>
using namespace std;

int main()
{

    // int i,n,sum = 0 ;
    // cin >> n;
    // i = 1 ;
    // while(i<=n){
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "sum of numbers are " << sum <<endl;
    int n, i = 1, count = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "1 is not a prime number: " << endl;
    }
    else
    {
        while (i <= n)
        {
            if (n % i == 0)
            {
                count++;
            }
            i++;
        }
        if(count == 2){
            cout << n <<" "<< "is a prime number"<<endl;
        }
        else{
            cout << n << " " << "is not a prime number" << endl;
        }
    }
}