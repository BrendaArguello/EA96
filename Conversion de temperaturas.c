//
// Created by usuario on 08/01/2025.
//
#include <stdio.h>
float celsiusToFarenheit (float celsius) {
  printf("Grados Fahrenheit = %f\n", (celsius*9)/52+32);
}
float farenheitToCelsius (float farenheit) {
  printf("Grados Celsius = %f\n", (farenheit-32)*0.556);
}

float celsiusToKelvin(float celsius) {
  printf("Grados Kelvin = %f\n", celsius+273.15);
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
  break;

  case 2:
    printf("Ingrese los grados Fahrenheit \n");
  scanf("%f",&input);
  resultado = farenheitToCelsius(input);
  break;

  case 3:
    printf("Ingrese los grados Celsius \n");
  scanf("%f",&input);
  resultado = celsiusToKelvin(input);
  break;
}
  return 0;
  }