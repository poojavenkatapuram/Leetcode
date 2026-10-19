class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        unordered_set<int> freq;
        for(auto it: mp){
            if(freq.find(it.second)!= freq.end()){
                return false;
            }
            freq.insert(it.second);
            
        }
        return true;
        
    }
};