#include <stdio.h>
#include <stdlib.h>
/*
    Elektrik faturasýný hesaplayan program:
    Bir elektrik daðýtým þirketi verdikleri hizmet karþýlýðýnda müþterilerinden
    aylýk olarak harcanan toplam kilowatt saat miktarýný  ve belirli bir abonelik ücreti
    talep etmektedir.Birim kilowatt saat ücreti ve abonelik ücreti her ay enflasyon
    oranýnda artmaktadýr. Buna göre müþterinin bir aya ait ödeyeceði elektrik faturasýnýn
    miktarýný hesaplayan program:
    Fatura miktarý = harcanan elektrik * birim fiyat + abone ücreti
    */
int main()
{
    float odenecekFatura, eskiBfiyat, yeniBfiyat, enflasyon;//Burda ödenecek fatura, elektiriðin eski ve yenibirim kilowatt ücreti ve enflasyon tanýmlanmýþtýr.
    float eskiAucreti, yeniAucreti;//eski abonelik ücreti ve yeni abonelik ücreti tanýmlanmýþtýr.
    int eskiOkuma, yeniOkuma, harcanan;//eski, yeni okunan ve toplam harcanan kilowatt deðeri tanýmlanmýþtýr.

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
