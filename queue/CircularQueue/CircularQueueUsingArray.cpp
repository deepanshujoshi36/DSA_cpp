#include<iostream>
using namespace std;

#define size 5

class CircularQueue{
	private:
		int front , rear ;
		int arr[size];
	public:
		CircularQueue(){
			front = rear = -1;
		}

		void enqueue(int value){
			if((rear+1)%size == front){
				cout<<"Queue is full"<<endl;
				return ;
			}
			if(front == -1 ){
				front = rear = 0;
			}
			else{
				rear = (rear+1) % size;

			}
			arr[rear] = value;
			cout<< value <<" is push to Queue"<<endl;

		}

		void dequeue(){
			if(front == -1){
				cout<<"Queue is Empty"<<endl;
				return ;
			}

			cout<<arr[front]<<" : deleted"<<endl;

			if(front == rear){
				front = rear = -1;
			}
			else{
				front = (front+1) % size ;
			}
		}

		void display(){
			if(front == -1){
				cout <<"Queue is empty "<<endl; 
				return ;
			}

			int i = front ;
			cout <<"Queue Elements :" ;
			while(true){
				cout <<arr[i]<< " " ;
				if(i == rear){
					break;
				}
				i = (i+1) % size;
			}
			cout<<endl;
		}
};


int main(){
	CircularQueue q;
	q.dequeue();
	q.enqueue(10);
	q.enqueue(20);
	q.dequeue();
	q.enqueue(30);
	q.display();

	return 0;
}
