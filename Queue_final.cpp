#include <iostream>
using namespace std;

#define MAX 100
int Queue[MAX];
int front=0,rear=-1;

bool isEmpty(){
	return (rear<=-1)?true:false; 
}
bool isFull(){
	return (rear >= MAX)?true:false;
}

void Enqueue(int data){
	if (isFull()){
		cout <<"\nOverflow. Cannot add the elements in "<<rear<< " position.";
		exit(0);
	}
	rear++;
	Queue[rear] = data; 
}

void Dequeue(){
	if (isEmpty()){
		cout <<"\nUnderflow. Cannot remove the element from "<<rear<< " position.";
		exit(0);
	}
	if(front == rear){
		Queue[front]=0;
		front =0;
		rear = -1;
	}
	else {
	Queue[front] = 0;
	front++;
}}

void showElements(){
	if(isEmpty()) {
      cout<<"No elements in the queue.";}
	else{
	
	cout<<"\nElements in the queue are: ";
	for(int i = front ; i<=rear; i++) {
		cout <<"\n Queue["<<i<<"]: "<<Queue[i];
	}
}}

int main(){
//Adding the elements to the Queue	
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
cout<<"\n\nAfter Enqueue, ";	
showElements();
//Removing the elements from the Queue
cout <<"\n\nAfter Dequeue, :"	;
	Dequeue();
	Dequeue();
	Dequeue();
  //Dequeue();
  //Dequeue();
	Dequeue();
showElements();
cout<<"\n\nAgain an enqueue, ";
    Enqueue(60);
showElements();    
}
