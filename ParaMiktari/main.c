#include <stdio.h>

int main(int argc, const char * argv[]) {
     
     int paramiktari=0;
     printf("Lutfen para miktari giriniz ");
     scanf("%d", &paramiktari); // degiakenin adresine yaz
     printf("%d adet 200 TL bulunmaktadir\n", paramiktari/200);
     paramiktari%=200;
     printf("%d adet 100 TL bulunmaktadir\n" , paramiktari/100);
     paramiktari%=100;
     printf("%d adet 50 TL bulunmaktadir\n" , paramiktari/50);
     paramiktari%=50;
     printf("%d adet 20 TL bulunmaktadir\n", paramiktari/20);
     paramiktari%=20;
     printf("%d adet 10 TL bulunmaktadir\n" , paramiktari /10);
     paramiktari%=10;
     printf("%d adet 5 TL bulunmaktadir\n" , paramiktari / 5);
     paramiktari%=5;
     printf("%d adet 1 TL bulunmaktadir\n" , paramiktari / 1);
     paramiktari%=1;
     
     return 0;
}
