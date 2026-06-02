#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v = {10 , 2 , 9 , 8, 5 };

	//to check the size of the vector
	cout<<"size of vector v is "<<v.size()<<" ";

	//to insert into the vector
	v.push_back(6);

	//to traverse the vector
	for(int x: v){
		cout<<x<<" ";
	}

	cout<<endl;

	//to remove the last element from the vector
	v.pop_back();

	//to access the last element of the vector
	cout<<v.back()<<endl;

	//to check if the array is empty or not
	if(v.empty()){
		cout<<"empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}

	//to sort the array
	sort(v.begin() , v.end());

	cout<<v.back();

	
	return 0;
}
