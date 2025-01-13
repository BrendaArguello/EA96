//
// Created by usuario on 09/01/2025.
//
#include <stdio.h>
#include <string.h>

int isPalindrome(char*word) {
  int longitud = strlen(word);
  int izquierda = 0;
  int derecha = longitud - 1;

  while (izquierda < derecha){
  if (word[izquierda] != word[derecha]) {
  return 0;
  }
    izquierda++;
    derecha--;
  }
  return 1;
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
