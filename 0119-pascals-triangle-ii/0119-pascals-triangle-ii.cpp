class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        vector<int>temp;
        int sun=0;
        for(int i=0;i<rowIndex+1;i++){
            temp.clear();
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    temp.push_back(1);
                }
                else {
                    sun=result[i-1][j-1]+result[i-1][j];
                    temp.push_back(sun);
                }
            }
            if(i==rowIndex){
                return temp;
            }
            else {
                result.push_back(temp);
            }
        }
        return temp;
    }
};