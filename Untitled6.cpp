# include <iostream>
# include <stdlib.h>
using namespace std;

int  main () {


int numero=0, resultado=0,  i=0 ;

cout <<"ingrse numeo a multiplicr";
cin >> numero;


for ( int i=0; i <=10; i++){
	
resultado=numero*i;
cout << numero << "*"<<i <<"="<< resultado<< endl;
	
}



system ("pause");


return 0;

}

