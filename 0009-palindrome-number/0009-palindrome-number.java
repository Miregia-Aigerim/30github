class Solution {
    public boolean isPalindrome(int x) {
        boolean a=false;
        if(x<0) {
            return a;
        }
        else if(x==0){
            a=true;
        }
        else
        {
            List<Integer> list=new ArrayList<>();
            while(x>0){
                list.add(x%10);
                x=x/10;
            }
            int i=0;
            int j=list.size()-1;
            while(i<j || i==j){
                if(list.get(i)==list.get(j)){
                    a=true;
                }
                else {
                    a=false;
                    break;
                }
                i++;
                j--;
            }
        }
        return a;
    }
}