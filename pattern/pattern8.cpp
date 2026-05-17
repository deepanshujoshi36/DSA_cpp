#include<iostream>
using namespace std;

int main()
{
    int i , j , n ;
    cin >> n ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= i ; j++){
            cout << i+1-j << " ";
        }
        cout << endl;
    }
}

// 1
// 2 1
// 3 2 1
// 4 3 2 1