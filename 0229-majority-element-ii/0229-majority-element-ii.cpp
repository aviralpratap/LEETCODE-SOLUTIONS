class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size()/3;
        vector<int> arr;
        if(nums.size()==1){
            return nums;
        }
        else if(nums.size()==2){
            if(nums[0]!=nums[1]){
                return nums;
            }
            else{
                arr.push_back(nums[0]);
                return arr;
            }
        }
        
        
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                    
            
                }

            }
            if (count>n) {
                bool already = false;

                for (int k = 0; k < arr.size(); k++) {
                    if (arr[k] == nums[i]) {
                        already = true;
                    }
                }
                if (!already) {
                    arr.push_back(nums[i]);
                }
            }     

        }
        return arr;
    }
};