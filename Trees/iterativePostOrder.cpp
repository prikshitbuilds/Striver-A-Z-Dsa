class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postOrder;
        stack<TreeNode*>st1,s2;
        if(root==NULL) return postOrder;
          st1.push(root);
        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            s2.push(root);

            if(root->left!=NULL){
                st1.push(root->left);
            }

            if(root->right!=NULL){
                st1.push(root->right);
            }
        }

        while(!s2.empty()){
            postOrder.push_back(s2.top()->val);s2.pop();
        }
        return postOrder;
    }
};
