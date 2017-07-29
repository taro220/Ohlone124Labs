#include "morse.h"
TNODE *TELEGRAPH::root = 0;
void TELEGRAPH::buildTree(){
  TNODE *node, *nextNode;
  int i;
  char *dd;
  
  root = new TNODE;
  if (!root) return;
  root->symbol = ' ';
  
  for(i = 0; table[i].symbol; i++){
    node = root;
    for(dd = table[i].code; *dd; dd++){
        if(*dd == '.'){
            if(!node->left){
              TNODE* newnode = new TNODE;
              node->left = newnode; 
            }
            node = node->left;
        }
        if(*dd == '-'){
            if(!node->right){
              TNODE* newnode = new TNODE;
              node->right = newnode; 
            }
            node = node->right;
        }
    }
    node->symbol = table[i].symbol;
  }
}
