#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

SoftwareSerial NodeSerial(D2, D3); // RX | TX

#define WIFI_SSID "Passawit"
#define WIFI_PASSWORD "0914501330"
#define FIREBASE_HOST "have-a-sweet-dream.firebaseio.com"
#define FIREBASE_KEY "h4W53Y9c5GEOxeZ933hf9urhfRenw6t0EfpS1enf"

void setup() {
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
  Serial.begin(115200);

  NodeSerial.begin(4800);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("connecting...");
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(250);
     Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  Firebase.begin(FIREBASE_HOST, FIREBASE_KEY);

}

void loop() {
  // put your main code here, to run repeatedly:

}
