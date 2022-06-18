#include<articlesolde.h>
class facture
{

    static int NumFact;
public:
       Article ** achats;
    facture();
    void ajouter(Article *);
    float mnt();
    void LesArticlesSoldes();
};


