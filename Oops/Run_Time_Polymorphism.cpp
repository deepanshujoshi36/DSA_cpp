//Runtime polymorphism using inheritance and virtual function 

#include<iostream>
using namespace std;
class Base{
	public:
		virtual void show(){
			cout<<"This is Base class"<<endl;
		}
};
class Derived : public Base{
	public:
		void show(){
			cout<<"This is Derived class"<<endl;
		}
};
int main(){
	Base *ptr;
	Derived d;
	ptr = &d;
	ptr->show();
	return 0;
}
