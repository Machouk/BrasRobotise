
#include <Servo.h>

Servo sgPince;
Servo sgPoignet;
Servo sgPoignetrotation;
Servo coude;
Servo epaule;
Servo epaulerotation;

int angle1;
int angle2;
int angle3;
int angle4;
int angle5;
int angle6;






void setup() {
  // put your setup code here, to run once:
  sgPince.attach(13);
  sgPoignet.attach(11);
  sgPoignetrotation.attach(10);
  coude.attach(9);
  epaule.attach(6);
  epaulerotation.attach(5);
}

void loop() {

  angle1=90;
  angle2=90;
  angle3=90;
  angle4=90;
  angle5=90;
  angle6=0;
  
  delay(5000);
  epaulerotation.write(90);
  epaule.write(90);
  coude.write(90);
  sgPoignetrotation.write(90);
  sgPoignet.write(90);
  sgPince.write(0);
  delay(3000);



 for (int i=0; i<30; i++){
  angle1+=1;
  angle2-=1;
  angle3-=3;
  angle5-=3;
  angle6+=2;

  delay(300);
  epaulerotation.write(angle1);
  epaule.write(angle2);
  coude.write(angle3);
  sgPoignetrotation.write(angle4);
  sgPoignet.write(angle5);
  sgPince.write(angle6);
 }

 delay(5000);
  
 // epaulerotation.write(120);
 // epaule.write(60);
 // coude.write(0);
 // sgPoignetrotation.write(90);
 // sgPoignet.write(0);
 // sgPince.write(60);
//  delay(1500);
  

 for (int i=0; i<30; i++){
  angle1-=1;
  angle2+=1;
  angle3+=3;
  angle5+=3;
  angle6-=2;

  delay(300);
  epaulerotation.write(angle1);
  epaule.write(angle2);
  coude.write(angle3);
  sgPoignetrotation.write(angle4);
  sgPoignet.write(angle5);
  sgPince.write(angle6);
 }






  
}
