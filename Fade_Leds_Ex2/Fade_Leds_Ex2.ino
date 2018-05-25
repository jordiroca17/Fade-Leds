/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0,0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 24);  // posar PWM del pin 3 a 125
  analogWrite(led1, 0);  // posar PWM del pin 5 a 125
  analogWrite(led2, 0);  // posar PWM del pin 6 a 125
  analogWrite(led3, 0);  // posar PWM del pin 9 a 125
  analogWrite(led4, 0);  // posar PWM del pin 10 a 125
  analogWrite(led5, 0);  // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 48);    // posar PWM del pin 3 a 255
  analogWrite(led1, 24);    // posar PWM del pin 5 a 255
  analogWrite(led2, 0);    // posar PWM del pin 6 a 255
  analogWrite(led3, 0);    // posar PWM del pin 9 a 255
  analogWrite(led4, 0);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 72);    // posar PWM del pin 3 a 125
  analogWrite(led1, 48);    // posar PWM del pin 5 a 125
  analogWrite(led2, 24);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);  // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 96);    // posar PWM del pin 3 a 125
  analogWrite(led1, 72);    // posar PWM del pin 5 a 125
  analogWrite(led2, 48);    // posar PWM del pin 6 a 125
  analogWrite(led3, 24);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 120);    // posar PWM del pin 3 a 125
  analogWrite(led1, 96);    // posar PWM del pin 5 a 125
  analogWrite(led2, 72);    // posar PWM del pin 6 a 125
  analogWrite(led3, 48);    // posar PWM del pin 9 a 125
  analogWrite(led4, 24);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);          
  
  analogWrite(led0, 144); 
  analogWrite(led1, 120);    // posar PWM del pin 5 a 125
  analogWrite(led2, 96);    // posar PWM del pin 6 a 125
  analogWrite(led3, 72);    // posar PWM del pin 9 a 125
  analogWrite(led4, 48);    // posar PWM del pin 10 a 125
  analogWrite(led5, 24);    // posar PWM del pin 11 a 125
  
  delay(velocitat);  
 
  analogWrite(led0, 168);        
  analogWrite(led1, 144);    // posar PWM del pin 5 a 125
  analogWrite(led2, 120);    // posar PWM del pin 6 a 125
  analogWrite(led3, 96);    // posar PWM del pin 9 a 125
  analogWrite(led4, 72);    // posar PWM del pin 10 a 125
  analogWrite(led5, 48);    // posar PWM del pin 11 a 125
  
  delay(velocitat);  
 
  analogWrite(led0, 192); 
  analogWrite(led1, 168);    // posar PWM del pin 5 a 125
  analogWrite(led2, 144);    // posar PWM del pin 6 a 125
  analogWrite(led3, 120);    // posar PWM del pin 9 a 125
  analogWrite(led4, 96);    // posar PWM del pin 10 a 125
  analogWrite(led5, 72);    // posar PWM del pin 11 a 125
  
  delay(velocitat);  
  
  analogWrite(led0, 216); 
  analogWrite(led1, 192);    // posar PWM del pin 5 a 125
  analogWrite(led2, 168);    // posar PWM del pin 6 a 125
  analogWrite(led3, 144);    // posar PWM del pin 9 a 125
  analogWrite(led4, 120);    // posar PWM del pin 10 a 125
  analogWrite(led5, 96);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           
 
  analogWrite(led0, 240); 
  analogWrite(led1, 216);    // posar PWM del pin 5 a 125
  analogWrite(led2, 192);    // posar PWM del pin 6 a 125
  analogWrite(led3, 165);    // posar PWM del pin 9 a 125
  analogWrite(led4, 144);    // posar PWM del pin 10 a 125
  analogWrite(led5, 120);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255); 
  analogWrite(led1, 240);    // posar PWM del pin 5 a 125
  analogWrite(led2, 216);    // posar PWM del pin 6 a 125
  analogWrite(led3, 192);    // posar PWM del pin 9 a 125
  analogWrite(led4, 165);    // posar PWM del pin 10 a 125
  analogWrite(led5, 144);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}


//********** Funcions *************************************************************

