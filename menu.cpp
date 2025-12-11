#include <iostream>
#include<vector>
#include<string>
#include"Charakterklassen.h"
#include"Funktionen.h"
#include"menu.h"
using namespace std;


int menu(const string& titel, const vector<string>& optionen){
	cout<<"---"<< titel<<"---"<<endl;
	for (size_t i = 0; i < optionen.size(); ++i) {
		cout<<i+1<<"."<<optionen[i]<<endl;
	}
	int auswahl;
	cout<<"Auswahl:"<<endl;
	cin>>auswahl;
	return auswahl;
}

int Hauptmenu(){
	return menu("Hauptmenu",{
			"Einzelspieler",
			"Mehrspieler",
			"Beenden"
	});
}
charakter* charakterauswahl(){
	int auswahl;
	cout<<"Welcher Charakter möchtest du sein?"<<endl<<"1. Normaler Kämpfer"<<endl<<"2. Magier"<<endl<<"3. Bogenschütze"<<endl;
	cin >> auswahl;
	charakter* A = nullptr;
	switch(auswahl){
	case 1 : A = new charakter;
		break;
	case 2 : A = new Magier;
		break;
	case 3 : A = new Bogenschütze ;
		break;
	}
	return A;
}
void menuEinzelspieler(){
	charakter* spieler = charakterauswahl();
	//charakter spieler(300,25,"Goldmund",20);
	int wahl = menu("Einzelspieler",{
			"Boss auswählen",
			"Beenden"
	});
	if(wahl == 1){
		Bossselectsolo(spieler);
	}
}
void menuMehrspieler(){
	charakter spieler1(300,25,"Goldmund",20);
	charakter spieler2(400,15,"Narziß",15);
	int wahl = menu("Mehrspieler",{
			"PvP Kampf",
			"Boss auswählen"
			"Beenden"
	});
	if(wahl == 1){
		PvPKampf(&spieler1,&spieler2);
	}
	if(wahl == 2){
		Bossselectduo(&spieler1,&spieler2);
	}
}
