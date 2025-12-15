
#include <iostream> 
using namespace std; 
  
// Function to reverse the array 
void printReverse(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printReverse(arr, 0, n - 1); 
  
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
  
    return 0; 
} 

// Output: 5 4 3 2 1
