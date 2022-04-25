
#ifndef BRASROBOT_H
#define BRASROBOT_H
#include "Arduino.h"
//#include <iostream>

//#include <string>

class brasRobot{
    public:
        brasRobot(Vector<String> motors, Vector<int> pins, Vector<int> angles_de_repos);
        void setup(Vector<String> moteurs, Vector<int> pins)
        void ouvrir_pince(int angle_de_fin);
        void fermer_pince(brasRobot bras);
        void changer_angle_poignet(int angle_de_fin);
        void tourner_poignet(int angle_de_fin);
        void changer_angle_coude(int angle_de_fin);
        void changer_angle_epaule(int angle_de_fin);
        void changer_angle(int angle_de_fin, String moteur)
        void tourner_epaule(int angle_de_fin);


    private:
        Vector<String> moteurs(6); //nom des moteurs de la pince vers l'épaule
        Vector<int> pins(6); // pins de la carte arduino auquels sont attachés les moteurs
        Vector<int> angles_de_repos(6); // vector avec angles du bras de la pince vers l'épaule
        


}

#endif
