
# Have a good dream
This is a project for Computer Programming 2017.

## Installation
 - Download the [Arduino IDE](https://www.arduino.cc/en/Main/Software) and install to your computer.
![download Arduino IDE](https://user-images.githubusercontent.com/32861458/38161222-19483d34-34f5-11e8-8b55-f9c01261893e.png)

 - Download  [Firebase Arduino](https://github.com/firebase/firebase-arduino/archive/master.zip), [ESP8266WiFi](http://arduino-esp8266.readthedocs.io/) and add library to Arduino IDE.
![install libreries](https://user-images.githubusercontent.com/32861458/38161239-52b132ba-34f5-11e8-9e4a-11852f7e81d0.png)

 - Download and Install [driver](https://www.silabs.com/products/development-tools/software/usb-%20to-uart-bridge-vcp-drivers).

## Setup
 - WiFi
   - Set your wifi ssid to file `nodemcu/nodemcu.ino` in line `#define WIFI_SSID "<Your WiFi SSID>"`.
   -  Set your wifi password to file `nodemcu/nodemcu.ino` in line `#define WIFI_PASSWORD "<Your WiFi password>"`.

 - [Line Notify](https://notify-bot.line.me/th/)
   - Login to Line account and create new token.
![line01](https://user-images.githubusercontent.com/32861458/38353968-452dfb5a-38e2-11e8-93ec-d9061d69f2f1.png)

    - Copy your token to file `nodemcu/nodemcu.ino` in line `define LINE_TOKEN "<Your line token>"`.
![line02](https://user-images.githubusercontent.com/32861458/38354063-770f7f2c-38e2-11e8-82e6-539fbd0f8894.png)

- Cradle's ID
  - Setup your cradle's ID to file `nodemcu/nodemcu.ino` in line `#define CRADLE_ID "<Your cradle's ID>"`.

## Author
 - 60070073 : Passawit Riewthong
 - 60070076 : Mareena Nuraman
 - 60070082 : Raksina Kanokwut


---
Faculty of Information Technology

King Mongkut's Institute of Technology Ladkrabang