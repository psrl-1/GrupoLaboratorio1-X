#include <iostream>
#include <windows.h>

void ConsultarCalorias(float calorias);
void AgregarCalorias(float &calorias, int calorias_nuevas);
void QuemarCalorias(float *calorias, int calorias_quemadas);

float calorias = 2000;

int main()
{

  SetConsoleOutputCP(CP_UTF8);

  int calorias_quemadas;
  ConsultarCalorias(calorias);

  // Agregar 100 calorias
  AgregarCalorias(calorias, 100);
  ConsultarCalorias(calorias);

  return 0;
}

void QuemarCalorias(float *calorias, int calorias_quemadas)
{
  *calorias -= calorias_quemadas;
}
void ConsultarCalorias(float calorias)
{
  std::cout << "Tus calorias son: " << calorias << "cal" << std::endl;
}
void AgregarCalorias(float &calorias, int calorias_nuevas)
{
  calorias += calorias_nuevas;
}