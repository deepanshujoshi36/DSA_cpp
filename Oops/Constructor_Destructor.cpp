#include<iostream>
using namespace std;
class A{
	public:
		//default constructor
		A(){
			cout<<"1"<<endl;
		}

		//parameter constructor
		A(int a){
			cout<<"2"<<endl;
		}

		//copy constructor
		A(const A &ob){
			cout<<"3"<<endl;
		}

		//Destructor
		~A(){
			cout<<"exit"<<endl;
		}
};
int main(){
	A ob;
	A ob1(10);
	A ob2 = ob;
	return 0;
}
