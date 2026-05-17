#include<iostream>
using namespace std;
class Queue{
	private:
		int *arr;
		int front , rear , size;
	public:
		Queue(int size){
			this->size = size;
			arr = new int[size];
			front = rear = -1;
		}

		//to insert element in queue or we can say to enqueue but in c++ we say push
		void push(int element){
			if(rear == size -1 ){
				cout <<"< Queue is overflow >"<<endl;
				return ;
			}
			if(front == -1) front = 0;
			arr[++rear] = element;
			
		}

		//to remove the element from the queue or we can say to dequeue but in c++ we say pop
		void pop(){
			if(front == -1 || front > rear){
				cout <<"< Queue is undeflow >"<<endl;
				return ;
			}
			cout <<"Removed :"<<arr[front++]<<endl;
		}
		
		//to check if the queue is full or not
		bool isFull(){
			return (rear == size -1);
		}

		//to check if the queue is empty or not
		bool isEmpty(){
			return (front == -1 || front > rear);
		}

		//to check the front element of the queue 
		void peek(){
			cout<<"Front Element is: " <<arr[front] <<endl;
		}

		//to display the queue
		void display(){
			cout<<"< front - ";
			for (int i = front ; i <= rear ; i++){
				cout <<arr[i] <<"  ";
			}
			cout<<"- rear >"<<endl;
		}
};

int main(){
	Queue q(10);
	q.push(10);
	q.push(20);
	q.push(30);
	q.display();
	q.pop();
	q.display();
	cout << q.isEmpty() <<" "<<q.isFull()<<endl;
	q.peek();
	return 0;
}
