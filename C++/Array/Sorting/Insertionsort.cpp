//Insertion Sort->
//Insert an element from unsorted array to its correct position in sorted array.
//Start from Index[1] leaving Index[0] aside.
#include<iostream>
using namespace std;

int main(){
	int arr[] = {23, 12, 99, 7, 54, 65};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for(int i = 1; i < size; i++){
		int current = arr[i];
		int j = i - 1;
		while(arr[j] > current && j >= 0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}