#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *tree(node *root)
{
    cout << "enter data for the node: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for the left of the tree: " << data;
    root->left = tree(root->left);
    cout << "enter data for the right of the node:" << data;
    root->right = tree(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    root = tree(root);
    return 0;
}
