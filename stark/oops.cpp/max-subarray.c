#include <stdio.h>
int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int maxcrossing_sum(int arr[], int left, int mid, int right)
{
    int lsum = -99999;
    int sum = 0;
    for (int i = mid; i >= left; i--)
    {
        sum = sum + arr[i];
        if (sum > lsum)
        {
            lsum = sum;
        }
    }
    int rsum = -99999;
    sum = 0;
    for (int i = mid + 1; i <= right; i++)
    {
        sum = sum + arr[i];
        if (sum > rsum)
            rsum = sum;
    }
    return lsum + rsum;
}
int MaxSum(int arr[], int left, int right)
{
    if (left == right)
    {
        return arr[left];
    }
    int mid = (left + right) / 2;
    return max(MaxSum(arr, left, mid),
               MaxSum(arr, mid + 1, right),
               maxcrossing_sum(arr, left, mid, right));