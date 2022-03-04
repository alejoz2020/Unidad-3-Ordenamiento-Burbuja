/*@DESKTOP-ALEJOZ*/
#include<iostream>
/*metodo pricipal*/
using namespace std;
void ordenar(int vect[], int aux) 
	{
    for (int i=0;i<aux-1;i++) 
		{
        	for (int j=0;j<aux-i-1;j++) 
			{
            	if (vect[j]>vect[j+1]) 
					{
                	swap(vect[j], vect[j+1]);
                	cout<<vect[0]<<" ";
                	cout<<vect[1]<<" ";
                	cout<<vect[2]<<" ";
                	cout<<vect[3]<<" ";
                	cout<<vect[4]<<" ";
                	cout<<vect[5]<<" ";
					cin.get();
					}
        	}	
    	}	
	}

int main() 
		{
		    int k = 6;
		    int vect[6]={21, 40, 4, 9, 10, 35};
		    cout<<"Unidad 3: Tarea (12%) - Algoritmos de ordenamiento y busqueda"<<"\n\n";
		    cout<<"Presentado por: "<<"\n";
		    cout<<"Monica Andrea Lopez Zapata"<<"\n";
		    cout<<"Cesar Augusto Ospina Montoya"<<"\n";
		    cout<<"Jeimy Andrea Gonzalez Casas"<<"\n";
		    cout<<"Alejandro Zapata Calle"<<"\n\n\n";
		    cout<<"Arreglo a ordenar: ";
		    for (int i=0;i<k;i++) 
			{
		        cout<<vect[i]<<" ";
    		}
		    cout<<"\n\n";
		    ordenar(vect, k); /*ordena los valores en orden ascendente*/
		    cout<<"Ordenado ascendente: ";
		    for (int i=0;i<k;i++) 
			{
		        cout<<vect[i]<<" ";
		    }
		}