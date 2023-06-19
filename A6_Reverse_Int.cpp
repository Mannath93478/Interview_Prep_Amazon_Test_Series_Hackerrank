/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Input Format

Given an integer x

Constraints

-2^31 <= x <= 2^31 - 1

Output Format

Return an integer which is the answer to the question

Sample Input 0

404
Sample Output 0

404
Sample Input 1

123
Sample Output 1

321*/


// CODE:

#include <cmath>
#include <cstdio>
#include <math.h>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    signed int num;
    cin >> num;
    
    signed int sum= 0, mod;
    
    while(num)
    {
        mod = num % 10;
        sum = sum * 10 + mod;
        num = num/10;
    }
    
    cout <<sum;
    return 0;
}
