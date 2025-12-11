#include<iostream>
#include"Funktionen.h"
#include "Charakterklassen.h"
#include "menu.h"
using namespace std;
int main(){

	while(true){
		int wahl = menu("Hauptmenu",{
			"Einzelspieler",
			"Mehrspieler",
			"Beenden"
		});
	switch(wahl){
	case 1: menuEinzelspieler();
	case 2: menuMehrspieler();
	case 3: cout<<"Spiel beender"<<endl;
		return 0;
		}
	}
}
