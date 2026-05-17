#include<iostream>
using namespace std;

int main()
{
    int i , j , n ;
    char ch = 'A'; 
    cin >> n ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            char ch = 'A' + j -1 ;
            cout << ch << " ";
        }
        cout << endl;
    }
}

// A B C D
// A B C D
// A B C D
// A B C D