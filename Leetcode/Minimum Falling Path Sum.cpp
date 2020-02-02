class Solution {
public:
     int mini=INT_MAX;
    int minsum(vector<vector<int>>& a, int sx,int sy,int dx, int dy){
                cout<<sx<<" "<<sy<<endl;
        

        if(sx>=dx||sy>=dy||sx<0||sy<0) return INT_MAX;
        cout<<a[sx][sy]<<endl;
        for(int i=sy;i<dy;i++){
            if(sx+1<dx)
            {int ans = a[sx][i] + 
                min( minsum(a,sx+1,i+1,dx,dy) , 
                    min( minsum(a,sx+1,i,dx,dy) ,
                        minsum(a,sx+1,i-1,dx,dy)));
            if(ans<mini) mini=ans;
            cout<<ans<<endl;}
        }
      return mini;
    }
    int minFallingPathSum(vector<vector<int>>& A) {
     int dy=A[0].size();
     int dx=A.size();
        return minsum(A,0,0,dx,dy);
        
    }
   
};