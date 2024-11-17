#include <stdio.h>  //kütüphane - standart giriscikis
#include <stdlib.h> //kütüphane - standart kütüphane 
#include <windows.h>// system ile ilgili komutlarý çaðýrmaya yarar.
#include <conio.h>  // grafik küpüthane
#include <locale.h> // türkçe karakterleri yazmak için kullanýlan kütüphanedir.
#define temizlik "TEMÝZLÝK ÝYÝDÝR!"  // deðiþken oluþturur. temizlik adlý deðiþkeni yanýndaki açýklamayla tanýmlar.
#define carp 3*15
#define sabit 2.15
/* run this program using the console pauser or add your own getch(), system("pause") or input loop */

int main(int argc, char *argv[])                     // argv baþýndaki * string olduðunu belirtir
{                                     			     // begin
const double halil=46.56;                            // ondalýk sabit sayý olduðunu belirtir. const -> sabit , double-> ondalýk sayý demektir. (double) yerine (float) da yazýlabilir.
	
//getch();                                           // karakter almaya yarar.
//exit(0);                                           // kodu kesmeye yarar.
	setlocale(LC_ALL,"Turkish");                     // Hangi dili kullanacaðýmýz belirtmek için kullanýlýr. LC_ALL -> büyük harfle yazýlmalý.
/* printf("\n\tSELAM KAÇMAZ\n   MANAVGAT M.Y.O\n");  // printf - write-ln ile ayný komuttur. parantez içerisindeki \n alt satýra gecer \t yatay boþluk oluþturur.
system("cls");                                       // ekran temizleme komutudur.
sleep(2);                                            // delay komutu gibidir. saniye içerisine yazýlýr.
system("color 8f");                                  // Tek yazarsak yazý,iki tane yazarsak birincisi arkaplan, ikincisi yazýdýr. harf a-f aralýðý.
printf("BUGÜN PAZARTESÝ\n"); */
puts(temizlik);                       			     // put -> koy s-> string puts-> yazý koy
printf("Sabit Sayýnýz : %d\n",carp);                 // sayýsal deðiþkenler bu þekilde yazýlýr. Printf hem sayýyý hem yazýyý yazdýrýr.
printf("Sabit Yazýnýz : %s\n",temizlik);             // string biçimdeki deðiþkeni bu tarzda da kullanabiliriz.
printf("Sabit Sayýnýz : %.2f\n",sabit);              // ondalýksal ifadelerde (float) f kullanýlýr. Baþýna yazýlan .2 sayýnýn 0'dan sonra gözükecek basamaklarýný belirler.
printf("Sabit Sayýnýz : %.lf\n",halil);              // .l ifadesi sayýyý yuvarlar.              
system("pause");

}                                    				 // end gibi düþünebiliriz
