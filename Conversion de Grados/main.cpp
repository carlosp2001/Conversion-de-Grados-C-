//
//  main.cpp
//  Conversion de Grados
//
//  Created by Carlos Pineda on 23/6/21.
//

#include<iostream>
#include<cctype>
#include<stdlib.h>


using namespace std;

void calculargradoscaf(){
    cout<<"Ingrese los grados Celsius que desea convertir a Farenheit: \n";
    double c;
    cin>>c;
    double f=((9*c/5)+32);
    cout<<"---------------------------------------------------\n";
    cout<<"La conversion de Celsius a Farenheit es: "<<f<<" F \n";
    
    
}

void calculargradosfac(){
    cout<<"Ingrese los grados Farenheit que desea convertir a Celsius: \n";
    double f;
    cin>>f;
    double c=((f-32)*5)/9;
    cout<<"---------------------------------------------------\n";
    cout<<"La conversion de Celsius a Farenheit es: "<<c<<" C \n";
}

int main() {
    char opc;
    do{
        cout<<"----------------------------------------\n";
        cout<<"Conversor de Grados Celsius a Farenheit \n";
        cout<<"1.Celsius a Farenheit \n";
        cout<<"2.Farenheit a Celsius \n";
        cout<<"----------------------------------------\n";
        int opc1;
        cin>>opc1;
            switch(opc1){
            
                case 1:
                    calculargradoscaf();
                    break;
                case 2:
                    calculargradosfac();
                    break;
            }
        
        cout<<"Desea continuar realizando operacion? S/N \n";
        cin>>opc;
        opc=toupper(opc);
    }
    while(opc=='S');
    
    return 0;
}
