#include <iostream>
#include <deque>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* recursiveSearch(TreeNode* root, int key) {
    if (root == NULL) return NULL;
    
    if (root->val == key) {
        return root;
    } else if (key < root->val) {
        return recursiveSearch(root->left, key);
    } else {
        return recursiveSearch(root->right, key);
    }
}

TreeNode* iterativeSearch(TreeNode* root, int key) {
    if (root == NULL) return NULL;
    
    while (root != NULL) {
        if (root->val == key) {
            return root;
        } else if (key < root->val) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    
    return NULL;
}