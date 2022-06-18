#include <facture.h>

int main()
{


  Article * a = new  Article ("art1", "LAIT" ,9);
   ArticleSolde * b = new ArticleSolde ("art2", "SUCRE" ,12,0.25) ;
   b->Afficher();
 facture s;
 s.ajouter( a );
 s.ajouter( b );
     s.LesArticlesSoldes();
 cout<<"le montant total est : "<<s.mnt()<<endl;
    return 0;
}
