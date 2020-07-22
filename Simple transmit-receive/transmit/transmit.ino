#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(9, 10); // CE, CSN
const byte address[6] = "00001";
void setup() {
  Serial.begin(9600);
  Serial.println("transmitter");
  
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
  const char text[] = "It's working";
  radio.write(&text, sizeof(text));
  delay(1000);
}
