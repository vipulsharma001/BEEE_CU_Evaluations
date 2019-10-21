

const int pinBuz = 3;
const int pinSwi = 2; 
void setup() {
Serial.begin(9600);
pinMode(pinBuz,OUTPUT);
pinMode(pinSwi,INPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT); 
}
void loop () {
int botao; 
botao = digitalRead(pinSwi); 
Serial.println(botao); 
if (botao == 1) 
{
digitalWrite(pinBuz,1); 
delay(1000);
digitalWrite(pinBuz,0);
}
if(botao ==1)
{
for(int i=0;;)
{
digitalWrite(7, HIGH);   
delay(1000);                       
digitalWrite(7, LOW);   
delay(1000);
digitalWrite(8, HIGH);   
delay(1000);                       
digitalWrite(8, LOW);   
delay(1000); 
}}}
