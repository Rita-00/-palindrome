#include "lib.h"

int palindrom(char *str){
  int a;
  for (int i=0;i<20;i++) {
    if (str[i] == '\0'){
      a = i;
      break;
    }
  }
  bool er=true;
  for(int i=0;i<(a/2);i++){
    if (str[i] != str[a-i-1]) er=false;
      }
      return er;
}