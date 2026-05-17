#include<iostream>
using namespace std;

int main()
{
    int i , j , n ;
    char ch = 'A'; 
    cin >> n ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            char ch = 'A' + i + j -2;
            cout << ch << " ";
            ch++ ; 
        }
        cout << endl;
    }
}

// A B C D
// B C D E
// C D E F
// D E F G 