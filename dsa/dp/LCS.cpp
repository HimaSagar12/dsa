    int lcs(int x, int y, string s1, string s2)
    {
        int t[x+1][y+1];
        
        for(int i=0; i<=x; i++)
            for(int j=0; j<=y; j++)
            {
                if(i==0||j==0)
                    t[i][j]=0;
            }
            
        
        for(int i=1; i<=x; i++)
            for(int j=1; j<=y; j++)
            {
                if(s1[i-1]==s2[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i][j-1],t[i-1][j]);
            }
        
        return t[x][y];
        // your code here
    }
