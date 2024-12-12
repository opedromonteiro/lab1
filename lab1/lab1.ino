/****************************************************
	Programador.....: (C) Pedro Monteiro
    Data:...........: 11/12/2024
    Observações.....: Segundo laboratório de SDAC.
    
    				  Controlo de um led vermelho.
****************************************************/

//Constante
const int LED_PIN = 7;
const int DELAY_TIME = 1000;

//Inicializações
void setup(void)	{
  pinMode (LED_PIN, OUTPUT);
}

//Programa
void loop(void) {
  digitalWrite(LED_PIN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED_PIN, LOW);
  delay(DELAY_TIME);
}