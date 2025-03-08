class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer;
        int i,j;
        for(i=0;i<boxes.size();i++){
            int count=0;
            for(j=0;j<boxes.size();j++){
                if(i!=j && boxes[j]=='1'){
                    count=count+(abs(i-j));
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};