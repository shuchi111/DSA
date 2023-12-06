class Solution {
  public:
    int countX(int L, int R, int X) {
        int cnt=0;
        for(int i=L+1;i<R;i++){
            int num=i;
            while(num!=0){
                int digit=num%10;
                if(digit==X){
                    cnt++;
                }
                num/=10;
            }
        }
        return cnt;
    }
};
