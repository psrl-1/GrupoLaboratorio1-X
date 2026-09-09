#include <iostream>
#include <windows.h>

void consultar_calorias (float calorias);
float calorias = 2000;

int main ()
{
  SetConsoleOutputCP(CP_UTF8);
    
  return 0;
}

void consultar_calorias (float calorias)

{
  std:: cout <<"Tus calorias son: " <<calorias << "cal" << std:: endl;

}