#include <stdio.h>

/* C program to draw a triangle with *. Yusuf Arslan_200104004112 */


int main() {
	
	
   int i, spc, rows, k = 0;
   
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   
   spc = rows+5;
   
   for (i = 1; i <= rows; ++i) 
   {
   	
      for (spc = 1; spc <= rows - i+5 ; ++spc) 
	  {
         printf("  ");
      }
      while (k != 2 * i - 1) 
	  {
         printf("* ");
         ++k;
      }
      printf("\n");
      
	  //k'yi for d�ng�s�n�n sonuna yazd�m. her d�ng� ba�lang�c�nda k 0'a e�it olsun diye
	  k=0;
   }
   return 0;
}
