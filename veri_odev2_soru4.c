/*
    Doğukan YILDIZ - 20360859095
    Veri Yapıları Ödev 2 Soru 4
*/
#include <stdio.h>
#include <stdlib.h>

void CarpanAyir(int sayi, int i);

int main()
{
    int sayi;
    printf("Input: ");
    scanf("%d", &sayi);

    printf("Output: ");
    CarpanAyir(sayi,2);

    return 0;
}

void CarpanAyir(int sayi, int i)
{
    // Sayı i ile eşitlenince işlemi sonlandır.
    if(sayi == i)
    {
        // son çarpanı yazdırmak için
        printf("%d ", i);
    }
    else
    {
        //Sayının i'ye göre modu sıfırdan farklı mı?
        //Hayır
        if (sayi % i == 0)
        {
            printf("%d ", i);
            sayi = sayi/i;
            CarpanAyir(sayi, i);
        }
        //Evet
        else
        {
            // böleni bir artır
            CarpanAyir(sayi, i + 1);
        }
    }
}
