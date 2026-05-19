//int this code we can also see the variable hiding 
#include<iostream>
using namespace std;
class A{
	protected:
		int a = 1 , b = 2;
};
class B: public A{
	private:
		int b = 3 , c = 4;  //variable hinding the 'b' variable here will hide the class A 'b' 
	public:
		void output(){
			cout<< a + b + c;
		}
};
int main(){
	B ob;
	ob.output();
	return 0;
}
