int search(vector<int>& arr, int n, int k){
    // Write your code here.
    // Return the position of K in ARR else return -1.
    
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[s]<=arr[mid]){    // That mean left part is sorted
            if(k>=arr[s] && k<=arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{                         // Means right part is sorted
            if(k>=arr[mid] && k<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}