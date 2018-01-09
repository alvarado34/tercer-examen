#include <iostream>
#include <string> 
/*Solicitar dos números y mostrar el mensaje: Son iguales , O no son iguales , O en caso contrario mostrar el mensaje:*/
 
using namespace std;
int main(int argc, char** argv)
 {
 	int num1;
 	int num2;
 	
 cout<<"ingrese el primer  numero"<<endl ;
  	cin>>num1 ;
	
 cout<<"ingrese el otro numero"<<endl;
  	cin>>num2 ;	
	
 	if(num1==num2)
 	    {
 	    cout<<"/*********************/"<<endl;	
        cout<<" /**** Son iguales********/"<<endl;
        cout<<"/*********************/"<<endl;
        } 
   else
        {
        cout<<"/*********************/"<<endl;	
       cout<<"/***** No son iguales******/"<<endl; 
	   cout<<"/*********************/"<<endl; 	
        }
  
   
return 0;  
} 
	
	
 
