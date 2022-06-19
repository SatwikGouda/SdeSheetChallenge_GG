string longestCommonPrefix(vector<string> &arr, int n)
{
    
    string ans = "";
    
    for(int i=0;i<arr[0].size();i++){
        char ch = arr[0][i];      // to search for the common elements
        bool matched = true;      // to check if it is possible to insert ch or not
        
        for(int j=1;j<n;j++){
            if(arr[j].size()<i || arr[j][i]!=ch){
                matched = false;
                break;
            }
        }
        if(matched!=false){
            ans = ans + ch;
        }
        else{
            break;
        }
    }
    return ans;
}


