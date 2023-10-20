#include <stdio.h>   

void PrintArray(int arr[], int n);
void swap(int *x, int *y);
void BubbleSort(int arr[], int n);

// Main Function 
void main() 
{ 
int arr[10], n, i;
printf("Enter number of elements : ");
scanf("%d", &n); 
printf("Enter %d Numbers:", n); 
for(i = 0; i < n; i++)
	scanf("%d", &arr[i]); 
BubbleSort(arr, n); 
PrintArray(arr, n); 
}

// Function to print the elements of an array
void PrintArray(int arr[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
	printf("%d \t", arr[i]); 
}  

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

// Bubble Sort Function
void BubbleSort(int arr[], int n) 
{ 
int i, j;
for(i = 0 ; i < n - 1; i++)
{
	for(j = 0 ; j < n-1-i; j++)
	{
	if(arr[j] > arr[j+1]) 
		swap(&arr[j], &arr[j+1]);
	}
}
}   
