//Insert data at the ending
#include <iostream>
using namespace std;
#define MAX 11

int main() {
	int arr[MAX],size,data;
	char repeat;
//Getting a sample array
cout<<"\nEnter the size of array (Max size is 11): ";
cin>>size;

//Checking if array is full or not 
if(size >= MAX) {
cout<<"\nSorry,No space available to inssert data for that size."; 
return 0;}

//Entering the elements of array
cout<<"\nEnter the elements of the array: ";
for(int i=1; i<=size;++i){
	cin>>arr[i];
}

do{
cout<<"\nEnter the data to insert:";
cin>>data;


//Inserting the value to the first position
arr[size+1]=data;

size++; //For next time use, if we want to insert the data into arrray

//Printing the array
cout<<"\nElements of the array after insertion is: ";
for(int i=1;i<=size;i++){
cout<<" "<<arr[i];}


cout<<"\nDo you like to add more data?('y or Y' for yes): ";
cin>>repeat;

if(size >= MAX) {
cout<<"\nSorry,No space available to insert data for that size."; 


return 0;}
} while(repeat =='y'|| repeat =='Y'); //Checking if user wants to add more data

return 0; //Ending the program
} 
