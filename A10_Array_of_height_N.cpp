/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Input Format

First line contains an integer N denoting the size of array A.
Second Line contain N integers representing the elements of the array.
Constraints

n == height.length
2 <= n <= 10^5
0 <= height[i] <= 10^4
Output Format

Contains an Integer

Sample Input 0

5
286 403 570 819 917
Sample Output 0

1209
Sample Input 1

9
1229 3254 269 1351 71 406 46 8 680
Sample Output 1

5440*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

int Area(int arr[], int n)
{
    int area = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            area = max(area,min(arr[j], arr[i]) * (j-i));
        }
    }
    return area;
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
    cout << Area(arr,n);
    
    return 0;
}
