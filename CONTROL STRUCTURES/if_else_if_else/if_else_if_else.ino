/**********************************************************************************
**                                                                               **
**                          PLANTILLA CFGS                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************
int tempAigua1 = 89;
//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);     // arrenca a 9600 bps

  if ( tempAigua1 >= 100) //
  {
    Serial.print("Aigua supera els 100C, esta bullint!"); //
  }
  if ( tempAigua1 >=90  <100)
  {
    Serial.print("Aigua a punt de bullir");
  }
  if ( tempAigua1 < 90)
  {
    Serial.print("Aigua encara no bull");
  }


}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************
