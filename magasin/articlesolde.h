#include<article.h>

class ArticleSolde : public Article
{
    float Remise;
public:
    ArticleSolde(string a,string b, float c,float r):Article(a,b,c)
    {
        Remise=r;
    }
  float GetPrix(){
        float a;
        a=Article::GetPrix();   
        return a*(1-Remise);
    }
    void Afficher(){
        Article::Afficher();
        cout<<"apres remise le sode est: "<<this->GetPrix()<<endl;
        }
    float Getremise(){return Remise;}
    virtual bool issolde(){return 1;}
    virtual bool isarticle(){return 0;}

};


