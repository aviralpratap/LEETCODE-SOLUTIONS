class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> ans;
        leftsum.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            leftsum.push_back(sum);
        }
        int sum1=0;
        for(int i=nums.size()-1;i>0;i--){
            sum1+=nums[i];
            rightsum.push_back(sum1);
        }
            
            reverse(rightsum.begin(), rightsum.end());
            rightsum.push_back(0);

             for(int i=0;i<nums.size(); i++) {
            ans.push_back(abs(leftsum[i] - rightsum[i]));
        }

        return ans;
        
    }
};