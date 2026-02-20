#include <iostream>
using namespace std;

struct prodotto
{
	string mome_prod;
	float prezzo;
	string categoria;
};

void aggiungi(prodotto p[], int dim)
{
	
}

int visualizza(prodotto prod[], int dim)
{
	
}

int cerca(string p, string prod[], int dim)
{
	
}

bool cancella(prototto p, string prod[], int dim)
{
	
}

bool modifica(prototto p, string prod[], int dim)
{
	
}


int main()
{
	prodotto p;
	prodotto supermercato;
	
	int opzione;
	
	do
	{
		cout<<"struttura menu"<<endl;
		cout<<"0 = fine programma "<<endl;
		cout<<"1 = funzione cancella"<<endl;
		cout<<"2 = funzione aggiungi"<<endl;
		cout<<"3 = funzione visualizza"<<endl;
		cout<<"4 = funzione modifica"<<endl;
		cout<<"5 = funzione cerca"<<endl;
		cout<<"scegli la funzione ";
	    cin>>opzione;    
	    switch(opzione){
	    	case 1: //cancella
	    	cancella(prototto p, string prod[], int dim);
	    	break;
	    	case 2: //aggiungi
	    	aggiungi(prodotto p[], int dim);
	    	break;
	    	case 3: //visualizza
	    	visualizza(prodotto prod[], int dim);
	    	break;
	    	case 4: //modifica
	    	modifica(prototto p, string prod[], int dim);
	    	break;
	    	case 5: //cerca
	    	cerca(string p, string prod[], int dim);
	    	break;
		}
		while(opezione != 0);
		cout<<"fine programma";
	}
	

	
	
}
