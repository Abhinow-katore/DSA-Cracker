#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 



} 
  
  
// Driver code 
int main() 
{ 
    int element;
    cin>>element;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n ; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout<<arr[element-1];
     
    return 0; 
} 
  
