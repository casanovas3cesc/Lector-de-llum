/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 9;          // donar nom al pin 9 de l’Arduino
const int ldr0 = A1;         // donar nom al pin A0 de l’Arduino

int velocitat = 20;          // velocitat de l'acció en ms
int valLdr0;                 // guardar valor del ldr

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  Serial.println(valLdr0);
  delay(200);
  valLdr0 = map(valLdr0, 250, 720, 255, 0);   // mapejar valor de 0-1023 a 0-255
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
}

//********** Funcions *************************************************************


