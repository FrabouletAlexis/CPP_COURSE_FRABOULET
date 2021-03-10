#include <string>
#include <iostream>

class Course{
    private:
        std::string _pseudo;
        int _score1;
        int _score2;
        int _score3;
        int _score [3]={_score1,_score2,_score3};

    public:
        void moyen_temp();
        void affiche_score();

        Course(std::string pseudo, int _score1, int _score2, int _score3);
};