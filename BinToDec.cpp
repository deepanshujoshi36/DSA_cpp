#include<iostream>
#include<Math.h>
int BinToDec(int n){
    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n % 10;

        if(bit == 1){
            ans = (pow(2,i)) + ans;
        }

        i++;
        n = n / 10 ;

    }
    return ans;
}
using namespace std ;
int main(){
    int n ;
    cout << "enter the number:";
    cin >> n ;
    int result = BinToDec(n);
    cout << result ;
    return 0 ;
}
