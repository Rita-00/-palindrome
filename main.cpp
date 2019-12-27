#include <iostream>
#include <cstdio>
#include "lib.h"

using namespace std;
int main() {
FILE* f=fopen("../f.txt","r+");
  if (f==NULL) {cout<<"не удалось";}
  else {
  char *str=new char[20];
  fread(str, 10, 1, f);
  cout<<"входное слово:"<<str<<"\n";
  int a;
  for (int i=0;i<20;i++) {
      if (str[i] == '\0'){
        a = i;
        break;
      }
  }
  if (palindrom(str)==false) {
   cout<<"слово не пaлиндром"<<"\n";
   char b;
   for (int i=0;i<(a/2);i++){
   b=str[i];
   str[i]=str[a-i-1];
   str[a-i-1]=b;
   }
  cout<<"перевернутое слово:"<<str<<"\n";
  }
  else {
  cout<<"слово палиндром"<<"\n";
  cout<<"перевернутое слово:"<<str;
  }
  }

}