#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1, Node *root2)
    {
        if (root1 == NULL && root2 == NULL)
        {
            return true;
        }

        if (root1 == NULL && root2 != NULL)
            return false;

        if (root2 == NULL && root1 != NULL)
            return false;

        if (root1->data != root2->data)
        {
            return false;
        }

        return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right) || isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
    }
};

int main()
{

    return 0;
}