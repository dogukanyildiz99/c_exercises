/*
    Doğukan YILDIZ - 20360859095
    Veri Yapıları Ödev 2 Soru 3
*/
#include <stdio.h>
#include <stdlib.h>

_Bool AsalKontrol(int sayi, int i);

int main()
{
    int sayi;
    printf("Asal olup olmadigini kontrol etmek istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    int asal = AsalKontrol(sayi,2);

    if(asal == 1)
    {
        printf("Girilen sayi asaldir!");
    }
    else
    {
        printf("Girilen sayi asal degildir!");
    }

    return 0;
}

// 2 den sayının kendisine kadar mod işlemi yaparız
_Bool AsalKontrol(int sayi, int i)
{
    // Sayı i ile eşitlenince 1 döndür
    if(sayi == i)
    {
        return 1;
    }
    else
    {
        //Sayının i'ye göre modu sıfırdan farklı mı?
        //Hayır
        if (sayi % i == 0)
        {
            return 0;
        }
        //Evet
        else
        {
            AsalKontrol(sayi, i + 1);
        }
    }
}
