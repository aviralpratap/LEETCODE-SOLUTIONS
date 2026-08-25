class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int minimum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int digit=nums[i]%10;
                sum+=digit;
                nums[i]/=10;
            }
            minimum=min(minimum,sum);
            
        }
        return minimum;
        
    }
    };

        
    
