class Solution {
public:
    int findClosest(int x, int y, int z) {
        int count=0;
        for(int i=0;i<100;i++){
            if(abs(z-x)>abs(z-y)){
                count=2;
            }
            else if(abs(z-x)<abs(z-y)){
                count=1;
            }
            else{
                count=0;
            }
        }
        return count;

        
        
    }
};