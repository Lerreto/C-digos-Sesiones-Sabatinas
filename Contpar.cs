using System;

class Contparcs{
	static void Main(){
		int i=0, p=0, n=1, d=0, r=0;
		while(n!=0){
			Console.WriteLine("Ingrese un numero: ");
			n = Convert.ToInt32(Console.ReadLine());
			d = n / 2;
			r = n - (d * 2);
			if (r==0){
				p++;
			}else{
				i++;
			}
		}
		p = p-1;
		Console.WriteLine("Los numeros pares son: " + p);
		Console.WriteLine("Los numeros impares son: " + i);
	}
}
