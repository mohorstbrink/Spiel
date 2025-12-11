#include"Charakterklassen.h"
#include<iostream>
#include"Funktionen.h"
using namespace std;
void PvPKampf(charakter* A, charakter* B){
	int aktionen; // Rundenanzahl
	int welcheaktion, heilanzahl = 50;
	cout<<"Wieviele Runden wollt ihr spielen?"<<endl;
	cin>>aktionen;
	for (int i = 0; i < aktionen; ++i) {
		cout<<A->get_name()<<" welche Aktion wollen Sie ausführen?"<<endl<<"1 = Angreifen ; 2 = Boosten ; 3 = Heilen"<<endl;
		cin>> welcheaktion;
		if(welcheaktion == 1){
			A->attack(B);
		}
		if(welcheaktion == 2){
			A->boosten();
		}
		if(welcheaktion == 3){
			A->heilen(heilanzahl);
		}
		cout<<endl<<B->get_name()<<" welche Aktion wollen Sie ausführen?"<<endl<<"1 = Angreifen ; 2 = Boosten ; 3 = Heilen"<<endl;
			cin>> welcheaktion;
			if(welcheaktion == 1){
				B->attack(A);
			}
			if(welcheaktion == 2){
				B->boosten();
			}
			if(welcheaktion == 3){
				B->heilen(heilanzahl);
			}
			cout<<endl;
		}
}
void Bossselectsolo(charakter* A){
	int bossauswahl;
	cout<<"Gegen wen willst du kämpfen?"<<endl;
	cout<<"1. Skelett"<<endl;
	cout<<"2. Räuber"<<endl;
	cin>>bossauswahl;
	if(bossauswahl==1){
		KampfSkelett(A);
	}
	if(bossauswahl==2){
		KampfRäuber(A);
	}
}
void Bossselectduo(charakter* A, charakter* B){

}
void KampfSkelett(charakter* A){
	charakter Skelett{300,20,"Skelett",0};
	while(Skelett.get_hp() > 0 && A->get_hp() > 0){
	cout<<"Welche Aktion willst du ausführen?"<<endl<<"1. Normaler Angriff"<<endl<<"2. Spezialangriff"<<endl;
	int welcheaktion;
	cin>>welcheaktion;
	if(welcheaktion == 1){
		A->attack(&Skelett);
	}
	if(welcheaktion == 2){
		A->spezialangriff(A, &Skelett);
		}
	Skelett.attack(A);
	}
	//Droppt Knochenkeule
}
void KampfRäuber(charakter* A){
	charakter Räuber{100,25,"Räuber",0};
	while(Räuber.get_hp() > 0 && A->get_hp() > 0){
	cout<<"Welche Aktion willst du ausführen?"<<endl<<"1. Normaler Angriff"<<endl<<"2. Spezialangriff"<<endl;
	int welcheaktion;
	cin>>welcheaktion;
	if(welcheaktion == 1){
		A->attack(&Räuber);
	}
	if(welcheaktion == 2){
		A->spezialangriff(A, &Räuber);
		}
	Räuber.attack(A);
	}
	//Droppt knüppel
}
