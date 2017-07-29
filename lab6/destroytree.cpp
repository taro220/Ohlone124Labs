#include "morse.h"

void TELEGRAPH::DestroyTree(TNODE *node){
    
    if(node && !node->left && !node->right){
        delete node;
    } else {
    if(node->left)
    DestroyTree(node->left);
    if(node->right)
    DestroyTree(node->right);
    delete node;
    }
}

void TELEGRAPH::DestroyTree(){
  DestroyTree(root);
  root = 0;
}
