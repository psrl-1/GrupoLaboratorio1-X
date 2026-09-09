#include <iostream>
#include <windows.h>

void AgregarCalorias(float &calorias, int calorias_nuevas);

float calorias = 2000;

int main ()
{
  SetConsoleOutputCP(CP_UTF8);
    
  return 0;
}

void QuemarCalorias(int *calorias, int calorias_quemadas)
{
    *calorias -= calorias_quemadas;
void AgregarCalorias(float &calorias, int calorias_nuevas)
{
  calorias += calorias_nuevas;
}