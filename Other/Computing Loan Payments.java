import java.util.Scanner;
public class myProj{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
   double monthlyInterestRate=in.nextDouble(),loanAmount=in.nextDouble();
   double numberOfYears=in.nextDouble(),monthlyPayment;
   monthlyPayment = loanAmount * monthlyInterestRate /
		   1.0 - (1/Math.pow(1+monthlyInterestRate,numberOfYears*12));
		 System.out.println(monthlyPayment);
  }
}
