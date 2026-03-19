
class Solution {
public:
    // Tao ham de quy mang nums
    TreeNode* bulid(vector<int>& nums, int left, int right){
        if(left > right) return nullptr;

        int mid = (left + right) / 2; // lay phan tu o giua

        TreeNode* root = new TreeNode(nums[mid]); // node cua phan tu giua
        root->left = bulid(nums , left, mid - 1); // tao cay con o phia ben trai cua mang
        root->right = bulid(nums, mid + 1, right); // tao cay con o phia ben phai cua mang

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> nums;
        while(head){
            nums.push_back(head->val); // dua gia tri hien tai vao mang nums
            head = head->next; // di qua gia tri tiep theo
        }
        return bulid(nums, 0, nums.size() - 1);
    }
};