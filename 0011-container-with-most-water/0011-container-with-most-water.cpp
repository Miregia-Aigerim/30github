class Solution {
public:
    int maxArea(vector<int>& height) {
        int x1=0;
        int temp=0;
        int max=0;
        int x2=height.size()-1;
        while(x1<x2){
            if(height[x1]<height[x2]){
                temp=height[x1]*(x2-x1);
                x1++;
            }
            else {
                temp=height[x2]*(x2-x1);
                x2--;
            }
            if(max<temp){
                max=temp;
            }
        }
        return max;
    }
};