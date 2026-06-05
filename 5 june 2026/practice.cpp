// so today i have soled 2 array hard problems 
// and learned the concept of monotonous 
// decreasing in deque

// 2 array problems

// leetcode 42. Trapping Rain Water
// (optimal)
// class Solution {
// public:
//     vector<int> getleftmax(vector<int> &height, int &n){
//         vector<int> l(n);
//         l[0] = height[0];
//         for(int i=1;i<n;i++){
//             l[i] = max(l[i-1],height[i]);
//         } 
//         return l;
//     }
//     vector<int> getrightmax(vector<int> &height, int &n){
//         vector<int> r(n);
//         r[n-1] = height[n-1];
//         for(int i=n-2;i>=0;i--){
//             r[i] = max(r[i+1],height[i]);
//         }
//         return r;
//     }
//     int trap(vector<int>& height) {
//         int n = height.size();
//         vector<int> l = getleftmax(height,n);
//         vector<int> r = getrightmax(height,n);
//         int sum = 0;
//         for(int i=0;i<n;i++){
//             int h = min(l[i],r[i]) - height[i];
//             sum += h;
//         }
//         return sum;
//     }
// };


// leetcode 239. Sliding Window Maximum
// (brute force)
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int> ans;
//         if(nums.size()==1){
//            ans.push_back(nums[0]);
//            return ans;
//         }
//         int l = 0;
//         int r = k-1;
//         while(r<nums.size()){
//         int maxx = nums[l];
//         for(int i=l;i<=r;i++){
//             maxx = max(nums[i],maxx);
//         }
//         ans.push_back(maxx);
//         l++;
//         r++;
//         }
//         return ans;   
//     }
// };

// (optimal)
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         deque <int> deq;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//         while(!deq.empty() && deq.front()<=i-k){
//             deq.pop_front();
//         }   
//         while(!deq.empty() && nums[i]>=nums[deq.back()]){
//             deq.pop_back();
//         }
//         deq.push_back(i);
//         if(i>=k-1){
//             ans.push_back(nums[deq.front()]);
//         }
//         }
//         return ans;
//      }
// };
