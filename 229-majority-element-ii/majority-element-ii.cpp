class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp ;
        for( int i=0; i<n; i++){
            if(mp.count(nums[i])){
                mp[nums[i]]++;
            }
            else {
                mp[nums[i]]=1;
            }
        }

        vector<int> ans ;
        for (pair<int,int> p: mp){
            if(p.second>n/3){
               ans.push_back(p.first);
            }
        }
            return ans;
        }
};