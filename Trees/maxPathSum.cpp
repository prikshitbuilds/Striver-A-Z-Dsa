class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxiPath(root,maxi);
        return maxi;
    }

    int maxiPath(TreeNode* node, int& maxi){
        if(node==NULL) return 0;
        int leftSum = max(0,maxiPath(node->left,maxi));
         int rightSum = max(0,maxiPath(node->right,maxi));
         maxi=max(maxi,leftSum + rightSum + node->val);
          return max(leftSum,rightSum) + node->val;
    }
};
