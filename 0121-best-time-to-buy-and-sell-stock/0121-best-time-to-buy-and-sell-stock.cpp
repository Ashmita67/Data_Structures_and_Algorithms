class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices[0],maxp=0,p=0,i=1;
        while(i<prices.size()){
            if(prices[i]<l)
                l=prices[i];
            p=prices[i]-l;
            if(p>maxp)
                maxp=p;
            i++;
        }
        return maxp;        
    }
};