/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include "stdlib.h"
#include <iostream>
#include "steffi.hpp"
#include <vector>
#include <algorithm>    // std::sort

using namespace std;


int anzNumb(std::vector<long>, long);
std::vector<long> primFakt(long);
int outVekt(std::vector<long>);
long multiplVectElements(std::vector<long>);

int main()
{	
	std::vector<long> kleinsterTeiler;
	long numb = 2;
	std::vector<long> vect;
	vect = primFakt(numb);
	for(unsigned int i = 0; i<vect.size(); i++){
		kleinsterTeiler.push_back(vect[i]);
	}

	outVekt(kleinsterTeiler); //////////////////

	for(numb = 3; numb <= 60; numb++){
		vect = primFakt(numb);
		for(unsigned int i = 0; i<vect.size(); i++){
			std::cout << vect[i] << ";" << std::endl;
		}
		std::cout << "__________________" << std::endl;
		//Vektoren muessen vergliechen werden, die Zahlen die noch nicht vorkommen werden in den Vektor kleinsterTeiler eingetragen und sortiert
		//also zwei for schleifen eine ume alle elemente von vect mit dem i-ten Elemet von dem kleinstenTeiler zu vergleichen
		//Problem auch mehrfach vorkommende Elemente muessen beruecksichtigt werden
			for(unsigned int c = 0; c < vect.size(); c++){
				for(unsigned int d=0; d < kleinsterTeiler.size(); d++){
				if(vect[c] < kleinsterTeiler[d]){
					kleinsterTeiler.push_back(vect[c]);
					//std::cout << "kleinster Teiler bei kleiner" << vect[c] << std::endl;
					//outVekt(kleinsterTeiler);
					std::sort (kleinsterTeiler.begin(), kleinsterTeiler.end()); //Sortierung ist besonders wichtig fuer goeßer und kleiner 
											            //Abfrage, damit nichts doppelt vorkommt
					break;
				}
				else if(vect[c] == kleinsterTeiler[d]){
					unsigned int anz = 0;
					int searchNumb = vect[c];
					int anzahlVect = anzNumb(vect,searchNumb);
					int anzahlTeiler = anzNumb(kleinsterTeiler, searchNumb);
					if(anzahlVect > anzahlTeiler){
						anz = anzahlVect - anzahlTeiler;
						for(unsigned int i=0; i < anz; i++){
							kleinsterTeiler.push_back(searchNumb);
						}
					}
					c = c + anzahlVect - 1;
					d = d + anzahlTeiler - 1;
					//std::cout << "kleinster Teiler bei goeßer"  << vect[c] << std::endl;
					//outVekt(kleinsterTeiler);
					std::sort (kleinsterTeiler.begin(), kleinsterTeiler.end());
					break;
				}
				else if (vect[c] > kleinsterTeiler[kleinsterTeiler.size()-1]){
					kleinsterTeiler.push_back(vect[c]); 
					//std::cout << "kleinster Teiler bei goeßer"  << vect[c] << std::endl;
					//outVekt(kleinsterTeiler);
					std::sort (kleinsterTeiler.begin(), kleinsterTeiler.end()); 
					break;
				}			
				}
			}

	}


//outVekt(kleinsterTeiler);
multiplVectElements(kleinsterTeiler); //Mulipliziert alle kleinsten gemeinsamen Vielfachen zusammen
return 0;
}


std::vector<long> primFakt(long numb)
{	
/*Programm fuer das Herausfinden von Primzahlen
 Primfaktoren werden in einen Vektor unter einander geschrieben
*/
	//int prim = 2;
	long  x,i;
	std::vector<long> v;	
	for(x=2; x<=numb;x++)
	{
		
		for(i = 2; i<=x; i++)
		{
		if(x%i == 0) break;
		//std::cout << i << std::endl;
		}
			if(i==x) {
				//printf("%i ist eine Primzahl.\n", x);
				while(numb%i==0){
				numb = numb/x;
				//std::cout<< numb <<sftd::endl;
				v.push_back(x); //fügt x ans Ende von v an.
				// printf("%d ist Primfaktor von numb. \n",x);
				}
			}
	}
	return v;
}




int anzNumb(std::vector<long> v, long number){//Anzahl der Elemente in einem Vektor mit der Zahl "number"
	int k = 0;
	for(unsigned int i=0; i<v.size(); i++){
	if(v[i] == number){k++;}
	}
	std::cout << "k WErt = " << k << std::endl;
	return k;
}


int outVekt(std::vector<long> v){//Konsolen Ausgabe eines Vektors
	for(unsigned int i=0; i < v.size(); i++){
		std::cout << "Vektor lautet" <<  v[i] << std::endl;
	}
	return 0;
}


long multiplVectElements(std::vector<long> v){//berechnet die Multiplikation der Vektorelemete
	long long res = 1;
	for(unsigned int i=0; i < v.size(); i++){	
		res = res * v[i];		
	}
	std::cout << "Ergebnis" <<  res << std::endl;
	return 0;
}




