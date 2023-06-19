/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Input Format

The First Line contains an Integer N
The Second Line contains N integers representing the array elements.
The Third Line contains an Integer denoting the value of target.
Constraints

2 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists.
Output Format

Print the Indexes of two integers whose sum is equal to target

Sample Input 0

3
3 2 4
6
Sample Output 0

1 2
Sample Input 1

7
4272383 -943113 -466257 -458745 -474695 42855686 -280096
47128069
Sample Output 1

0 5*/


// CODE:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
            }
        }
    }
    return 0;
}
