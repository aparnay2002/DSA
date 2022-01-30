// C++ program for implementation of selection sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver program to test above functions 
int main() 
{ 
	int n;
  cout<<"enter the size of array: ";
  cin>>n;
    int arr[n];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++ )
           {
              arr[i] = 1 + (rand()%10000); 
           }
    clock_t a=clock();      
	selectionSort(arr, n); 
	clock_t b=clock();
	cout << "Sorted array: "; 
	printArray(arr, n); 

    cout<<"The time of execution is: "<<(float)(b-a)/CLOCKS_PER_SEC<<endl;
	return 0; 
} 
