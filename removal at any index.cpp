#include <iostream>
using namespace std;

#define MAX 10
//Checking if the size is valid or not 
void checkBound(int size, int max){
	
	if (size<1 || size >max) {
	cout<<"Cannot remove from the array so exiting.";	
	exit(0);
}}
//Displaying the array elements
void displayArray(int arr[], int size){
	cout <<"\nElements of the array are: ";
	for (int i =1; i<=size; ++i){
		cout <<" "<<arr[i];
	}
}
int main() {
int arr[MAX],size,position;
//Taking the size of the array
cout<<"\nEnter the size of the array(MAX size is 10):  ";
cin>>size;
checkBound(size,MAX);

//Getting  a sample array
cout <<"\nEnter the elements for the sample array: ";
for (int i=1; i<=size; ++i){
	cin>>arr[i];
}
//Getting the position to remove the element
cout<<"\nEnter the position to remove the element: ";
cin>>position;
checkBound(position,size);
//Checking the array before removal
cout<<"\nArray before removal is: ";
displayArray(arr, size);
for (int i=position; i<size;++i ){
	arr[i] = arr[i+1];
}
//reducing our size value as array is depreciated by a value
size--;
//Displaying the arrray after removal of the element
cout<<"\nAray after removal is: ";
displayArray(arr, size);
}
