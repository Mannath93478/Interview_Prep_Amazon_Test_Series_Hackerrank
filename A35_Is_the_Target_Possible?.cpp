/*There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

Input Format

The first line contains a integer N denoting the size of array A. The second line contains N integers denoting the value of the array. The third line contains a integer denoting the target value.

Constraints

1 <= nums.length <= 100000
-10^4 <= nums[i] <= 10^4
nums is guaranteed to be rotated at some pivot.
-10^4 <= target <= 10^4
Output Format

Print true if target is in nums, or false if it is not in nums.

Sample Input 0

5
3 4 5 1 2
2
Sample Output 0

true
Sample Input 1

9
50 500 2345 -1 0 2 3 4 5
23
Sample Output 1

false*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int N, int target)
{
    for(int i=0;i<N;i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int N;
    cin >> N;
    
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    if(search(arr,N,target))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
    return 0;
}
