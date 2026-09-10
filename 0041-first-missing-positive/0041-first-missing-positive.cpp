class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<1){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=0;i<nums.size();i++){
            if(count!=nums[i]){
                return count;

            }
            else{
                count++;
            }
        }
        return count;
        
    }
};