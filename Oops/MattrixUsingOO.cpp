#include<iostream>
using namespace std;
class Matrix{
	int a[2][2];
	public:
		void input(){
			for(int i = 0 ; i < 2 ; i++){
				for(int j = 0 ; j < 2 ; j++){
					cin>>a[i][j];
				}
			}
		}

		void display(){
			for(int i = 0 ; i < 2 ; i++){
                                for(int j = 0 ; j < 2 ; j++){
                                        cout<<a[i][j]<<" ";
                                }
				cout<<"\n";
                        }
		}

		Matrix operator +(Matrix &m){
			Matrix temp;
			for(int i = 0 ; i < 2 ; i++){
				for(int j = 0 ; j < 2 ; j++){
					temp.a[i][j] = a[i][j] + m.a[i][j];
				}
			}
			return temp;
		}

		 Matrix operator -(Matrix &m){
                        Matrix temp;
                        for(int i = 0 ; i < 2 ; i++){
                                for(int j = 0 ; j < 2 ; j++){
                                        temp.a[i][j] = a[i][j] - m.a[i][j];
                                }
                        }
			return temp;
                }
};
int main(){
	Matrix m1 , m2 , sum , diff;
	m1.input();
	m2.input();
	sum = m1 + m2 ;
	diff = m1 - m2;
	sum.display();
	diff.display();
	return 0;

}
