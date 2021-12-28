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
	struct Ogrenci *prev;
}*head, *tail;

//Ogrenci ekleme fonksiyonumuz
void Ekle(unsigned long long ogrenciNo, char* ad, char* soyad, char* bolum, int sinif)
{
    struct Ogrenci * ogrenci = (struct Ogrenci *) malloc(sizeof(struct Ogrenci));
	// listede dolasirken kullanilacak gecici degisken
	struct Ogrenci * tmp;

    ogrenci -> ogrenciNo = ogrenciNo;
    strcpy(ogrenci ->ad , ad);
    strcpy(ogrenci -> soyad, soyad);
    strcpy(ogrenci -> bolum, bolum);
    ogrenci -> sinif = sinif;
    ogrenci -> next = NULL;
    ogrenci -> prev = NULL;

    //eger head NULL ise ogrenciyi yeni head yap
    //head null ise liste bostur, tail de ilk elemani gostermelidir
    if(head == NULL)
    {
        head = ogrenci;
        tail = ogrenci;
    }
    //eger liste bos degilse ogrenciyi headin basina ekle
    else
    {
    	// listede her zaman basa ekleme yapiliyor; yani
    	// head -> 1. eleman -> 2. eleman durumunda yeni eleman eklenirse;
    	// head -> yeni eleman -> 1. eleman -> 2. eleman olacaktir.
    	// bu durumda her yeni elemanin/node'un previous'u null degeri gostermelidir
    	// bu atama if'den once zaten yapilmistir
    	// ayni zamanda bir sira kaydirilan 1. elemanan prev'u yeni elemani gostermeli
    	// hali hazirda 1. elemani head gosteriyor, head'i 1. eleman yerine kullanabiliriz
    	// asagidaki atamada ogrenci yeni elemandir, head degismeden once prev atamasi yapilmalidir
    	head -> prev = ogrenci;
        ogrenci -> next = head;
        head = ogrenci;
        // liste bos degilse tail sondaki elemani gostermelidir
        // sondaki elemana ulasilmali; bunun icin gecici degisken
        // head'e esitlenir ve next ile sonraki elemana gecilir
        // son elemana geldigimizde tmp->next == null olacaktir
        // bu durumda tmp = son eleman olur
        tmp = head;
        while(tmp->next != NULL){
        	tmp = tmp->next;
		}
		// tail tmp ile ayni elemani/son elemani gosterir
		tail = tmp;
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
            // ilk eleman silinecekse ( if(temp1 == head) yazilabilir ) ikinci eleman (head->next)'i
	    // bir onceki eleman olarak null deger gostermelidir; cunku kendisi ilk eleman olacak
	    if(temp1 == temp2)
            {
            	head->next->prev = NULL;
                head = head -> next;
                free(temp1);
            }
            // diger elemanlar silinecekse kendisinden bir onceki elemani tutmaliyiz;
            // head -> node1 -> node2 -> node3 durumunda node2 silinmek istenirse su yol izlenir
            // temp1 = node2'ye esit olacaktir, node1 -> node3 baglantisi; node2->prev->next = node3 (node2->next)
            // tersten bakinca node1 <- node3 baglantisi; node2->next->prev = node1 seklinde saglanir
            // temp2 = temp1'in prev'unu gosterecek o halde node2->prev->next = node3 yerine temp2 -> next = node3 (temp1->next) yazilabilir
            // node3->prev = node1->next ---> temp1->next->prev = temp2
            else
            {
            	temp1 -> next -> prev = temp2;
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
    struct Ogrenci * temp = tail;
    while(temp != NULL)
    {
        printf("Ogrenci No: %llu\n", temp -> ogrenciNo);
        printf("Ad: %s\n", temp -> ad);
        printf("Soyad: %s\n", temp -> soyad);
        printf("Bolum: %s\n", temp -> bolum);
        printf("Sinif: %d\n\n", temp -> sinif);
        temp = temp -> prev;
    }

}

//Tersten liste
void sonListele()
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

    printf("1 - Sisteme ogrenci ekleme\n2 - Sistemden ogrenci silme\n3 - Sistemde ogrenci arama\n4 - Kayitli ogrencileri listele\n5 - Ters Liste\n6 - Programi bitir\n");

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
                printf("Kayittan silmek istediginiz Ogrenci No: ");
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
            case 5:
		sonListele();
		break;
        }
    } while (a != 6);
    printf("\nProgram sonlanmistir!\n");
}
