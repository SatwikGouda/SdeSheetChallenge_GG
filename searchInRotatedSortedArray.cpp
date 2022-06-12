int binarySearch(int arr[],int start,int end,int k){
    if(start>end){
        return -1;
    }
    int mid;
    mid = start + (end-start)/2;
    if(arr[mid] == k){
        return mid;
    }
    
    if(arr[start] <= arr[mid]){                             // if arr[start , mid] is sorted
        // check for key in this half
        if(k>=arr[start] && k<=arr[mid]){
               return binarySearch(arr,start,mid-1,k);
        }
        else 
            return binarySearch(arr,mid+1,end,k);
    }
    
    if(k>=arr[mid] && k<=arr[end])
        return binarySearch(arr,mid+1,end,k);
    return binarySearch(arr,start,mid-1,k);
}

int search(int* arr, int n, int key) {
    // Write your code here.
    int start = 0;
    int end = n-1;
    int z = binarySearch(arr,start,end,key);
    if(z!=-1){
        return z;
    }
    else{
        return -1;
    }
    
}
