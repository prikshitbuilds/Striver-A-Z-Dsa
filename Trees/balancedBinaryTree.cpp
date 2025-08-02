class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return heightDidd(root)!=-1;
    }

    int heightDidd(TreeNode* root){
    if(root==NULL) return 0;
   int lh= heightDidd(root->left);
    if(lh==-1) return -1;

   int rh= heightDidd(root->right);
    if(rh==-1) return -1;

   if(abs(lh-rh)>1) return -1;
   return 1 + max(lh,rh);
    }
};
