#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"1"<<endl;
		}
};
class B: public A{
	public:
		B(){
			cout<<"2"<<endl;
		}
};
class C{
	public:
		C(){
			cout<<"3"<<endl;
		}
};
class D: public B , public C{
	public:
		D(){
			cout<<"4"<<endl;
		}
};

int main(){
	D ob;
	return 0 ;
}
