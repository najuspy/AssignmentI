//A program to implement stack with pop n push function

#include<iostream>
using namespace std;

#define MAX 100
int Stack[MAX];
int top =-1;

//Checking if the stack is empty or not. 
bool isEmpty(){
return (top < -1)?true:false;
}
//Checking if the stack has space or not. 
bool isFull(){
	return (top>=MAX)?true:false;
}
//Pushing the element in the stack
void push(int x){
	if (isEmpty()) {
	cout<<"\nNo space available in Stack to push.";
	exit(0);} //Exiting the stack if there is no space available in the stack.
	top++;
	Stack[top]=x;
	
	}
//Popping the element out from the Stack	
void pop(){
	if (isFull()) {
		cout<<"\nNo element present in the stack to pop.";
		exit(0); //Exiting the program if there is no element available in the stack
	}
	Stack[top] = 0;
	top--;
}	
//TO know the top element of the stack
void topElement() {
	cout <<"\nTop element of the stack at the current moment is: "<<Stack[top];
}


int main() {
//Pushing some element into the stack
push(1);
push(2);
push(3);
push(100);

topElement();
//Popping out some elements out the stack
pop();
pop();

topElement();
}
