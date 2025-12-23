class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp=0,rp=n-1,maxWater=0;
        while(lp<rp){
          int  ht=min(height[lp],height[rp]);
          int  wt=rp-lp;
          int  curr_water=ht*wt;
            maxWater=max(maxWater,curr_water);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxWater;
    }
};
