#include <iostream>
#pragma once 
using namespace std;

template<typename P> class Point{

private :

  P x;
  P y;

public : 
  void translation(P dx, P dy){
    this->x=x+dx;
    this->y=y+dy;
  };
  //constructeur initialise un point à l'origine 
  Point(){
    x=0;
    y=0;
  };
  //constructeur prenant 2 paramètres réels
  Point(int a, int b){
    x = a;
    y = b;
  };
  //constructeur de recopie
  Point(Point const &p){
    this->x = p.x;
    this->y = p.y;
  };
  //accesseur 
  P getCoordonneesX() const{
    return this->x;
  };
  P getCoordonneesY() const{
    return this->y;
  };
  //mutateur
  void SetCoordonnees(P x,P y){
    this->x = x;
    this->y = y;
  };


  //surcharge de l'opérateur d'affichage 
  friend ostream& operator<<(ostream& s,Point const& p) {
    s << p.x << ", " << p.y;
  return s;
  };

  //surcharge de l'opérateur "+="
  Point& operator+=(Point<int> const& p) {
    x+=p.x;
    y+=p.y;
    return *this;
  };
  
};
