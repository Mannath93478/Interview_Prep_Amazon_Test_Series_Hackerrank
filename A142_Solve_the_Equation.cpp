/*Given an array A of integers and integer K, return the maximum S such that there exists i < j with A[i] + A[j] = S and S < K. If no i, j exist satisfying this equation, return -1.

Input Format

The First line contains two integers N and K.
The Next line contains N integer representing the array elements.
Constraints

1 <= nums.length <= 6*1e4
1 <= nums[i] <= 1000
1 <= k <= 2000
Output Format

Print a integer which is the answer to the question.

Sample Input 0

3 15
10 20 30
Sample Output 0

-1
Sample Input 1

8 60
34 23 1 24 75 33 54 8
Sample Output 1

58*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

int Equation(int arr[],int N, int K)
{
    sort(arr,arr+N);
    
    int first = 0;
    int last = N-1;
    
    int tempSum = 0;
    
    while(first < last)
    {
        // 1,8,23,24,33,34,54,75
        // 10,20,30
        if(arr[first] + arr[last] < K)
        {
            if(tempSum < arr[first] + arr[last])
            {
                tempSum = arr[first] + arr[last];
            }        
            first++;
        }
        else 
        {
            last--;
        }
    }
    return tempSum;
}

int main() 
{
    int N, K;
    cin >> N >> K;
    
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    int res = Equation(arr,N,K);
    //cout << Equation(arr,N,K);
    if(res)
    {
        cout << res;
    }
    else
    {
        cout << -1;   
    }
    
    return 0;
}
