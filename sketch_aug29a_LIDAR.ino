const int pinoLaser = A5; //PINO DIGITAL UTILIZADO PELO MÓDULO LASER
const int pinoReceptor = A4; //PINO DIGITAL UTILIZADO PELO MÓDULO RECEPTOR DE LASER
 int ledpin=5;
 
int leitura; //CRIA UMA VARIÁVEL CHAMADA "LEITURA" DO TIPO INTEIRO
 
void setup(){
  digitalWrite(ledpin,INPUT);
pinMode(pinoLaser, OUTPUT); //DEFINE O PINO COMO ENTRADA
pinMode(pinoReceptor, INPUT); //DEFINE O PINO COMO SAÍDA
analogWrite(pinoLaser, INPUT); //MÓDULO LASER INICIA LIGADO
Serial.begin(9600);
}
 
void loop(){
  
    if(leitura == 50){ // SE "leitura" FOR IGUAL A 1, FAZ}
     
      
      int leitura = analogRead(A5);
      
      digitalWrite(ledpin,HIGH);
      Serial.println(leitura);

      delay(1000);
      delay(1);        // delay in between reads for stability
      return 0;
}
}
