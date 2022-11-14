#include <iostream>
#include "biberon.h"
using namespace std;

Biberon::Biberon() 
{

}

Biberon::~Biberon() 
{

}

Biberon::Biberon(/*type param1*/)
{

}

void Biberon::ajout_heure_prise(/*int heure_de_prise, int intervalle*/)
{
	
	if (heure_actu <= 23 && heure_de_prise + intervalle <= heure_actu) {
		cout << "d'ici combien de temps voulez vous le faire";
		int new_intervalle;
		cin >> new_intervalle;
		this->heure_de_prise = this->heure_de_prise + new_intervalle;
		this->intervalle = new_intervalle;
	}
}

void Biberon::ajout_ingere(int quantite_ingere)
{
	
}