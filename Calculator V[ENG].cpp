#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
using namespace std;
 
int main(int argc, char *argv[]){

cout << "WELCOME TO DEVELOPED CALCULATOR PROJECT(CALCULATOR V).VERSION:1.2 **DEVELOPMENT OF THE PROJECT HAS BEEN STOPPED BECAUSE OF TECHNICAL ERRORS.**\nCODES ARE WRITTEN BY VEHBI DENIZ KILINC.PRESS ANY BUTTON TO GO TO FOUR OPERATION SECTION.\n\n";
getch();

setlocale(LC_ALL,"English");
int s1,s2,secim,sonuc;
cout<<"Enter the 1st number: ";
cin>>s1;
cout<<"Enter the 2nd number: ";
cin>>s2;
cout<<"Enter your choice : 1- SUMMATION 2-SUBRACTION 3-MULTIPLICATION 4-:DIVISION ";
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
cout<<"wrong choice";
cout<<"Corollary : "<<sonuc;


cout << "\nPRESS ANY BUTTON TO GO TO EXPONENTIATE SECTION";
getch();


double us, taban; 
    

    cout << "\nEnter the exponent of number: "; 
    cin >> us; 
    cout << "Enter the base of number: "; 
    cin >> taban; 

    int b = taban;

    for (int a = 1; a < us; a++)

 

        b = taban * b;

    cout << "Corollary: " << b << ""; 


  cout << "\nPRESS ANY BUTTON TO GO TO SQUARE ROOT SECTION";
  getch();   


float kok;
    
    cout<<"\nSQUARE ROOT NUMBER : ";
    cin>>kok;
    
    cout<<kok<<" SQUARE ROOT OF THE NUMBER = "<<sqrt(kok)<<endl;
	
	    return EXIT_SUCCESS;

return 0;
}

