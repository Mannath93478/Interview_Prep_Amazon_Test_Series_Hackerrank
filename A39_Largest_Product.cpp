/*Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Input Format

The first line contains a integer N denoting the size of array.
The Second line contains N intgers denoting the value of elements of array.
Constraints

1 <= nums.length <= 10^5
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
Output Format

Print a integer which is the answer to the question

Sample Input 0

7
0 -6 -6 6 3 4 -3
Sample Output 0

2592
Sample Input 1

4
2 3 -2 4
Sample Output 1

6*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

int largeProduct(int arr[], int n)
{
    int product = arr[0];
    for(int i=0;i<n;i++)
    {
        int mul = arr[i];
        for(int j=i+1;j<n;j++)
        {
            product = max(product,mul);
            mul *= arr[j];
        }
        product = max(product,mul);
    }
    return product;
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
    
    cout << largeProduct(arr,n);
    
    return 0;
}
