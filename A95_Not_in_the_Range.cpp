/*Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

Input Format

The First line contains a integer N denoting the size of array.
The Next line contains N integers denoting the elements of the array.
Constraints

n == nums.length
1 <= n <= 10^5
1 <= nums[i] <= n
Output Format

Print the array of integers which is the answer to the question

Sample Input 0

8
4 3 2 7 8 2 3 1
Sample Output 0

5 6 
Sample Input 1

3
1 2 2
Sample Output 1

3*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

vector<int> NotInRange(vector<int> arr, int n)
{
    vector<int> ans;
    unordered_set<int> numSet(arr.begin(), arr.end());

    for (int i = 1; i <= n; i++)
    {
        if (numSet.find(i) == numSet.end())
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    vector<int> missing = NotInRange(arr,n);

    for (int i : missing) 
    {
        cout << i << " ";
    }
    return 0;
}
