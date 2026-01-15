class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char i:moves)
        {
            if(i=='U')
                x++;
            else if(i=='D')
                x--;
            else if(i=='L')
                y++;
            else if(i=='R')
                y--;
        }
        if(x==0 && y==0)    
            return true;
        else 
            return false;        
    }
};