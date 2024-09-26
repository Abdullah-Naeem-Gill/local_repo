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
node *buildtree(node *root)
{
    int data;
    cout << "enter data:";
    cin >> data;
    root - new node(data);
    if (data == NULL)
    {
        return NULL;
    }
    cout << "enter data left: " << data;
    root->left = buildtree(root->left);
    cout << "enter data right: " << data;
    root->right = buildtree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    root = buildtree(root);

    return 0;
}
