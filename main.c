#include <stdio.h>
#include <stdlib.h>
/*
    Elektrik faturas�n� hesaplayan program:
    Bir elektrik da��t�m �irketi verdikleri hizmet kar��l���nda m��terilerinden
    ayl�k olarak harcanan toplam kilowatt saat miktar�n�  ve belirli bir abonelik �creti
    talep etmektedir.Birim kilowatt saat �creti ve abonelik �creti her ay enflasyon
    oran�nda artmaktad�r. Buna g�re m��terinin bir aya ait �deyece�i elektrik faturas�n�n
    miktar�n� hesaplayan program:
    Fatura miktar� = harcanan elektrik * birim fiyat + abone �creti
    */
int main()
{
    float odenecekFatura, eskiBfiyat, yeniBfiyat, enflasyon;//Burda �denecek fatura, elektiri�in eski ve yenibirim kilowatt �creti ve enflasyon tan�mlanm��t�r.
    float eskiAucreti, yeniAucreti;//eski abonelik �creti ve yeni abonelik �creti tan�mlanm��t�r.
    int eskiOkuma, yeniOkuma, harcanan;//eski, yeni okunan ve toplam harcanan kilowatt de�eri tan�mlanm��t�r.

    printf("Enflasyon oranini giriniz: ");
    scanf("%f",&enflasyon);
    printf("Onceki aya ait birim kilowatt ucretini giriniz: ");
    scanf("%f", &eskiBfiyat);
    printf("Onceki aya ait abonelik ucretini giriniz: ");
    scanf("%f",&eskiAucreti);
    printf("Bir onceki aya ait sayactaki degeri giriniz: ");
    scanf("%d",&eskiOkuma);
    printf("Bu aya ait sayactaki degeri giriniz: ");
    scanf("%d", &yeniOkuma);
    yeniAucreti = (eskiAucreti * enflasyon / 100) + eskiAucreti;
    yeniBfiyat = (eskiBfiyat * enflasyon / 100) + eskiBfiyat;
    harcanan = yeniOkuma - eskiOkuma;
    odenecekFatura = harcanan * yeniBfiyat + yeniAucreti;
    printf("Bu ay harcadiginiz elektrik miktari: %dkW\n", harcanan);
    printf("Bu ayki fatura bedeliniz: %f\n\n", odenecekFatura);
    return 0;
}
