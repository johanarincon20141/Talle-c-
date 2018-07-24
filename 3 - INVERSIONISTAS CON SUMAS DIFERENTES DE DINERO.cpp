# include <iostream>
#include <stdlib.h>

using namespace std;
int main ()
{
	float inve1, inve2, inve3, suma;
	cout <<"ingrese la cantida de dinero del inversionista 1"<<endl;
	cin>> inve1;
	cout <<"ingrese la cantiddad de dinero de inversionista 2";
	cin >> inve2;
	cout <<" ingrese la cantidad de dinero del inversionista 3 ";
	cin >> inve3;
	

cout << " El promedio del   inversionista  uno es  " <<	((inve1*100)/(inve1+inve2+inve3)) <<endl;
cout << " El promedio del   inversionista  dos es  " <<	((inve2*100)/(inve1+inve2+inve3)) <<endl;
cout << " El promedio del   inversionista  tres es  " <<((inve3*100)/(inve1+inve2+inve3)) <<endl;
	
	
	system ("PAUSE");
	return 0;
}
