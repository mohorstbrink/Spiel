#include<iostream>
#include "Charakterklassen.h"

using namespace std;
charakter::charakter() {
	_hp = 100;
	_dmg = 10;
	_name = "Standard";
}
charakter::charakter(int hp, int dmg, std::string name, int crit) {
	_hp = hp;
	_dmg = dmg;
	_name = name;
	_crit = crit;
}
void charakter::spezialangriff(charakter* angreifer, charakter* ziel) {
	std::cout << "Dieser Charakter hat keinen Spezialangriff" << std::endl;
}
int charakter::get_hp() const{
	return _hp;
}
int charakter::get_dmg() const{
	return _dmg;
}
std::string charakter::get_name() const{
	return _name;
}
int charakter::take_damage(int anz) {
	if (_hp - anz < 1) {
		_hp = 0;
		std::cout << _name << " ist gestorben" << std::endl;
		return 1;
	} else {
		_hp -= anz;
		std::cout << _name << " hat noch " << _hp << " Leben übrig"
				<< std::endl;
		return 0;
	}
}
void charakter::attack(charakter *ziel) {
	cout << _name << " greift " << ziel->_name << " an" << endl;
	if (ziel->take_damage(_dmg) == 1) {
		cout << _name << " hat das Spiel gewonnen" << endl;
		exit(0);
	}
}
void charakter::angriff(charakter* angreifer, charakter* ziel){
	cout<<angreifer->get_name()<<" greift "<< ziel->get_name()<<" an"<<endl;
	ziel->take_damage(angreifer->get_dmg());
	if(ziel->istTot() == true){
		cout<<ziel->get_name()<<" wurde besiegt"<<endl;
	}


}
void charakter::heilen(int anz) {
	_hp += anz;
	std::cout << _name << " hat " << _hp << " Leben" << std::endl;
}
void charakter::boosten() {
	_dmg = static_cast<int>(_dmg * 1.5);
	std::cout << "Angriff von " << _name << " auf " << _dmg << " gestiegen"
			<< std::endl;
}
bool charakter::istTot() const{
	if(this->get_hp() == 0){ return true;}
	else return false;
}
Bogenschütze::Bogenschütze() {
	_hp = 80;
	_dmg = 5;
	_name = "Bogenschütze";
	_range = 2;
}
Bogenschütze::Bogenschütze(int hp, int dmg, std::string name, int crit,
		int range) :
		charakter { hp, dmg, name, crit }, _range { range } {

}
void Bogenschütze::attack(charakter *ziel)  {
	cout << _name << " greift " << ziel->get_name() << " an" << endl;
	if (ziel->take_damage(_dmg) == 1) {
		cout << _name << " hat das Spiel gewonnen" << endl;
		exit(0);
	}
}
void Bogenschütze::spezialangriff(charakter* angreifer, charakter* ziel) {

}
Magier::Magier() {
	_hp = 75;
	_dmg = 4;
	_name = "Magier";
	_dot = 2;
}
Magier::Magier(int hp, int dmg, std::string name, int crit, int dot) :
		charakter { hp, dmg, name, crit }, _dot { dot } {

}
void Magier::attack(charakter *ziel) {
	cout << _name << " greift " << ziel->get_name() << " an" << endl;
	if (ziel->take_damage(_dmg) == 1) {
		cout << _name << " hat das Spiel gewonnen" << endl;
		exit(0);
	}
}

void Magier::spezialangriff(charakter* angreifer, charakter* ziel) {

}
