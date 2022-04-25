#include <Arduino_AVRSTL.h>

#include <iostream>
#include "brasRobot.h"
#include <Servo.h>

//Servo sgPince;
//Servo sgPoignet;
//Servo sgPoignetrotation;
//Servo coude;
//Servo epaule;
//Servo epaulerotation;


brasRobot::brasRobot(Vector<string> moteurs, Vector<int> pins, Vector<int> angles_de_repos){
    this->angles_de_repos=angles_de_repos;
    this->angles_de_repos=angles_de_repos;
    this->angles_de_repos=angles_de_repos;
}

brasRobot::void setup(Vector<String> moteurs, Vector<int> pins) {
    for(int i=0; i<moteurs.size(); i++){
    Servo moteurs.at(i);
    moteurs.at(i).attach(pins.at(i));
    }

    //sgPince.attach(13);
    //sgPoignet.attach(11);
    //sgPoignetrotation.attach(10);
    //coude.attach(9);
    //epaule.attach(6);
    //epaulerotation.attach(5);
}

void brasRobot::ouvrir_pince(int angle_de_fin){
    sgPince.write(angle_de_fin);
}

void brasRobot::fermer_pince(brasRobot bras){
    int angle=bras.angles_de_repos.at(0);
    sgPince.write(angle);
}

void brasRobot::changer_angle_poignet(int angle_de_fin){
    sgPoignet.write(angle_de_fin);
}

void brasRobot::tourner_poignet(int angle_de_fin){
    sgPoignetrotation.write(angle_de_fin);
}

void brasRobot::changer_angle_coude(int angle_de_fin){
    coude.write(angle_de_fin);
}

void brasRobot::changer_angle_epaule(int angle_de_fin){
    epaule.write(angle_de_fin);
}

void brasRobot::tourner_epaule(int angle_de_fin){
    epaulerotation.write(angle_de_fin);
}

void brasRobot::changer_angle(int angle_de_fin, String moteur){
    moteur.write(angle_de_fin);
}

void brasRobot::repos(Vector<String> moteurs, Vector<int> angles_de_repos){
    for(int i=0; i<moteurs.size(); i++){
        moteurs.at(i).write(angles_de_repos.at(i));
    }
}
