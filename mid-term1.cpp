class Solution {
public:
    void construct_paths(TreeNode* root, string path, vector<string>& paths) {
        if (root != nullptr) {
            path += to_string(root->val);
            if (root->left == nullptr && root->right == nullptr) {  // ��ǰ�ڵ���Ҷ�ӽڵ�
                paths.push_back(path);                              // ��·�����뵽����
            } else {
                path += "->";  // ��ǰ�ڵ㲻��Ҷ�ӽڵ㣬�����ݹ����
                construct_paths(root->left, path, paths);
                construct_paths(root->right, path, paths);
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        construct_paths(root, "", paths);
        return paths;
    }
};

