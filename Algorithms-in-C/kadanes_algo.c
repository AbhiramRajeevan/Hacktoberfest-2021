#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 

int main()
{
    int n;
    cout << "Enter number of elements:" ;
    cin >> n;
    cout << "Enter elements of the array:\n" ;
    int a[n];
    for(int i =0;i<n;i++)
      cin >> arr[i];
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
