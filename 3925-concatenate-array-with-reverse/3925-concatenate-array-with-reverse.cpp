class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        return arr;

        
    }
};