#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"1"<<endl;
		}
};
class B: public A{
	public:
		void play(){
			cout<<"2"<<endl;
		}
};
class C :public A{
	public:
		void show(){
			cout<<"3"<<endl;
		}
};
int main(){
	B ob;
	ob.show();
	ob.play();
	C ob1;
	ob1.show();    //overriding
	return 0;
}
