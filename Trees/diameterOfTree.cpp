class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =INT_MIN;
        diameterH(root, diameter);
        return diameter;
    }

    int diameterH(TreeNode* root,int& diameter){
        if(root==NULL) return 0;
        int lh = diameterH(root->left,diameter);
        int rh=diameterH(root->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1 + max(lh,rh);
    }
};
