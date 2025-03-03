class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> result;
        vector<int>temp;
        int sun=0;
        for(int i=0;i<num;i++){
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
            result.push_back(temp);
        }
        return result;
    }
};


// 1 *
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1