//
// Created by usuario on 09/01/2025.
//
#include <stdio.h>
#include <string.h>

int isPalindrome(char*word){
  //int longitud = strlen(word);
  //if(longitud%2==0) {
    //return 0;
  //}
}

void getInput(char*word) {
  printf("Ingrese una palabra: ");
  scanf("%s",word);
}

int main(){

  char palabra[100];
  getInput(palabra);

  if(isPalindrome(palabra)) {
    printf("Es palindromo");
  } else {
    printf("No palindromo");
  }

}