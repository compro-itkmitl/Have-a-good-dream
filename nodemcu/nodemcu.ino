#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <Metro.h>

Metro mic_Metro = Metro(1000); 
#define WIFI_SSID "<Your WiFi SSID>"
#define WIFI_PASSWORD "<Your WiFi password>"
#define LINE_TOKEN "<Your line token>"
#define CRADLE_ID "<Your cradle's ID>"
#define FIREBASE_HOST "have-a-sweet-dream.firebaseio.com"
#define FIREBASE_KEY "h4W53Y9c5GEOxeZ933hf9urhfRenw6t0EfpS1enf"
#define MIC A0
#define RX D1
#define TX D0

String message = "The baby needs you", id_get;
int io_status, count_voice = 0;

void Line_Notify(String message) ;
