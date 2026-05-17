#include<iostream>
using namespace std;

void selection_sort(int *a , int n )
{
    int min , temp ;
    for( int i = 0 ; i < n-1 ; i++)
    {
        min = i ;
        for(int j = i+1 ; j < n ; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main()
{
    int n ; 
    cout<<"enter the length of array:";
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    selection_sort(a , n );
    for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<"\t";
    }
}