#ifndef SUMOFNODESWITHEVENVALUEDGRANDPARENT_H
#define SUMOFNODESWITHEVENVALUEDGRANDPARENT_H
// 1315. Sum Of Nodes With Even-Valued Grandparent
// Medium

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// Solution 1 - Not fast
int calc(TreeNode* current, int parent, int grandpa){
    int res=0;
    if(grandpa%2==0){
        res+=current->val;
    }
    if(current->left!=nullptr){
        res+=calc(current->left,current->val, parent);
    }
    if(current->right!=nullptr){
        res+=calc(current->right,current->val, parent);
    }
    return res;
}

int sumEvenGrandparent(TreeNode* root) {
    return calc(root,-1,-1);
}
#endif // SUMOFNODESWITHEVENVALUEDGRANDPARENT_H
