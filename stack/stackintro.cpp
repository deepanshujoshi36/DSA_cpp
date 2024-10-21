#include<iostream>
#include<stack>
using namespace std;

class stack{

    //properties
    public:
        int *arr;
        int size;
        int top;

    //behaviour
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(top-size > 1){
            top++;
            arr[top] = element; 
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

};

int main(){
    /*

    //creation of stack
    stack<int> s;

    //push operation
    s.push(5);
    s.push(9);
    s.push(4);
    s.push(7);
    s.push(1);

    //pop opeartion

    s.pop();


    //top  
    cout<<"printing top element:"<<s.top()<<endl;

    //empty

    if(s.empty()){
        cout<<"empty"<<endl;
    } 
    else{
        cout<<"not empty"<<endl;
    }

    //check size
    cout<<"The size of stack is:"<<s.size()<<endl;
    */
    
    return 0;
}