#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *tree(node *root)
{
    cout << "enter the data for the node: ";
    int data;
    cin >> data;
    if (data == NULL)
    {
        return NULL;
    }
    cout << "enter data for inserting in left: ";
    root->left = tree(root->left);
    cout << "enter data for inserting in right: ";
    root->right = tree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    root = tree(root);
    return 0;
}
