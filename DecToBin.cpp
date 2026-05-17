#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ;
    cout << "enter the number:";
    cin >> n ; 

    int ans = 0 ;
    int i = 1 ;
    while(n != 0 )
    {
        int bit = n & 1 ;

        ans = (bit * i )+ ans;

        i = i * 10;
        n = n >> 1;
    }
    cout << "Answer is: " << ans <<endl;
    return 0 ;
}

