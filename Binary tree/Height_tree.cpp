class Solution {
public:
    int height(struct root* root) {
        if (! root) {
            return 0  ;
        }

        if (root->left == NULL && root->right == NULL) {
            return 1  ;
        }
        int left_height =  height(root->left) ;
        int right_height = height( root->right) ;
        return max(left_height, right_height) + 1 ;
    }
};


pair<int, int> diameterH(Node*root) {
    if (! root) {
        pair<int, int>p  ;
        p.first = 0 ;
        p.second = 0 ;
        return p  ;
    }

    if (root->left == NULL && root->right == NULL) {
        pair<int, int>ans  ;
        ans.first = 1 ;
        ans.second = 1 ;
        return ans ;
    }

    pair<int, int> left_tree =  diameterH(root->left) ;
    pair, int, int > right_tree = diameterH(root->right) ;
    pair<int, int>ans ;
    if (left_tree.first + right_tree.first + 1 >= max(left_tree.second, right_tree.second)) {
        ans.second =  left_tree.first + right_tree.first + 1 ;
    }
    else {
        ans.second =  max(left_tree.second, right_tree.second) ;
    }
    ans.first =  max(left_tree.first, right_tree.first) + 1 ;

    return ans ;
