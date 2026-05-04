/*
 * ============================================================
 * Proyecto  : dado electronico
 * Archivo   : nombre_archivo.ino
 * Autor     : cristopher
 * Fecha     : 04/05/2026
 * Version   : 1.0
 * ============================================================
 * Descripcion:
 *   cada vez que se pulsa el boton se va a encender
 *   una cantidad aleatoria de leds
 * Hardware:
 *   - Arduino UNO
 *   - protoboard
 *   - leds 6
 *   - resistencias (220) 7
 *   - pulsador
 *   - cables de conexion
* Notas:
 *   - se demoran en cambiar los leds
 * ===========================================================
 */

int leds[] = {13, 5, 2, 11, 9, 7};
int numero1[] = {1, 0, 0, 0, 0, 0};
int numero2[] = {1, 0, 0, 0, 0, 1};
int numero3[] = {1, 0, 1, 0, 1, 0};
int numero4[] = {1, 0, 1, 1, 0, 1};
int numero5[] = {1, 1, 1, 1, 0, 1};
int numero6[] = {1, 1, 1, 1, 1, 1};
int boton = 3;
int lec;  

void setup()
{ 
  for(int i = 0;i<6;i++){
   pinMode(leds[i], OUTPUT);
}
   randomSeed(analogRead(A0));
   Serial.begin(9600);
}

void loop()
{ 
 lec = digitalRead(3);
  if(lec==0){
   int numero = random(1, 7);
   Serial.println(numero);
    switch(numero){
     case(1):{
      for(int i = 0;i<6;i++){
      digitalWrite(leds[i], numero1[i]);  
	 }
       break;}
     case(2):{
      for(int i = 0;i<6;i++){
      digitalWrite(leds[i], numero2[i]);  
 	 }
       break;}
     case(3):{
      for(int i = 0;i<6;i++){
   	  digitalWrite(leds[i], numero3[i]);  
	 }
       break;}
     case(4):{
      for(int i = 0;i<6;i++){
      digitalWrite(leds[i], numero4[i]);  
     }
      break;}
     case(5):{
      for(int i = 0;i<6;i++){
      digitalWrite(leds[i], numero5[i]);  
	 }
       break;}
     case(6):{
      for(int i = 0;i<6;i++){
      digitalWrite(leds[i], numero6[i]);  
	 }
       break;}
     default:{break;}
}
}
}
