class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int digit=nums[i]%10;
                sum+=digit;
                nums[i]/=10;
            }
            ans.push_back(sum);
        }
        int mn=ans[0];
    for(int i=1;i<ans.size();i++) {
        if(ans[i]<mn) {
            mn=ans[i];
        }
    }
        return mn;
    }
    };

        
    
