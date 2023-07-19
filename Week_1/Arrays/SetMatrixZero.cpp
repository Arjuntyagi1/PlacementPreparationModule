class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c= matrix[0].size();
        bool firstRowHasZeroes = false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                  if(i==0)     
                  {
                      firstRowHasZeroes = true;
                  }
                 else{
                     matrix[i][0]=0;
                 }
                    matrix[0][j]=0;
                }
            }
            
        }
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=0;j--)
            { 
                if(i == 0 and firstRowHasZeroes)
                {
                    matrix[i][j]=0;
                }
                else if(i!=0 and (matrix[i][0]==0 || matrix[0][j]==0))
                {
                    matrix[i][j]=0;
                }
            }
        }
            
            
        
    }
};