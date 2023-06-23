/*You are given a 0-indexed integer array nums.

Swaps of adjacent elements are able to be performed on nums.

A valid array meets the following conditions:

The largest element (any of the largest elements if there are multiple) is at the rightmost position in the array.
The smallest element (any of the smallest elements if there are multiple) is at the leftmost position in the array.
Return the minimum swaps required to make nums a valid array.

Input Format

The First line contains a integer N
The Next line contains N integers
Constraints

1 <= nums.length <= 10^5
1 <= nums[i] <= 10^5
Output Format

Print the integer which is the answer to the question.

Sample Input 0

6
3 4 5 5 3 1
Sample Output 0

6
Sample Input 1

1
9
Sample Output 1

0*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

int minSwaps(int arr[], int n)
{
    int min_value = arr[0];
    int max_value = 0;
    int first = 0;
    int last = 0;
    
    for(int i=0;i<n;i++)
    {
        int n1 = arr[i];
        if(n1 < min_value)
        {
            min_value = n1;
            first = i;
        }
        
        if(n1 >= max_value)
        {
            max_value = n1;
            last = i;
        }
    }
    
    return first + n -1 - last -(first > last);
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
  
    cout << minSwaps(arr,n);
    
    return 0;
}
