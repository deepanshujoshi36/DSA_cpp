#include<iostream>
using namespace std;
class B;
class A{
	public:
		int a = 1;
		friend void output(A , B );
};
class B{
	public:
		int b = 2 ;
		friend void output(A , B );
};
void output(A ob , B ob1){
	cout<<ob.a + ob1.b;
}

int main(){
	A ob;
	B ob1;
	output(ob , ob1);
	return 0;
}
