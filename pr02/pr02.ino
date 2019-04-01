/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino
const int led0 = 9;         // donar nom al pin A0 de l’Arduino
const int led1 = 10;         // donar nom al pin A1 de l’Arduino
const int led2 = 11;  

int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
 Serial.begin(9600);
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  Serial.print("ldr0 ");
  Serial.println(valLdr0);
  delay(400);
  valLdr0 = map(valLdr0, 250, 800, 255, 0);
  analogWrite(led0, valLdr0);
  
  valLdr1 = analogRead(ldr1);
  Serial.print("ldr1 ");
  Serial.println(valLdr1);
   delay(400);
   valLdr1 = map(valLdr0, 250,720, 255, 0);
   analogWrite(led1, valLdr1);
   
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
  Serial.print("ldr2 ");
  Serial.println(valLdr2);
  delay(400);
  valLdr2 = map(valLdr2, 250, 750, 255, 0);
  analogWrite (led2, valLdr2) ;

}

//********** Funcions *************************************************************
