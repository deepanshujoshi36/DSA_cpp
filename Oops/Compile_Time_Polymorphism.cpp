#include<iostream>
using namespace std;
class A{
	public:
		//constructor overloading
		A(int a){
			cout<<a<<endl;
		}
		A(int a , int b){
			cout<<a + b <<endl;
		}

		//method overloading
		void show(int a , int b , int c){
			cout<<a + b + c <<endl;
		}
		void show(int a , int b , int c , int d){
			cout<<a + b + c + d <<endl;
		}
};
int main(){
	A ob(5);
	ob.show(4 , 5 , 6);
	A ob1(2 , 4);
	ob1.show(1 , 2 , 3 , 4);
	return 0;
}
