int findMinimumCoins(int amount) 
{
    
    int v[] = {1,2,5,10,20,50,100,500,1000};
    int n = 9;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        while(amount >= v[i] ){
            amount -= v[i];
            ans.push_back(v[i]);
        }
    }
    
    return ans.size();
    
}
