//Frank Fernandez
int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode (led,OUTPUT); // num puerto o pin & MOde
} 

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite (led, HIGH);
 delay(1000);//1000 milisegundos
 digitalWrite(1ed,LOW);
 delay(1000);
 
}
