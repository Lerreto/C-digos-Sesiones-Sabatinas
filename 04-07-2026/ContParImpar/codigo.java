import java.util.Scanner;

public class codigo {

  public static void main(String[] args){

    int n = 1;
    int i = 0;
    int p = 0;
    int d = 0;
    int r = 0;

    Scanner scan = new Scanner(System.in);

    while (n != 0){
      
      System.out.print("Porfavor ingrese un numero: ");
      n = scan.nextInt();
      d = n / 2;
      r = n - (d*2);

        if(r == 0){
        p++;
      } else {
        i++;
      }

    }

    System.out.println("Pares = " + (p - 1) + " // impares = " + i);

  }

}

