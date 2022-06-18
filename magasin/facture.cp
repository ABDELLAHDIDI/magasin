#include "facture.h"
 int facture::NumFact=100;//NumFact-100
facture::facture()
{
    NumFact++;
    achats = new Article * [10];
    for(int i=0;i<10;i++)
        achats[i]=NULL;

}
void facture::ajouter(Article * a){
    int i=0;
    if(!achats[0]) {
        achats[0]=a;

        return ;
    }
for( i=0;i<10 &&  achats[i] ;i++) {}
    if(i==10) {
        cout<<"error"<<endl; return ;
    }
for(i=0;i<10;i++)
    if(! achats[i]) {
        achats[i]=a;

       return ;
    }
}
float facture::mnt(){
    float a=0;
    for(int i=0;i<10;i++)
     if(achats[i])  {
          a+=achats[i]->GetPrix();
     }
    return a;
}
void facture::LesArticlesSoldes(){
    for(int i=0; i<10 && achats[i] ; i++)
        if(achats[i]->issolde())
        cout<<achats[i]->Getnom()<<" est un article solde ."<<endl;
}
