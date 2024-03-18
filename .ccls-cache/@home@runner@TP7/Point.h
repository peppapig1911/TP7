#include <iostream>
using namespace std;

class Point{

private :

  double x;
  double y;

public : 
  void translater(Point p){
    x += p.x;
    y += p.y;
  };
  //constructeur initialise un point à l'origine 
  Point(){
    x = 0;
    y = 0;
  };
  //constructeur prenant 2 paramètres réels
  Point(int a, int b){
    x = a;
    y = b;
  };
  //constructeur de recopie
  Point(Point const &p){
    x = p.x;
    y = p.y;
  };
  //accesseur 
  Point getCoordonnees(){
    return Point(x,y);
  };
  //mutateur
  void SetCoordonnees(int x,int y){
    this->x = x;
    this->y = y;
  };


  //surcharge de l'opérateur d'affichage 
  friend ostream& operator<<(ostream& s,Point const& p) {
    s << p.x << ", " << p.y;
  return s;
  }

  /*surcharge de l'opérateur +=
  Point& operator+=(const Point& autre) {
      x += autre.x;
      y += autre.y;
      return *this;
  }*/

};
