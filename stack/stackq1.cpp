//two stack in one array.
#include<iostream>
using namespace std;

class Twostack{
    public:
        int *arr;
        int top1;
        int top2;
        int size;

    //initialize twostack.
    Twostack(int s){
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    //push in stack 1.
    void push1(int element){
        if(top2-top1 > 1){
            top1++;
            arr[top1] = element;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }

    //push in stack 2.
    void push2(int element){
        if(top2-top1 > 1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }    

    //pop in stack 1.
    int pop1(){
        if(top1 > -1){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            cout<<"underflow"<<endl;
        }
    }
    
    //pop in stack 2;
    int pop2(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            cout<<"underflow"<<endl;
        }
    }
};
int main(){
    Twostack st(5);
    st.push1(5);
    st.push1(52);
    st.push2(2);
    st.push2(6);
    cout<<st.pop2()<<endl;

}