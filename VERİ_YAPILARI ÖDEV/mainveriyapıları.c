#include <stdio.h>

struct Ogrenci {
    char isim[20];
    char soyisim[20];
    int numara;
    char adres[50];
};

int main() {
    struct Ogrenci ogrenciler[5];
    int i;
   

    for (i = 0; i < 5; i++) {
        printf("Ogrenci %d;\n", i+1);
        printf("isim: ");
        scanf("%s", ogrenciler[i].isim);
        printf("Soyisim: ");
        scanf("%s", ogrenciler[i].soyisim);
        printf("Numara: ");
        scanf("%d", &ogrenciler[i].numara);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
    }
    
    for (i = 0; i < 5; i++) {
        printf("Ogrenci %d;", i+1);
        printf(" isim:%s", ogrenciler[i].isim);
        printf(" Soyisim:%s", ogrenciler[i].soyisim);
        printf(" Numara:%d", ogrenciler[i].numara);
        printf(" Adres:%s\n", ogrenciler[i].adres);
    }

    return 0;
}
