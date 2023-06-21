/*Ratan Kumar walks home and wants to remember all the house numbers on the way back to home.

He wants to arrange all the house numbers that fall on the way to his home, from his office, in sorted order.

He hates shorcuts and would like to arrange the numbers in the traditional way,(without using built-in functions).

Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

Input Format

The First Line contains a value N denoting the size of array
The Second Line contains N intgers denoting the elements of array.
Constraints

1 <= nums.length <= 5 * 10^4
-5 * 10^4 <= nums[i] <= 5 * 10^4
Output Format

Print an array of integers in a sorted manner.

Sample Input 0

7
1 6 7 2 4 5 7
Sample Output 0

1 2 4 5 6 7 7 
Sample Input 1

4
7 1 3 8
Sample Output 1

1 3 7 8*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    
    int temp[end - start +1];
    
    int i = start;
    int j = mid+1;
    int k = 0;
    
    while(i<=mid && j<=end)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    
    while(i<=mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    while(j<=end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    k = 0;
    
    for(int i=start;i<=end;i++)
    {
        arr[i] = temp[k++];
    }   
}

void mergesort(int arr[],int start, int end)
{
    if(start < end)
    {
        int mid = (start + end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
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
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
