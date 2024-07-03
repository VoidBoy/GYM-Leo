#include <iostream>

using namespace std;

int opc=0;
float inmc=0;

void imc_salud(){

    if(inmc<=18.5&&inmc>0){
        cout<<"Bajo Indice de Masa Corporal \n";
    }
    if(inmc>18.5&&inmc<=24.9){
        cout<<"Indice de Masa Corporal Saludable \n";
    }
    if(inmc>24.9&&inmc<=29.9){
        cout<<"Indice de Masa Corporal Alto \n";
    }
    if(inmc>29.9){
        cout<<"Indice de Masa Corporal Obeso \n";
    }
}

//esta funcion calcula el indice de masa corproal
void imc(){
    float altura=0;
    float peso=0;

    cout<<"Digite su altura en metros: \n"; cin>>altura;
    cout<<"Digite su peso en kilogramos: \n"; cin>>peso;

    inmc = peso / ( altura * altura);

    cout<<"Su indice de masa corporal es de :"<<inmc<<endl<<endl;
    imc_salud();
}
//es el menu principal
void menu_principal(){

      if(opc<3&&opc>0){
        switch (opc) {
        case 1:

            break;
        case 2:
               imc();
            break;
        }
          }
      else{
          cout<<"A digitado una opcion incorrecta intente de nuevo";
      }
}

int main(){

  cout<<"\t\tBienvenido a GYM-Leo:\n\t     Seleccione la opcion deseada\n\n";

  cout<<"1-Seleccionar un plan de entrenamiento.\n";
  cout<<"2-Calcular el Indice de Masa Corporal.\n";
  cout<<"3-Salir.\n\n";

  cout<<"Digite la opcion desada:\n "; cin>>opc;

  menu_principal();

  return 0;
}
