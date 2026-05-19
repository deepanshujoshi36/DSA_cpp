#include<iostream>
using namespace std;
class A{
	protected:
		int a = 1 ;
};
class B{
	protected:
		int b = 2 ;
};
class C: public A , public B{
	private:
		int c = 3;
	public:
		void output(){
			cout << a + b + c <<endl;
		}
};
int main(){
	C ob;
	ob.output();
	return 0 ;
}
