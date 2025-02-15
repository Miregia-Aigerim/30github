class Solution {
public:
    bool isValid(string s) {
        bool a=true;
        int size=s.size();
        stack<char> result;
        for(int i=0; i<size; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                 result.push(s[i]);
            }
           
            if(s[i]==')' || s[i]=='}' || s[i]==']' ){
                if(result.empty()) {
                    return false;
                }
                else {
                    char lastE=result.top();
                    if(lastE=='(' && s[i]==')') result.pop(); 
                    else if(lastE=='{' && s[i]=='}') result.pop();
                    else if(lastE=='[' && s[i]==']') result.pop();
                    else return false;
                }
            }
        }
        a=result.empty();
        return a;
    }
};