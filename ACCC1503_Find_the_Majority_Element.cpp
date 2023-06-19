/*
Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times. You may assume that the array is non-empty and the majority element always exist in the array.

Input Format

The first argument is an integer array A.

Constraints

1 <= |A| <= 10^6
1 <= A[i] <= 10^9
Output Format

Return the majority element.

Sample Input 0

2
3 3
Sample Output 0

3
Sample Input 1

8
4890 4890 4890 4890 4890 17 44 26
Sample Output 1

4890*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int arr1[100000]={0};
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        arr1[arr[i]]++;
    }
    int max = 0, index =-1;
    
    for(int i = 0;i<n;i++){
        if(max<arr1[arr[i]])
        {
            max=arr1[arr[i]];
            index=arr[i];
        }
    }
      
    if(max > n/2)
    {
        cout << index;
    }
  
    return 0;
}
