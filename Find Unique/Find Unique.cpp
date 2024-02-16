int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = arr[0];
    for (int i = 1; i < size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}