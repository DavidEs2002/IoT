// JUAN PABLO LOPEZ RODRIGUEZ   DAVID ESTEBAN PANTOJA
int led_rojo = 10;//refactorizacion - codigo quemado 13 = numero del pin
int led_amarillo = 11;
int led_verde = 13;

void setup() {
  // put your setup code here, to run once:
  //inicializa
  pinMode(led_rojo,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
  pinMode(led_amarillo,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
  pinMode(led_verde,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(500); 
 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(500);
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(500);
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(500);
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(500);  
/////////////////////////////////////////////////////////////////////
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_amarillo,HIGH); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_amarillo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_amarillo,HIGH); //LOW para apagar // HIGH prender
 delay(500);
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_amarillo,LOW); //LOW para apagar // HIGH prender
 delay(500); 
 digitalWrite(led_verde,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_rojo,LOW); //LOW para apagar // HIGH prender
 digitalWrite(led_amarillo,HIGH); //LOW para apagar // HIGH prender
 delay(500);

 
 

}
