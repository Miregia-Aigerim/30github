class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        int direction=1;
        while(time!=0){
            if(i==n ||  0==(i+direction)){
                direction*=-1;
            }
            i=i+direction;
            time--;
        }
        return i;
    }
};

// 3   7
// 1-2-3-2-1-2-3-2