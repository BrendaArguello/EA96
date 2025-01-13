//
// Created by usuario on 08/01/2025.
//
#include <stdio.h>
float celsiusToFarenheit (float celsius) {
  return (celsius * 9 / 5) + 32;
}
float farenheitToCelsius (float farenheit) {
  return (farenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) {
  return celsius + 273.15;
}

void displayMenu() {

  printf("Escoge una opcion \n");
  printf("1. Celcius a Fahrenheit\n");
  printf("2. Fahrenheit a Celcius\n");
  printf("3. Kelvin a Celcius\n");
}

int main() {
  int option;
  float input, resultado;
    displayMenu();
  scanf("%d",&option);

switch(option) {
  case 1:
    printf("Ingrese los grados celsius \n");
  scanf("%f",&input);
  resultado = celsiusToFarenheit(input);
  printf("Grados Fahrenheit: %.2f\n", resultado);
  break;

  case 2:
    printf("Ingrese los grados Fahrenheit \n");
  scanf("%f",&input);
  resultado = farenheitToCelsius(input);
  printf("Grados Celsius: %.2f\n", resultado);
  break;

  case 3:
    printf("Ingrese los grados Celsius \n");
  scanf("%f",&input);
  resultado = celsiusToKelvin(input);
    printf("Grados Kelvin: %.2f\n", resultado);
  break;
}
  return 0;
  }
