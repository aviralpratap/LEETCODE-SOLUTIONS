class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count=0;
        vector<int> ans;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(digits[i]!=0&&i!=j&&j!=k&&i!=k&&(digits[i]*100+digits[j]*10+digits[k])%2==0){
                        int num=digits[i]*100+digits[j]*10+digits[k];
                        bool found=false;
                        for(int x=0;x<ans.size();x++){
                            if(ans[x]==num){
                                found=true;
                            }
                        }
                        if(found==false){
                            ans.push_back(num);
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};

