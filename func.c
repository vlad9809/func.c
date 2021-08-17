#include <string.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

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

 char str6 [11]="0123456789";

   //Определение длины строки и вывод результата на консоль
   printf ("Длина строки «%s» - %ld символов\n", str6, strlen (str6) );

   
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


   unsigned char src31[15] = "1234567890" ;
   char *sym;
   printf ("src old: %s\n",src31);
   sym = memchr (src31, '4', 10);
   if (sym != NULL)
      sym[0]='!';

   printf ("src new memchr: %s\n",src31);


   // Исходная строка
   char str5 [11]= "0123456789";
   // Переменная, в которую будет помещен указатель на дубликат строки
   char *istr1;

   // Дублирование строки
   istr1 = strdup (str5);

   // Вывод дубликата на консоль
   printf ("Дубликат: %s\n", istr1);

   // Очищаем память, выделенную под дубликат
     free (istr1);



 // Массив источник данных
   char src32[1024]="первая строка\0вторая строка";
 
   // Массив приемник данных
   char dst32[1024]="";

   // Копируем строку из массива src в массив dst. Обратите внимание, 
   //что скопируется только строка «первая строка\0». 
   strcpy (dst32, src32);

   // Вывод массива src на консоль
   printf ("src: %s %s\n",src32, &src32[14]);

   // Вывод массива dst на консоль
   printf ("dst: %s %s\n",dst32, &dst32[14]);



   char str11[15];
   char str21[15];
   int ret;

   memcpy(str11, "abcdef", 6);
   memcpy(str21, "ABCDEF", 6);

   ret = memcmp(str11, str21, 5);

   if(ret > 0) {
      printf("str2 is less than str1\n");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }



   char strn [11]= "0123456789";
   char *istrn;
   istrn = strdup (strn);
   printf ("Дубликат: %s\n", istrn);
   free (istrn);

   char app[1024]="вторая строка";
   char bst[1024]="первая строка";
   strcat (bst, app);
   printf ("bst: %s\n",bst);


char strq [11]="0123456789";
   // Код искомого символа
   int ch = '6';
   // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
   char *ach;
  
   // Ищем символ ‘6’
   ach=strchr (strq,ch);

  
   if (ach==NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %ld\n",ach-strq+1);


      // Массив со строкой для поиска
   char str111 [11]="0123456789";
   // Набор символов, которые должны входить в искомый сегмент
   char str222 [10]="345";
   // Переменная, в которую будет занесен адрес первой найденной строки
   char *istr111;

   //Поиск строки
   istr1 = strstr (str111,str222);

   //Вывод результата поиска на консоль
   if ( istr1 == NULL)
      printf ("Строка не найдена\n");
   else
      printf ("Искомая строка начинается с символа %ld\n",istr1-str111+1);


   char strw1[1024]="12345";
   char strw2[1024]="12305";
  
   // Сравниваем две строки
   if (strcmp (strw1, strw2)==0)
      puts ("Строки идентичны");
   else
      puts ("Строки отличаются");


   char *Stre = "652.23brrt"; //Строка для преобразования
   int Num=0;                //Переменная для записи результата
   
   //Преобразование строки в число типа int
   Num = atoi (Stre);
   
   //Вывод результата преобразования
   printf ("%d\n",Num);   


   char str211 [11]="0123456789";

   //Определение длины строки и вывод результата на консоль
   printf ("Длина строки «%s» - %ld символов\n", str211, strlen (str211) );



    char a;
    a = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(a));

    a = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(a));

    a='+';
    printf("\nResult when non-alphabetic character is passed: %d\n", isalpha(a));


  char v = 'C';
   if(isascii(v))
      printf("%c - is ascii\n",v);
   else
      printf("%c - isn't ascii\n",v);


   return 0;
}
