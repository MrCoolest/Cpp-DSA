// class dec{
//     public static void main(String[] args) {
//         int[] sum = new  int[32];
//         int i=0;
//         int n =42;

//         while(n>0){
//             sum[i++] = n%2;
//             n=n/2;
//         }

//         for(int j = i-1; j>=0 ;j--){
//             System.out.print(sum[j]);
//         }


//     }
// }

// import java.lang.invoke.StringConcatFactory;
// import java.util.Scanner;

// class rev{
//     public static void main(String[] args) {
//         Scanner input = new Scanner(System.in);
//         System.out.print("Enter a String :");
//         String user = input.nextLine();
//         int len = user.length();

//         String rev = "";

//         for(int i= len-1; i>=0;i--){
//             rev =rev+user.charAt(i);
//         }
//         System.out.print(rev);
//     }
// }

// import java.util.*;
// class Sort{
//     void asce(int arr[]){
//         System.out.println("Asending of Array : ");
//         for(int j=0; j<8;j++){
//             for(int k=j+1; k<8; k++){
//                 if(arr[j]>arr[k]){
//                     int temp = arr[j];
//                     arr[j] = arr[k];
//                     arr[k] = temp;
//                 }
//             }
//             System.out.print(arr[j]+" ");
//         }
//     }

//     void dec(int arr[]){
//         System.out.println("\nDes of Array : ");
//         for(int j=0; j<8;j++){
//             for(int k=j+1; k<8; k++){
//                 if(arr[j]<arr[k]){
//                     int temp = arr[j];
//                     arr[j] = arr[k];
//                     arr[k] = temp;
//                 }
//             }
//             System.out.print(arr[j]+" ");
//         }
//     }
// }

// class Exam{
//     public static void main(String[] args) {
//         Scanner input = new Scanner(System.in);
//         int[] arr = new int[8];
//         for(int i  =0; i<arr.length;i++){
//             arr[i] = input.nextInt();
//         }
//         Sort obj = new Sort();       
//         obj.asce(arr);
//         obj.dec(arr);
//     }
// }


import java.util.*;

class ConDemo
{
int n,sum,r;
ConDemo(int num)
{
n=num;
}
void cal()
{
for(int i=n;i>0;i=i/10)
{
r=i%10;
sum=sum+r;
}
System.out.print("Sum of Digit : "+sum);
}
public void finalize()
{
System.out.println("\nObject Destroyed.");
}
}
class Prac10
{
public static void main(String[] x)
{
int num;
Scanner s = new Scanner(System.in);
System.out.print("\nEnter Number : ");
num=s.nextInt();
ConDemo ob=new ConDemo(num);
ob.cal();
ob.finalize();
}
}