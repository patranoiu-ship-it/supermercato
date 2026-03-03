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

void ricerca(prodotto p, prodotto elenco[], int dim )
{
	for(int i=0; i<dim; i++)
	{
		if(p.nome == elenco[i].nome && p.categoria == elenco[i].categoria && p.prezzo == elenco[i].prezzo)
		{
			cout<<"il prodotto e' nella posizione "<<i;
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
///------
cout<<"0 - Fine programma"<<endl;
//scelta dell'opzione
cout<<"scegli l'opzione ";

cin>>scelta;


switch(scelta){
	case 1:
		cout<<"Inserisci il nome ";
		getline(cin,p.nome);
		cout<<"Inserisci la categoria ";
		getline(cin,p.categoria);
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
}
}
while (scelta!=0);
	
}