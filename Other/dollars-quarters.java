import java.util.Scanner;
public class myProj{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
   double dollars=in.nextDouble();
   double remainingDollars = (double) (dollars-(int)dollars);
   int quarters=0,dimes=0,nickels=0,pennies=0;
   while(remainingDollars>=0.25) {quarters++; remainingDollars-=0.25;}
   while(remainingDollars>=0.1) {dimes++; remainingDollars-=0.1;}
   while(remainingDollars>=0.05) {nickels++; remainingDollars-=0.05;}
   while(remainingDollars>=0.01) {pennies++; remainingDollars-=0.01;}

   System.out.printf("Dollars = %d%n",(int)dollars);
   System.out.printf("Quarters = %d%n",quarters);
   System.out.printf("Dimes = %d%n",dimes);
   System.out.printf("Nickels = %d%n",nickels);
   System.out.printf("Pennies = %d%n",pennies);
   
  }
}
