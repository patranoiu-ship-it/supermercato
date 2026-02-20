#include <iostream>
using namespace std;

struct prodotto
{
	string nome_prod;
	float prezzo;
	string categoria;
};

void aggiungi(prodotto p[], int dim)
{
	
}

void visualizza(prodotto prod[], int dim)
{
	for(int i=0; i<dim; i++)
	{
		cout<<"l'array visualizzato: "<< prod[i]<<" ";
	}
}

int cerca(string p, string prod[], int dim)
{
	
}

bool cancella(prodotto p, string prod[], int dim)
{
	
}

bool modifica(prodotto p, string prod[], int dim)
{
	
}
int ricerca(prodotto p, prodotto v[], int dim)
{
	for(int i=0; i<dim; i++)
	{
		if(v[i].nome_prod = p.nome_prod)
		{
			return i;
		}
	}
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
	    	cout<<"inserisci il nome del prodotto: ";
	        getline(cin, p.nome_prod);
	        cout<<"inserisci il prezzo: ";
	        cin>>prezzo;
        	cout<<"inserisci la categoria: ";
        	cin>>categoria;
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
