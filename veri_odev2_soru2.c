/*
    Doğukan YILDIZ - 20360859095
    Veri Yapıları Ödev 2 Soru 2
*/
#include <stdio.h>
#include <stdlib.h>

void Palindrome(char word[], int i);

int main()
{
    //Dünya geneli anlamlı kelime uzunluğu ort max 12
    char words[15];

    printf("Palindrom icin kelime giriniz: ");
    scanf("%s", words);

    Palindrome(words,0);

    return 0;
}

void Palindrome(char word[], int i)
{
    /*
    eldeki kelimenin uzunluğunden i+1
    çıkararak son elemanla kıyaslamak
    için gerekli n değerini elde ediyoruz
    */
    int n = strlen(word) - (i + 1);
    /*
    Elde kalan stringin son elemanı ile
    ilk elemanı kıyaslanır
    */
    if (word[i] == word[n])
    {
    //Kelimenin ortasına gelip gelinmediği kontrol ediliyor
        if (i + 1 == n || i == n)
        {
            printf("Girilen kelime palindromdur!\n");
            return;
        }
        /*
        i parametresine i+1 göndererek kelimenin başını
        bir sağ karaktere kaydırıyoruz
        */
        Palindrome(word, i + 1);
    }
    else
    {
        printf("Girilen kelime palindrom degildir!\n");
    }
}
