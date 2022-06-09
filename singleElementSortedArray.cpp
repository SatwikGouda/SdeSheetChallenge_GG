//https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654?topList=striver-sde-sheet-problems

int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int ans = -1;
    for(int i=0;i<n;i+=2){
        if(arr[i]!=arr[i+1]){
            ans = arr[i];
            break;
        }
    }
    return ans;
    
}

// Approach - 2
//XOR of total array will be the ans as (a^a = 0) and (a^0 = a)
int uniqueElement(vector<int> arr, int n)
{
	// Use of XOR Property!
    int XOR = 0;
    for(int i=0;i<n;i++){
        XOR = XOR^arr[i];
    }
    return XOR;
}
