//this is the example of ambiguity

#include<iostream>
using namespace std;
class A{
        protected:
                int a = 1 ;
};
class B{
        protected:
                int a = 2 ;
};
class C :public A , public B{
        public:
                int c = 3 ;
                void show(){
                        cout<< a + c <<endl;
                }
};
int main(){
        C ob;
        ob.show();
        return 0;
}

