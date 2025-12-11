

#ifndef CHARAKTERKLASSEN_H_
#define CHARAKTERKLASSEN_H_
#include<string>

class charakter{
protected:
int _hp;
int _dmg;
std::string _name;
int _crit;
public:
	charakter();
	charakter(int hp, int dmg, std::string name,int crit);
	int get_hp() const;
	int get_dmg() const;
	std::string get_name() const;
	virtual int  take_damage(int anz);
	virtual void attack(charakter* ziel);
	virtual void angriff(charakter* angreifer, charakter* ziel);
	virtual void spezialangriff(charakter* angreifer,charakter* ziel);
	void heilen(int anz);
	void boosten();
	virtual ~charakter() = default;
	bool istTot() const;
};


class Bogenschütze : public charakter{
	int _range;
public:
	Bogenschütze();
	Bogenschütze(int hp, int dmg, std::string name,int crit, int range);
	void attack(charakter* ziel) override;
	void spezialangriff(charakter* angreifer, charakter* ziel) override;
};
class Magier : public charakter{
	int _dot;
public:
	Magier();
	Magier(int hp, int dmg, std::string name,int crit,int dot);
	void attack(charakter* ziel) override;
	void spezialangriff(charakter* angreifer, charakter* ziel) override;
};
#endif /* CHARAKTERKLASSEN_H_ */
