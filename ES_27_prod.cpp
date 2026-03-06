#include <iostream>
#include <string>
using namespace std;

struct prodotto{
	string nome;
	string categoria;
	float prezzo;	
};

void aggiungi(prodotto p, prodotto ele[],int &dim){
	ele[dim]=p;
	dim++;	
}

string visualizza(prodotto ele[], int dim){
	string s;
	for(int i=0;i<dim;i++){
		s+=ele[i].nome+"\t";
		s+=ele[i].categoria+"\t";
		s+=to_string(ele[i].prezzo)+"\n";
	}
	return s;
}

int ricerca(prodotto p, prodotto elenco[], int dim )
{
	string cerca;
	cout<<"inserisci il prodotto da cercare: ";
	getline(cin, cerca);
	for(int i=0; i<dim; i++)
	{
		if(elenco[i].nome == cerca)
		{
			return i;
		}
		else{
			return -1;
		}
	}
}

void cancella(prodotto p, prodotto elenco[], int dim)
{
	string nome;
	cout<<"inserisci il prodotto da cancellare: ";
	getline(cin, nome);
	for(int i=0; i<dim; i++){
		if(elenco[i].nome == nome){
			for(int j=0; j<dim; j++){
				elenco[j]=elenco[j+1];
			}
			dim--;
			cout<<"prodotto eliminato";
		}
	}
}

int main(){
//dichiarazioni delle variabili
prodotto  p;
prodotto elenco[100];
int n=0;
int dim=0;

//struttura a menù
int scelta;
do{
//visualizzazione opzioni
cout<<"1 - (C)Aggiunta"<<endl;
cout<<"2 - (R)Visualizzazione"<<endl;
cout<<"3 - (R)RICERCA"<<endl;
cout<<"4 - (C)CANCELLA"<<endl;
///------
cout<<"0 - Fine programma"<<endl;
//scelta dell'opzione
cout<<"scegli l'opzione ";

cin>>scelta;


switch(scelta){
	case 1:
		cout<<"Inserisci il nome ";
		cin>>p.nome;
		cout<<"Inserisci la categoria ";
		cin>>p.categoria;
		
		cout<<"Inserisci il prezzo ";
		cin>>p.prezzo;
		aggiungi(p,elenco,n);
		break;
	case 2: 	
	    cout<<visualizza(elenco,n);
		break;
	case 3:
		cout<<"inserisci il prodotto da cercare"<<endl;
		cout<<"inserisci il nome: ";
		cin>>p.nome;
		cout<<"inserisci la categoria: ";
		cin>>p.categoria;
		cout<<"inserisci il prezzo: ";
		cin>>p.prezzo;
	    ricerca(p, elenco, dim);
		break;	
	case 4:
		cancella(p, elenco, dim);
		break;
}
}
while (scelta!=0);
	
}