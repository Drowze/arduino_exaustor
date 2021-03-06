/* 
Simulador de exaustor de cozinha
*/     
#define SAIDA_CHUVA 2
#define SAIDA_LDR 8

#define ENT_CHUVA 3
#define ENT_LDR A0

unsigned long timer;

int ldr; //Variável para a leitura do LDR
int cont; //Variável utilizada para armazenar os valores temporários lidos pelo LDR
int i; //Variável para contagem

void setup(){
  Serial.begin(9600);
  
  pinMode(ENT_CHUVA, INPUT);
	
  pinMode(SAIDA_CHUVA, OUTPUT);
  pinMode(SAIDA_LDR, OUTPUT);
}

void loop(){
  if (digitalRead(ENT_CHUVA) == 0){
    timer = millis(); //renovo a variavel timer
    digitalWrite(SAIDA_CHUVA, HIGH); //ligo a saída do sensor de chuva
    
    Serial.print(digitalRead(ENT_CHUVA));
    Serial.println(" Saida do sensor de chuva ligada");
  }
  else{
    if(millis() - timer >= 10000UL){ //checo se já fazem 10 segundos desde a ultima mudança de timer
      digitalWrite(SAIDA_CHUVA, LOW); // se fizer mais de 10 segundos, desligo a saída
      Serial.println(" saida do sensor de chuva desligada");
    }
    Serial.print(digitalRead(ENT_CHUVA));
    Serial.println(" Seco");
  }
  
  ldr=0; //Zera a variável LDR
  for(i=0;i<=10;i++){ //Faz 10 vezes a leitura do sensor
    cont=analogRead(A0); //Lê o valor do sensor (LDR ligado ao pino A0) e guarda na variável LDR
    ldr += cont; //Armazenamento na varíavel LDR o valor lido + o valor anterior
    delay(10); //Delay se 10 milissegundos
  }
  ldr /= 10; //Divide o valor armazenado por 10
  Serial.println(ldr); //Imprime o valor do LDR

  (ldr >= 400) ? (digitalWrite(SAIDA_LDR,HIGH)) : (digitalWrite(SAIDA_LDR,LOW));
  //Se o valor lido (luminosidade) for maior ou igual a 400, ligo a saída, se não desligo
  delay(500);
}
