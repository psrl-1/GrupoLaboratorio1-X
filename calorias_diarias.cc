#include <iostream>
#include <windows.h>


int calorias = 2000;

int main ()
{
  SetConsoleOutputCP(CP_UTF8);
    
  return 0;
}

void QuemarCalorias(int *calorias, int calorias_quemadas)
{
    *calorias -= calorias_quemadas;
}