#include <stdio.h>


/* C program to print all the composite numbers from 2 to a certain number
entered by user. Yusuf Arslan 200104004112 */

int main() {
	
	int i,n,j,comp;
	
    printf("Enter the upper limit:");
    scanf("%d", &j);
    printf ("\n");
    
    for(n = 2; n <= j; n++)
    {
         for(i = 1; i < n; i++)
         {
              if(n % i == 0) 
              {
                   comp = i;
              }
         }
         //buradaki ko�ul sayesinde, yukar�da mod olarak birden fazla b�leni oldu�unu saptad���m�z say�lar�n kompozit say� oldu�unu yazd�r�yoruz.
         if(comp > 1) 
         {
              printf ("%d is an composite number.\n",n);
         }              
     }
     return 0;
}
