#include <iostream>
#include <windows.h>

void ConsultarCalorias (float calorias);
float calorias = 2000;

int main ()
{
  SetConsoleOutputCP(CP_UTF8);
    
  return 0;
}

void ConsultarCalorias (float calorias)

{
  std:: cout <<"Tus calorias son: " <<calorias << "cal" << std:: endl;

}