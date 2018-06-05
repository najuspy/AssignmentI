//Program to insert data at any index
#include <iostream>
using namespace std;
#define MAX 11

int main() {
	int arr[MAX],size,index,data;
	char response;
//Getting a sample array
cout<<"\nEnter the size of array (Max size is 10): ";
cin>>size;


if(size >= MAX) {
cout<<"\nSorry,No space available for that size."; 
return 0;}

//Entering the elements of array
cout<<"\nEnter the elements of the array: ";
for(int i=1; i<=size;++i){
	cin>>arr[i];
}
do{

//Getting the position and data
cout<<"\nEnter the position to insert: ";
cin>>index;
if(index>size){ 
cout<<"\nSorry, You cannot insert in that position.";
return 0;
}
cout<<"\nEnter the data to insert:";
cin>>data;
//Changing the position of values of the arary 
for(int i =size; i>=index; --i ){
	arr[i+1]=arr[i];
}
//Inserting the value to the desired position
arr[index]=data;

size++; //For next time use, if we want to insert the data into arrray

//Printing the array
cout<<"\nElements of the array after insertion is: ";
for(int i=1;i<=size;i++){

//ASking user if they would like to add more data 
cout<<"\n\nDo you like to add more data?('y' for yes): ";
cin>>response;

cout<<" "<<arr[i];}

if(size >= MAX) {
cout<<"\nSorry,No space available to insert data for that size."; 
return 0;}
} while(response =='y'); //Checking if user wants to add more data

return 0; //Ending the program
}
