class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int x=0;
        for(int i=0;i<s.size();i++){
            x='z'-s[i]+1;
            sum+=(i+1)*x;

        }
        return sum;
        
    }
};