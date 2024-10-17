class Solution {
public:
    int maximumSwap(int num) {

        if(num<10){
            return num;
        }

        string numstr=to_string(num);

        int n=numstr.length();

        int max_i=n-1;

        pair swapp={-1,-1};

        for(int i=n-2;i>=0;i--){

            if(numstr[i]>numstr[max_i]){
                max_i=i;
            }
            else if(numstr[i]<numstr[max_i]){
                swapp={i,max_i};
            }
        }

        if(swapp.first==swapp.second){
            return num;
        }

        swap(numstr[swapp.first],numstr[swapp.second]);

        return stoi(numstr);

        
    }
};