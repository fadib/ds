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

TreeNode* newNode(int x) {
    TreeNode* node = new TreeNode(x);
    return node;
}

TreeNode* insertLevelOrder(int arr[], TreeNode* root, int i, int n) {
    if (i < n) {
        TreeNode* temp = newNode(arr[i]);
        root = temp;
        
        // insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
        
        // insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    }

    return root;
}

void inOrder(TreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->val << " ";
        inOrder(root->right);
    }
}

void preOrder(TreeNode* root) {
    if (root != NULL) {
        cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrderIteration(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* t = root;
    
    while (t != NULL || !s.empty()) {
        if (t != NULL) {
            s.push(t);
            t = t->left;
        } else {
            t = s.top();
            s.pop();
            cout << t->val << " ";
            t = t->right;
        }
    }
}

void preOrderIteration(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* t = root;
    
    while (t != NULL || !s.empty()) {
        if (t != NULL) {
            cout << t->val << " ";
            s.push(t);
            t = t->left;
        } else {
            t = s.top();
            s.pop();
            t = t->right;
        }
    }
}

int main(int argc, const char * argv[]) {
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    TreeNode* root = insertLevelOrder(arr, root, 0, n);
    inOrder(root); cout << endl;
    inOrderIteration(root); cout << endl;
    cout << "-----" << endl;
    preOrder(root); cout << endl;
    preOrderIteration(root); cout << endl;
    return 0;
}
