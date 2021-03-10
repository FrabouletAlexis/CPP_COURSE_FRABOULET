#include <string>
#include <iostream>
#include <vector>
#include "course.cpp"

using namespace std;


int main(){
    Course course_1 = Course("Joueur 1",12,9,13);
    Course course_2 = Course("Joueur 2",45,52,68);
    Course course_3 = Course("Joueur 3",85,65,25);

    course_1.affiche_score();
    course_1.moyen_temp();

    return 0;
}