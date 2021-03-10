#include <string>
#include <iostream>
#include "course.h"
#include <random>
#include <windows.h>
#include <stdlib.h>
#include <ctime> 

using namespace std;

/*void Course::moyen_temp(){};*/
void Course::moyen_temp(){
    int moyen = (_score1+_score2+_score3)/3;
    std::cout<< moyen << std::endl;
};

void Course::affiche_score(){
    std::cout<< _pseudo << std::endl;
    for (int i=0; i<2; i++){ 
        if (_score[i] > _score[i+1]){
            int saveValeur = _score[i];
            _score[i] = _score[i+1];
            _score[i+1] = saveValeur;
        };
    }
    std::cout<< _score[0] << std::endl;
};

Course::Course(std::string pseudo, int _score1, int _score2, int _score3): _pseudo(pseudo), _score1(_score1), _score2(_score2), _score3(_score3){  
    if(_score1 > 999){
        _score1= 999;
    };
    else if (_score1 < -1){
        _score1=0; /*on ne le compte pas*/
    };

    if(_score2 > 999){
        _score2= 999;
    };
    else if (_score2 < -1){
        _score2=0; /*on ne le compte pas*/
    };

    if(_score3 > 999){
        _score3= 999;
    };
    else if (_score3 < -1){
        _score3=0; /*on ne le compte pas*/
    };
    
}
