//
// Created by usuario on 09/01/2025.
//
#include <stdio.h>
#include <string.h>

int isPalindrome(char*word){

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
    printf("No es palindromo");
  }

}