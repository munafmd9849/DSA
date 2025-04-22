class Solution{
    public:
        int countFactors(int N){
            int c=0;
            for(int i=1;i*i<=N;i++){
                if(N%i==0){
                    if(i==N/i){
                        c++;
                    }
                    else{
                        c+=2;
                    }
                }
            }
            return c;
        }
    };