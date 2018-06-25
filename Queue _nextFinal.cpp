#include<bits/stdc++.h>

int Queue[100];
int front=-1,rear=0;

bool isFull(){ //function to Check if the queue is full or not, returns boolean true or false 
	return (rear>=100)?true:false;
}

bool isEmpty() { //function to check if the queue is empty or not , returns boolean true or false
	return (front <=-1)?true:false;
}

void enqueue(int x) {
	if (front == -1){ //Enqueing the First element should increase the first pointer to zero
		++front;
		Queue[rear]=x;
		++rear;
	} else { 
	//All other element dont need to use the first pointer for the enqueue
		
		if (isFull()) exit(0); //Checking if the queue is full or not
		
		Queue[rear] = x;
		++rear;
	}}
	
void dequeue(){
	if (isEmpty()) {std::cout<<"\nNo element in the Queue to dequeue. Exiting..."; exit(0);} //Checking if the queue is empty or not
	
	Queue[front] = 0;
	++front;   //Emptying the queue
	
	if(front == rear) { //If queue is empty after the last pop, empty the queue.
		Queue[front] = 0;
		rear =0;
		front = -1;
	}}
 	
void peek() { //To see the first element in the queue which can be dequeue
	if (isEmpty()) {std::cout << "\nNo element in the Queue. Exiting....."; exit(0);} //Condition check if no element in the queue
	std::cout << "\n"<<Queue[front];
}	



int main() { // Main program and execution starts here
enqueue(5);
enqueue(10);
peek(); //Output should be 5
enqueue(15);
enqueue(20);
peek(); //Output should be 5

//Dequeue starts here
dequeue();
peek();  //Output should be 10
dequeue();
dequeue();
peek(); //Output should be 20
dequeue();
peek();	 //An error message for empty queue as exiting the program
	
	
return 0;
}

