#include<iostream>
using namespace std;

int main()
{
    int i , j , n ;
    char ch = 'A'; 
    cin >> n ;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++){
            cout << ch << " ";
            ch++ ; 
        }
        cout << endl;
    }
}

// A B C D
// E F G H
// I J K L 
// M N O P