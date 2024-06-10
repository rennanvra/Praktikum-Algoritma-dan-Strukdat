#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

    Node* findNode(Node* node, const string& value) {
        if (node == nullptr) return nullptr;
        if (node->data == value) return node;
        Node* foundNode = findNode(node->left, value);
        if (foundNode == nullptr) {
            foundNode = findNode(node->right, value);
        }
        return foundNode;
    }

    void printChildren(Node* node) {
        if (node->left) {
            cout << "Left child: " << node->left->data << endl;
        } else {
            cout << "Left child: None" << endl;
        }
        if (node->right) {
            cout << "Right child: " << node->right->data << endl;
        } else {
            cout << "Right child: None" << endl;
        }
    }

    void printDescendants(Node* node) {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        bool hasDescendants = false;
        cout << "Descendants of " << node->data << ": ";
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            if (current != node) {
                cout << current->data << " ";
                hasDescendants = true;
            }
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (!hasDescendants) {
            cout << "None";
        }
        cout << endl;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

public:
    Tree() : root(nullptr) {}
    ~Tree() { deleteSubtree(root); }

    void insertRoot(const string& value) {
        if (root == nullptr) {
            root = new Node{value, nullptr, nullptr};
            cout << "Root node " << value << " berhasil ditambahkan." << endl;
        } else {
            cout << "Root sudah ada." << endl;
        }
    }

    void insertLeftChild(const string& parent, const string& leftChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak ditemukan." << endl;
            return;
        }
        if (leftChild != "None") {
            if (parentNode->left == nullptr) {
                parentNode->left = new Node{leftChild, nullptr, nullptr};
                cout << "Left child " << leftChild << " berhasil ditambahkan ke " << parent << endl;
            } else {
                cout << "Left child sudah ada untuk " << parent << endl;
            }
        }
    }

    void insertRightChild(const string& parent, const string& rightChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak ditemukan." << endl;
            return;
        }
        if (rightChild != "None") {
            if (parentNode->right == nullptr) {
                parentNode->right = new Node{rightChild, nullptr, nullptr};
                cout << "Right child " << rightChild << " berhasil ditambahkan ke " << parent << endl;
            } else {
                cout << "Right child sudah ada untuk " << parent << endl;
            }
        }
    }

    void updateNode(const string& oldValue, const string& newValue) {
        Node* node = findNode(root, oldValue);
        if (node != nullptr) {
            node->data = newValue;
            cout << "Node " << oldValue << " berhasil diupdate ke " << newValue << "." << endl;
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void findAndPrintNode(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            cout << "Node ditemukan: " << node->data << endl;
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void preOrderTraversal() {
        cout << "PreOrder Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal() {
        cout << "InOrder Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal() {
        cout << "PostOrder Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    void printChildren(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void printDescendants(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printDescendants(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void deleteTree() {
        deleteSubtree(root);
        root = nullptr;
        cout << "Tree berhasil dihapus." << endl;
    }

    void deleteSubtree(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            deleteSubtree(node);
            cout << "Subtree mulai dari node " << value << " berhasil dihapus." << endl;
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }
};

int main() {
    Tree tree;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Root Node\n";
        cout << "2. Left Child\n";
        cout << "3. Right Child\n";
        cout << "4. Find Node\n";
        cout << "5. PreOrder\n";
        cout << "6. InOrder\n";
        cout << "7. PostOrder\n";
        cout << "8. Print Child\n";
        cout << "9. Print Descendants\n";
        cout << "10. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        string value, leftChild, rightChild;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk root node: ";
                getline(cin, value);
                tree.insertRoot(value);
                break;
            case 2:
                cout << "Masukkan nama parent node: ";
                getline(cin, value);
                cout << "Masukkan nama left child (atau 'None'): ";
                getline(cin, leftChild);
                tree.insertLeftChild(value, leftChild);
                break;
            case 3:
                cout << "Masukkan nama parent node: ";
                getline(cin, value);
                cout << "Masukkan nama right child (atau 'None'): ";
                getline(cin, rightChild);
                tree.insertRightChild(value, rightChild);
                break;
            case 4:
                cout << "Masukkan nama node yang dicari: ";
                getline(cin, value);
                tree.findAndPrintNode(value);
                break;
            case 5:
                tree.preOrderTraversal();
                break;
            case 6:
                tree.inOrderTraversal();
                break;
            case 7:
                tree.postOrderTraversal();
                break;
            case 8:
                cout << "Masukkan node yang ingin dicetak child-nya: ";
                getline(cin, value);
                tree.printChildren(value);
                break;
            case 9:
                cout << "Masukkan nama node yang ingin dicetak descendants-nya: ";
                getline(cin, value);
                tree.printDescendants(value);
                break;
            case 10:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 10);

    return 0;
}
