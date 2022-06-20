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


// Approach - 2
string prefixAns(string &s1,string &s2){
    int minLength = min(s1.size(),s2.size());
    // Only traversing through minimum length of either s1 ,s2    
    string ans = "";
    for(int i=0;i<minLength;i++){
        if(s1[i] == s2[i]){
            ans += s1[i];
        }
        else{
            break;
        }
    }
    return ans;
}

string divideString(vector<string> &arr,int start,int end){
    if(start == end){
        return arr[start];    //edge case
    }
    //Divide nd Conquer Approach    
    int mid = start + (end-start)/2;
    string leftHalf = divideString(arr,start,mid);
    string rightHalf = divideString(arr,mid+1,end);
    
    string ans = prefixAns(leftHalf , rightHalf);
    return ans;
    
}


string longestCommonPrefix(vector<string> &arr, int n)
{
    string longestPrefix = divideString(arr,0,n-1);
    return longestPrefix;
}


