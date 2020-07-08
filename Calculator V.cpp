#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>
using namespace std;
int main(int argc, char *argv[]){

cout << "GELISMIS HESAP MAKINESI PROJESINE(CALCULATOR V) HOSGELDINIZ.SURUM:1.2 **TEKNIK HATALAR YUZUNDEN BIR SURELIGINE GELISTIRILMESI DURDURULMUSTUR.**\nKODLAR VEHBI DENIZ KILINC TARAFINDAN YAZILMISTIR.DORT ISLEM BOLUMUNE GECMEK ICIN HERHANGI BIR TUSA BASIN.\n\n";
getch();

setlocale(LC_ALL,"Turkish");
int s1,s2,secim,sonuc;
cout<<"1. sayıyı gir: ";
cin>>s1;
cout<<"2. sayıyı gir: ";
cin>>s2;
cout<<"Seçimini gir : 1- TOPLA 2-ÇIKAR 3-ÇARP 4-BÖL: ";
cin>>secim;
if(secim==1)
sonuc=s1+s2;
else if(secim==2)
sonuc=s1-s2;
else if(secim==3)
sonuc=s1*s2;
else if(secim==4)
sonuc=s1/s2;
else 
cout<<"yanlış seçim";
cout<<"Sonuç : "<<sonuc;


cout << "\nÜS ALMA BÖLÜMÜNE DEVAM ETMEK İÇİN HERHANGİ BİR TUŞA BASIN";
getch();


double us, taban; 
    

    cout << "\nSayinin ussunu girin: "; 
    cin >> us; 
    cout << "Tabani girin: "; 
    cin >> taban; 

    int b = taban;

    for (int a = 1; a < us; a++)

 

        b = taban * b;

    cout << "Sonuc: " << b << ""; 


  cout << "\nKAREKÖK ALMA BÖLÜMÜNE DEVAM ETMEK İÇİN HERHANGİ BİR TUŞA BASIN";
  getch();   


float kok;
    
    cout<<"\nKAREKOKU ALINACAK SAYI : ";
    cin>>kok;
    
    cout<<kok<<" SAYISININ KAREKOKU = "<<sqrt(kok)<<endl;
	
	    return EXIT_SUCCESS;

return 0;
}

