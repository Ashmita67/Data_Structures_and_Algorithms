class Solution {
public:
    int countElements(vector<int>& nums) {
        int c=0;
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>min && nums[i]<max)
                c++;
        }
        return c;
    }
};