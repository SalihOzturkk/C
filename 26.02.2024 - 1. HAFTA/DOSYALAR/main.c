#include <stdio.h>  //k�t�phane - standart giriscikis
#include <stdlib.h> //k�t�phane - standart k�t�phane 
#include <windows.h>// system ile ilgili komutlar� �a��rmaya yarar.
#include <conio.h>  // grafik k�p�thane
#include <locale.h> // t�rk�e karakterleri yazmak i�in kullan�lan k�t�phanedir.
#define temizlik "TEM�ZL�K �Y�D�R!"  // de�i�ken olu�turur. temizlik adl� de�i�keni yan�ndaki a��klamayla tan�mlar.
#define carp 3*15
#define sabit 2.15
/* run this program using the console pauser or add your own getch(), system("pause") or input loop */

int main(int argc, char *argv[])                     // argv ba��ndaki * string oldu�unu belirtir
{                                     			     // begin
const double halil=46.56;                            // ondal�k sabit say� oldu�unu belirtir. const -> sabit , double-> ondal�k say� demektir. (double) yerine (float) da yaz�labilir.
	
//getch();                                           // karakter almaya yarar.
//exit(0);                                           // kodu kesmeye yarar.
	setlocale(LC_ALL,"Turkish");                     // Hangi dili kullanaca��m�z belirtmek i�in kullan�l�r. LC_ALL -> b�y�k harfle yaz�lmal�.
/* printf("\n\tSELAM KA�MAZ\n   MANAVGAT M.Y.O\n");  // printf - write-ln ile ayn� komuttur. parantez i�erisindeki \n alt sat�ra gecer \t yatay bo�luk olu�turur.
system("cls");                                       // ekran temizleme komutudur.
sleep(2);                                            // delay komutu gibidir. saniye i�erisine yaz�l�r.
system("color 8f");                                  // Tek yazarsak yaz�,iki tane yazarsak birincisi arkaplan, ikincisi yaz�d�r. harf a-f aral���.
printf("BUG�N PAZARTES�\n"); */
puts(temizlik);                       			     // put -> koy s-> string puts-> yaz� koy
printf("Sabit Say�n�z : %d\n",carp);                 // say�sal de�i�kenler bu �ekilde yaz�l�r. Printf hem say�y� hem yaz�y� yazd�r�r.
printf("Sabit Yaz�n�z : %s\n",temizlik);             // string bi�imdeki de�i�keni bu tarzda da kullanabiliriz.
printf("Sabit Say�n�z : %.2f\n",sabit);              // ondal�ksal ifadelerde (float) f kullan�l�r. Ba��na yaz�lan .2 say�n�n 0'dan sonra g�z�kecek basamaklar�n� belirler.
printf("Sabit Say�n�z : %.lf\n",halil);              // .l ifadesi say�y� yuvarlar.              
system("pause");

}                                    				 // end gibi d���nebiliriz
