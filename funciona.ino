/* Exemplo do Sensor de Chuva
Equipe LdG
*/     
#define SAIDA_CHUVA 2
//#define SAIDA_LDR 8

#define ENT_CHUVA 3
//#define ENT_LDR A0

unsigned long timer;

//int sensordechuva = 3; //entrada pro arduino
//int ldr
void setup(){
  Serial.begin(9600);
  pinMode(SAIDA_CHUVA, OUTPUT);
  //pinMode(SAIDA2, OUTPUT);
  pinMode(ENT_CHUVA, INPUT);
}

void loop(){
  if (digitalRead(ENT_CHUVA) == 0){
    timer = millis(); //renovo a variavel timer
    digitalWrite(SAIDA_CHUVA, HIGH);
    Serial.println("Saida do sensor de chuva ligada");
    
    Serial.print(digitalRead(ENT_CHUVA));
    Serial.println(" Chuva");
    //delay(2000);
  }
  else{
    if(millis() - timer >= 10000UL){ //checo se já fazem 10 segundos desde a ultima mudança de timer
      digitalWrite(SAIDA_CHUVA, LOW); // deixo a ventoinha ligada por 10 segundos (substitui a funcao delay)
    }
    Serial.print(digitalRead(ENT_CHUVA));
    Serial.println(" Seco, saida do sensor de chuva desligada");
  }
  
  
  delay(500);
}
