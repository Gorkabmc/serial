/**********************************************************************************
**                                                                               **
**                          MATH IS FUN 7                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                        6/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int test = 32767; // VALOR DE L VARIABLE 
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);    
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1; // SUMA 1 AL VALOR DE TEST
 
  Serial.print("Now it is "); 
  Serial.println(test);   // ESCRIU EL VALOR DE TEST 
}

//********************************* LOOP ******************************************
void loop()
{
}

//******************************* FUNCIONS ****************************************
