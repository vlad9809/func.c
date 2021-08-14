#include <string.h>
#include <memory.h>
#include <stdio.h>

char str1[7] = "aabbcc";
int main (void)
{
  char nig [] = "bullet to back" ;
  printf ("first %s\n", nig);
  memset (nig, '*', 6);
  printf ("second %s\n", nig);  

  unsigned char src[7]= "123456";
   unsigned char dst[10]= "";
   memcpy (dst, src, 6);
   printf ("dst: %s\n",dst);

   const char src2[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src2, strlen(src2)+1);
   printf("After memcpy dest = %s\n", dest);


/*
  printf( "The string: %s\n", str1 );
  memcpy( str1 + 2, str1, 2 );
  printf( "New string: %s\n", str1 );
  strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string
  printf( "The string: %s\n", str1 );
  memmove( str1 + 2, str1, 4 );
  printf( "New string: %s\n", str1 );*/


char * src1 = "This is the source string";
char dest1[70];
char *ptr;
ptr = memccpy(dest1,src1,'g',strlen(src1));
if(ptr)//?
{
*ptr = '\0';
printf("Был найден символ %s\n",dest1);
}
else
printf("Символ не найден\n");

// Исходный массив
   unsigned char src3[15] = "1234567890" ;
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = memchr (src, '4', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
      sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

}
