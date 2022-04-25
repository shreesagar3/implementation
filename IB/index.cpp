#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> ans;
    void _helper(TreeNode* root){
        if(root == NULL){
            return;
        }
        _helper(root->left);
        ans.push_back(root->val);
        _helper(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        _helper(root);
        return ans;
    }
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int main()
{
    int n, m;
    cin >> n >> m;
    cout << n << " " << m << endl;
}