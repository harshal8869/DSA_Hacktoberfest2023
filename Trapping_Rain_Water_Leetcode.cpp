// Problem 42. Leetcode ( Trapping Rain Water )  Solution in C++

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ml[n];
        ml[0]=height[0];
        int mr[n];
        mr[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            ml[i]=max(ml[i-1],height[i]);

        }
        for(int i=n-2;i>=0;i--){
            mr[i]=max(mr[i+1],height[i]);

        }
        int water[n];
        for(int i=0;i<n;i++){
            water[i]=min(ml[i],mr[i]) - height[i];

        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=water[i];
        }
        return sum;
    }
};
