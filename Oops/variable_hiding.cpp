#include<iostream>
using namespace std;
class A{
	protected:
		int a = 1 ;
};
class B: public A{
	protected:
		int a = 2 ;
};
class C : public B{
	protected:
		int c = 3 ;
	public:
		void output(){
			cout << a + c;
		}
};
int main(){
	C ob;
	ob.output();
}

