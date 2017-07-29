#include <iostream> 
static const char DOT = '.';
static const char DASH = '-';
struct MORSECODE {
  char symbol;
  char code[10];
};

struct TNODE {
  char symbol;
  TNODE *left;
  TNODE *right;
  
  TNODE() {
    symbol = '*';
    left = right = 0;
  }
};

class TELEGRAPH {
  enum {N=40};
  private:
    static MORSECODE table[N];
    static TNODE *root;
    static void recursiveDisplay(TNODE* n){
        if (!n) return;
        recursiveDisplay(n->left);
        std::cout << n->symbol << "\t";
        recursiveDisplay(n->right);
    }
    static void DestroyTree(TNODE *node);
  
  public:
    static void buildTree();
    static void displayTree() {recursiveDisplay(root);}
    static void DestroyTree();
    void Encode(char text[], char morse[]);
    void Decode(char morse[], char text[]);
};

