/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
typedef TreeNode Node;
void postorder(Node* &node,vector<int>& ans)
{
    if(node==nullptr)
    return;
    postorder(node->left,ans);
    postorder(node->right,ans);
    ans.push_back(node->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    postorder(root,ans);
    return ans;

}