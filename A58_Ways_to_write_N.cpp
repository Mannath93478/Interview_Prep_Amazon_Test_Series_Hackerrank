/* Given an integer n, return the number of ways you can write n as the sum of consecutive positive integers.

Input Format

Given a single integer N.

Constraints

1 <= n <= 10^9

Output Format

Print a integer which is the answer to the question

Sample Input 0

5
Sample Output 0

2
Sample Input 1

9
Sample Output 1

3*/

// CODE:  


#include<bits/stdc++.h>
using namespace std;

int ways(int n)
{
    int i = 1, count = 0;
    while(n>0)
    {
        n = n - i;
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main() 
{
    int n;
    cin >> n;

    cout << ways(n);
    return 0;
}
