#pragma once
class Biberon
{
protected :
	double heure_de_prise;
	double intervalle; //_de_rappel
	int quantite_max;
	int quantite_min;
	bool oui_bib_prise;
	bool vomi;
	int volume_bib;
	int quantite_ingere;
public :
	Biberon();
	~Biberon();
	Biberon(/*type param1*/);
	void ajout_heure_prise(/*int heure_de_prise, int intervalle*/);
	void ajout_ingere(int quantite_ingere);
};

struct course
{

};