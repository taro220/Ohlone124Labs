#include "morse.h"

void TELEGRAPH::Decode(char morse[], char text[]){
  char *dd;
  TNODE *node;
  char *i;
  
  node = root;
  for (dd = morse; *dd; dd++) {
      if(*dd == '.') node = node->left;
      else if(*dd == '-') node = node->right;
      else if(*dd == ' '){
        *text = node->symbol;
        text++;
        node = root;
      }
  }
  *text = '\0';
}
