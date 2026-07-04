#include <iostream>

using namespace std;

int main(){

        int n=1;
        int i=0;
        int p=0;

        while(n !=0){

                cout << "Ingrese un numero: \n" << endl;
                cin >> n;

                int d = n/2;
                int r = n - (d*2);

                if(r == 0){

                        p++;

                }else{

                        i++;

                }

        }

        cout << "La cantidad de pares es: " << p-1 << endl;
        cout << "La cantidad de impares es: " << i << endl;
        
        return 0;

}