/*
  Blink
  Enciende un LED por un segundo, lo apaga por otro segundo y luego repite

  La mayoría de los Arduinos tienen un LED que puedes controlar en la placa.
  En Arduino UNO y Leonardo, está conectado al pin digital 13. Si no estás
  seguro del pin al que está conectado el LED en tu modelo de Arduino, 
  revisa la documentación en http://www.arduino.cc

  Este código de ejemplo es de dominio público

  Modificado el 8 de mayo de 2014 por Scott Fitzgerald
  Traducido el 10 de agosto de 2015 por Matías Castillo Felmer
 */


// La función setuap corre una vez cuando presionas el botón de reinicio o cuando energizas la placa
void setup() {
  //inicializa el pin digital 13 como salida
  pinMode(13, OUTPUT);
}

// La función loop corre una y otra vez por siempre
void loop() {
  digitalWrite(13, HIGH);   // enciende el LED (nivel de voltaje alto)
  delay(1000);              // espera un segundo
  digitalWrite(13, LOW);    // apaga el LED (nivel de voltaje bajo)
  delay(1000);              // espera un segundo
}
