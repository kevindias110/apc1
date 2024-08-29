#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

//char 'a', 'w', 'c' 
//int 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//float 5.5f, 2.0, 3.0, 4.0, 5.0, 6.0, 
//double 5.5, 2.0, 3.0, 4.0, 5.0, 6.  
//void  sem valor

printf("o tamanho do char na memoria eh %lu bytes\n", sizeof(char));
printf("o tamanho do int na memoria eh %lu bytes\n", sizeof(int));  
printf("o tamanho do float na memoria eh %lu bytes\n", sizeof(float));  
printf("o tamanho do double na memoria eh %lu bytes\n", sizeof(double));
printf("o tamanho do void na memoria eh %lu bytes\n", sizeof(void));  
  
printf("\n");  

printf("a faixa de valores do char eh de %i ate %i\n", CHAR_MIN, CHAR_MAX);
printf("a faixa de valores do int eh de %i ate %i\n", INT_MIN, INT_MAX);
printf("a faixa de valores do float eh de %E ate %E\n", FLT_MIN, FLT_MAX);
printf("a faixa de valores do double eh de %E ate %E\n", DBL_MIN, DBL_MAX);
 
printf("\n");  

printf("o tamanho do char na memoria eh %lu bytes\n", sizeof(short int));
printf("o tamanho do int na memoria eh %lu bytes\n", sizeof(long int));
printf("o tamanho do bouble na memoria eh %lu bytes\n", sizeof(long double));

  
printf("\n");

printf("a faixa de valores do short int eh de %i ate %i\n", SHRT_MIN, SHRT_MAX);
printf("a faixa de valores do long int eh de %li ate %li\n", LONG_MIN,  LONG_MAX);
printf("a faixa de valores do long double eh de %LE ate %LE\n", LDBL_MIN, LDBL_MAX);

printf("\n");

printf("a faixa de valores do unsigned char eh de %i ate %i\n", 0, UCHAR_MAX);
printf("a faixa de valores do unsigned short int eh de %i ate %i\n", 0, UINT_MAX);
printf("a faixa de valores do unsigned long int eh de %li ate %li\n", 0, ULONG_MAX);
printf("a faixa de valores do unsigned long double eh de %LE ate %LE\n", 0, LDBL_MAX);
printf("\n");





  
  return 0;
}