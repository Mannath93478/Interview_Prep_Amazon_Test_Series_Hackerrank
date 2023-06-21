/*Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

Input Format

The First Line contains 2 integers N and M
The Next N Lines contains M integers seperated by a space.
Constraints

n == grid.length
m == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100
Output Format

Print a integer as the anwer to the question

Sample Input 0

2 2
3 2
1 0
Sample Output 0

0
Sample Input 1

2 2
9 7
5 4
Sample Output 1

0*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

int countNegative(int **arr, int n, int m)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    int **arr;
    arr = (int**)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        arr[i]=(int*)malloc(sizeof(int)*m);
        for(int j=0;j<m;j++)
        {
            cin >>arr[i][j];
        }
    }
    
    cout << countNegative(arr,n,m);
    return 0;
}
