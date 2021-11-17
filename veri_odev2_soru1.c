/*
    Doğukan YILDIZ - 20360859095
    Veri Yapıları Ödev 2 Soru 1
*/
#include <stdio.h>
#include <stdlib.h>

//Bağlı liste yapısı
struct n {
  int x;
  struct n *next;
} *i;

int main() {
    i = NULL;

    veriEkle(42);
    veriEkle(23);
    veriEkle(16);
    veriEkle(15);
    veriEkle(8);
    veriEkle(4);

    printf("Linked List Uzunlugu: %d", Uzunluk(i));

    return 0;
}

void veriEkle(int num)
{
    //Yeni bir düğüm oluşturulur
    struct n* yeniDugum = (struct n*) malloc(sizeof(struct n));
    yeniDugum->x  = num;

    //Yeni oluşturulan düğümün pointerı i değerini gösterecek
    yeniDugum->next = i;

    //Oluşturulan düğüm bağlı listenin başı olur
    i = yeniDugum;
}

//Bağlı listenin uzunluğu
int Uzunluk(struct n * i)
{
    if (i == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + Uzunluk(i->next);
    }
}
