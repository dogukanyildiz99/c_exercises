/*
    Dogukan YILDIZ - 20360859095
    Veri Yapilari Odev 3
*/

#include <stdio.h>
#include <stdlib.h>

//Ogrenci verisini tutacak olan struck yapimiz
struct Ogrenci
{
	unsigned long long ogrenciNo;
	char ad[100];
	char soyad[100];
	char bolum[100];
	int sinif;
	struct Ogrenci *next;
}*head;

//Ogrenci ekleme fonksiyonumuz
void Ekle(unsigned long long ogrenciNo, char* ad, char* soyad, char* bolum, int sinif)
{
    struct Ogrenci * ogrenci = (struct Ogrenci *) malloc(sizeof(struct Ogrenci));

    ogrenci -> ogrenciNo = ogrenciNo;
    strcpy(ogrenci -> ad, ad);
    strcpy(ogrenci -> soyad, soyad);
    strcpy(ogrenci -> bolum, bolum);
    ogrenci -> sinif = sinif;
    ogrenci -> next = NULL;

    //eger head NULL ise ogrenciyi yeni head yap
    if(head == NULL)
    {
        head = ogrenci;
    }
    //eger liste bos degilse ogrenciyi headin basina ekle
    else
    {
        ogrenci -> next = head;
        head = ogrenci;
    }
}

//Ogrenci silme fonksiyonumuz
void Sil(unsigned long long ogrenciNo)
{
    struct Ogrenci * temp1 = head;
    struct Ogrenci * temp2 = head;
    while(temp1 != NULL)
    {
        if(temp1 -> ogrenciNo == ogrenciNo)
        {
            printf("%llu numarali kayit bulunmustur!\n", ogrenciNo);
            if(temp1 == temp2)
            {
                head = head -> next;
                free(temp1);
            }
            else
            {
                temp2 -> next = temp1 -> next;
                free(temp1);
            }
            printf("Kayit Silinmistir!\n");
            return;
        }
        temp2 = temp1;
        temp1 = temp1->next;
    }
    printf("%d numarali ogrenci bulunamamistir. \n", ogrenciNo);
}

//Ogrenci arama fonksiyonumuz
void Arama(unsigned long long ogrenciNo)
{
    struct Ogrenci * temp = head;
    while(temp != NULL)
    {
        if(temp -> ogrenciNo == ogrenciNo)
        {
            printf("Ogrenci No: %llu\n", temp -> ogrenciNo);
            printf("Ad: %s\n", temp -> ad);
            printf("Soyad: %s\n", temp -> soyad);
            printf("Bolum: %s\n", temp -> bolum);
            printf("Sinif: %d\n", temp -> sinif);
            return;
        }
        temp = temp -> next;
    }
    printf("%llu numarali ogrenci bulunamamistir. \n", ogrenciNo);
}

//Ogrenci bilgilerini listeleyecek fonksiyonumuz
void Listele()
{
    struct Ogrenci * temp = head;
    while(temp != NULL)
    {
        printf("Ogrenci No: %llu\n", temp -> ogrenciNo);
        printf("Ad: %s\n", temp -> ad);
        printf("Soyad: %s\n", temp -> soyad);
        printf("Bolum: %s\n", temp -> bolum);
        printf("Sinif: %d\n\n", temp -> sinif);
        temp = temp -> next;
    }
}

int main()
{
    head = NULL;
    int a;
    unsigned long long ogrenciNo;
    char ad[100];
    char soyad[100];
    char bolum[100];
    int sinif;

    printf("1 - Sisteme ogrenci ekleme\n2 - Sistemden ogrenci silme\n3 - Sistemde ogrenci arama\n4 - Kayitli ogrencileri listele\n5 - Programı bitir\n");

    do
    {
        printf("\nYapmak istediginiz islem: ");
        scanf("%d", &a);
        switch (a)
        {
            case 1:
                printf("Ogrenci No giriniz: ");
                scanf("%llu", &ogrenciNo);
                printf("Ad giriniz: ");
                scanf("%s", ad);
                printf("Soyad giriniz: ");
                scanf("%s", soyad);
                printf("Bolum giriniz: ");
                scanf("%s", bolum);
                printf("Sinif giriniz: ");
                scanf("%d", &sinif);
                Ekle(ogrenciNo, ad, soyad, bolum, sinif);
                break;
            case 2:
                printf("Kayittam silmek istediginiz Ogrenci No: ");
                scanf("%llu", &ogrenciNo);
                Sil(ogrenciNo);
                break;
            case 3:
                printf("Arama yapmak istediginiz Ogrenci No: ");
                scanf("%llu", &ogrenciNo);
                Arama(ogrenciNo);
                break;
            case 4:
                Listele();
                break;
        }
    } while (a != 5);
}
