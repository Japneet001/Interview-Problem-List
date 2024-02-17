#include <bits/stdc++.h> 

int firstOccurance(vector <int>& arr, int n, int k){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == k){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(vector <int>& arr, int n, int k){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start)/2;
        if (arr[mid] == k){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstOccurance(arr, n, k);
    p.second = lastOccurance(arr, n, k);

    return p;
}