

#ifndef MENU_H_
#define MENU_H_
#include<vector>
int menu(const std::string& titel, const std::vector<std::string>& optionen);
int Hauptmenu();
void menuEinzelspieler();
charakter* charakterauswahl();
void menuMehrspieler();
#endif /* MENU_H_ */
