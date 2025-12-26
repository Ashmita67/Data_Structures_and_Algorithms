class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int res=0;
        for(int n:nums){
            count[n]++;
            if(count[n]>nums.size()/2)
            {
                res=n;
            }
        }
        return res;       
    }
};