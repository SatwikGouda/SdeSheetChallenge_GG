https://www.codingninjas.com/codestudio/problems/ayush-gives-ninjatest_1097574?topList=striver-sde-sheet-problems

bool isPossible(vector<int> time , int n,int m,long long int mid){
    long long req = 0, curr = 1;
    for(int i=0;i<m;i++){
        if(req+time[i]<=mid) req+=time[i];
        else{
            curr++;
            if(curr>n || time[i]>mid) return false;
            req = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	// Write your code here.
    long long sum = 0;
    int maxm = INT_MIN;
    for(int i=0;i<time.size();i++){
        sum += time[i];
        maxm = max(maxm,time[i]);
    }
    long long int start = maxm,end = sum;
    if(n>m){
        return -1;
    }
    long long int ans = sum;
    while(start <= end){
        long long int mid = start + (end-start)/2;
        if(isPossible(time,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
