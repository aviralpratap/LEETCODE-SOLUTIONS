class Solution {
public:
    int countDigits(int num) {
        int original=num;
        int count=0;
        int digit=0;
        while(num>0){
            digit=num%10;
            num=num/10;
            if(original%digit==0){
                count++;
            }
            
        }
        return count;
        
    }
};