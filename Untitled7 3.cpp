#include <iostream> 
using namespace std; 
  
int largestElement(int arr[], int n) 
{ 
    int max = arr[0]; 
  
    for (int i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
} 
  
int main() 
{ 
    int arr[] = { 10, 324, 45, 90, 9808 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Largest element in the array is: " << largestElement(arr, n); 
    return 0; 
}
