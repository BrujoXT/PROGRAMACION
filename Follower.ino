int Der = 900;
int Izq = 900   ;


void setup() { 
  Serial.begin(9600);

  //Motor derecho
  motorSpeed(M1,63);
  //Motor izquierdo
  motorSpeed(M2,60); // escribe código aquí, para que se ejecute una sola vez:

}

void loop() {

 Serial.print("J2 = ");
  Serial.print(sensorRead(J5));
  Serial.print("        ");
  Serial.print("J1 = ");  
  Serial.println(sensorRead(J4));
  
  delay(50);
// while(ultrasoundRead(J3) > 26){  //Si la linea esta en el centro de los dos sensores
  if (sensorRead(J4) < Der  && sensorRead(J5) < Izq) {
    goForward(M1,M2);
  }

  //si el sensor de la derecha lee blanco
  else if (sensorRead(J4) > Der && sensorRead(J5) < Izq) {
    turnRight(M2 , M1);
  }

  //si el sensor de la izquierda lee blanco
  else if (sensorRead(J4) < Der && sensorRead(J5) > Izq) {
      turnLeft(M2 , M1);
  }


}
