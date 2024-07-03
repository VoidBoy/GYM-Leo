#include <iostream>

using namespace std;

int opc=0;

void menu_principal(){

    while (opc!=3) {

      if(opc<3&&opc>0){
        switch (opc) {
        case 1:

            break;
        case 2:

            break;
        case 3:break;
        }
          }
      else{
          cout<<"A digitado una opcion incorrecta intente de nuevo";
          break;
      }

    }
}

int main()
{

  cout<<"\t\tBienvenido a GYM-Leo:\n\t     Seleccione la opcion deseada\n\n";

  cout<<"1-Seleccionar un plan de entrenamiento.\n";
  cout<<"2-Calcular el Indice de Masa Corporal.\n";
  cout<<"3-Salir.\n\n";

  cout<<"Digite la opcion desada:\n "; cin>>opc;

  menu_principal();

  return 0;
}
