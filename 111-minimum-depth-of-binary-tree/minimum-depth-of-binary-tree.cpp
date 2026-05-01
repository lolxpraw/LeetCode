// https://docs.google.com/drawings/d/1-kHw0Az1-M6DdURj3uN_v_va-wWagiWcnOeh8K65tWU/edit
// su dung burte force de tim tat ca cac level trong nay
class Solution {
public:
    int minDepth(TreeNode* root) {
        // Th1:  cay rong
        if (root == nullptr) return 0;
        if (root->left == nullptr && root->right == nullptr) return 1;
        if (root->left == nullptr) return minDepth(root->right) + 1;
        if (root->right == nullptr) return minDepth(root->left) + 1;

        return min(minDepth(root->right), minDepth(root->left)) + 1;

    }
};