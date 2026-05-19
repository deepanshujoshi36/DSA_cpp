#include<iostream>
using namespace std;
class A{
	public:
		int a ;
		void input(){
			cin >> a;
		}

		//unary operator overloading
		void operator ++(int){
			a++;
			cout << a;
		}
		//binary operator overloading
		void operator +(A ob1){
			cout << a + ob1.a;
		}
};
int main(){
	A ob , ob1;
	ob.input();
	ob1.input();
	ob++;
	ob + ob1;
	return 0;
}
