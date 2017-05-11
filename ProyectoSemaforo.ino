//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Proyecto Semaforo
// 
// Made by Emmanuel Lucio U
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4804347-proyecto-semaforo

int verde = 13;int amarillo = 12;int rojo = 11;int seg = 1000;int seg2 = 5000;// En setut iniciamos las variabes y otras funcionesvoid setup() {  // Iniciamos las salidas del arduino  pinMode(verde, OUTPUT);  pinMode(rojo, OUTPUT);  pinMode(amarillo, OUTPUT);}// Funcion LOOP que se ejecuta como while(true)void loop() {  //inicia verde  digitalWrite(verde, HIGH);     delay(seg2);  //espera 2 segundos antes de apagarse  //inicia parpadeo  digitalWrite(verde, LOW);  delay(300);  digitalWrite(verde, HIGH);  delay(300);  digitalWrite(verde, LOW);  delay(300);  digitalWrite(verde, HIGH);  delay(300);  //fin parpadeo  digitalWrite(verde, LOW);       //inicia amarillo  digitalWrite(amarillo, HIGH);  delay(1000);  //inicia parpadeo  digitalWrite(amarillo, LOW);  delay(300);  digitalWrite(amarillo, HIGH);  delay(300);  digitalWrite(amarillo, LOW);  delay(300);  digitalWrite(amarillo, HIGH);  delay(300);  //fin parpadeo  digitalWrite(amarillo, LOW);   //inicia rojo  digitalWrite(rojo,HIGH);     delay(seg2);  digitalWrite(rojo,LOW); }
