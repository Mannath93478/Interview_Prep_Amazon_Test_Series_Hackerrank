/*The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Input Format

A single integer N.

Constraints

0 <= n <= 30

Output Format

Print a integer which is the answer to the quesion

Sample Input 0

3
Sample Output 0

2
Sample Input 1

2
Sample Output 1

1*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int a =0, b=1, c = a + b;
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
   
    for(int i=1;i<n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    
    int n;
    cin >> n;
    
    cout <<fibonacci(n);
    return 0;
}
