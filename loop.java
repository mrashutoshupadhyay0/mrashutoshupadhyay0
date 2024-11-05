//sum of 10 +ve no. 
import java.util.*;
class ForLoop {
  public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
    int sum = 0;
int a;
    int n = 10;

    for (int i = 1; i <= n; ) {
     a = sc.nextInt();
     if(a>0){
      sum = sum +a;
      i++;
}

     }    
  }
}