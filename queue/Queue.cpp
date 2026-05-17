#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout <<"size of queue is : "<<q.size()<<endl;
	q.pop();
	cout<<"the front element is "<<q.front()<<" and last element is "<<q.back()<<endl;
	return 0;
}
