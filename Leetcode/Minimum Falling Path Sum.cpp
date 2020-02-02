class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
     int dx=A[0].size();
     int dy=A.size();
        return minsum(A,0,0,dx,dy);
        
    }
    int min=INT_MAX;
    int minsum(vector<vector<int>>& a, int sx,int sy,int dx, int dy){
        cout<<sx<<" "<<sy<<endl;
        if(sx>=dx||sy>=dy) return INT_MAX;
        for(int i=sx;i<dx;i++){
            int ans = a[sx][sy] + 
                min( minsum(a,sx+i,sy,dx,dy) , 
                    min( minsum(a,sx+i,sy-1,dx,dy) ,
                        minsum(a,sx+i,sy+1,dx,dy)));
            if(ans<min) min=ans;
        }
      return min;
    }
};