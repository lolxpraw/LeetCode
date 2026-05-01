// https://docs.google.com/drawings/d/1-kHw0Az1-M6DdURj3uN_v_va-wWagiWcnOeh8K65tWU/edit
// su dung burte force de tim tat ca cac level trong nay
class Solution {
public:
    int minDepth(TreeNode* root) {
        // Th1:  cay rong
        if (root == nullptr) return 0;
        // Th2 : 2 cay khong co con
        if (root->left == nullptr && root->right == nullptr) return 1;
        // Th3: cay trai khong tim thay
        if (root->left == nullptr) return minDepth(root->right) + 1;
        // Th4: cay phai khong tim thay
        if (root->right == nullptr) return minDepth(root->left) + 1;

        //Th5: tong quat
        return min(minDepth(root->right), minDepth(root->left)) + 1;
    }
};