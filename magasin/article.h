#include<iostream>
using namespace std;
class Article
{
protected :
    string Code;
    string Nom;
    float Prix;
public:
    Article(string a="XXX",string b="YYY",float c=-1){
        Code=a;
        Nom=b;
        Prix=c;
    }
    void setcod(string a){Code=a;}
    void setnom(string a){Nom=a;}
    void setprix(float a){Prix=a;}

  virtual  float GetPrix(){
        return  Prix;}
  virtual  void Afficher(){
        cout<<Code<<" "<<Nom<<" "<<Prix<<endl;
    }
    string Getnom(){return Nom;}
  string GetCode(){return Code;}
  virtual bool issolde(){return 0;}
  virtual bool isarticle(){return 1;}
};

