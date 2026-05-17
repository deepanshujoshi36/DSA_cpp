#include<iostream>
using namespace std;

int main()
{
    int i , j , n ;
    cin >> n ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
}

// 4 3 2 1
// 4 3 2 1
// 4 3 2 1 
// 4 3 2 1