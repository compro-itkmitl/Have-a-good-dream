

# Have a good dream
   Caring for a newborn will be easier from now on. Getting up during the night, No time to comfort the crying baby, Need more time to do a house work, all of these will be solve by ‘ Have a good dream’,  a micro-controller project for Computer Programming 2017.

   Nowadays some parents don’t have enough time to put a baby to sleep, some of them have to do a work together with lullaby their baby. Have a good dream will help you by swaying a cradle to soothe your baby, in some occasion that your baby awakes and cries for more than 5 minutes, the cradle will send you a message. We also make it easy for everyone to use this device such as a nurse, a babysitter, a teenager and an elder. Accordingly you can enjoy more sleep, get more time and delight in looking after a baby. 

## Installation
1.  Install  [Arduino](https://www.arduino.cc/en/Main/Software)
2.  Install  [Arduino ESP8266 core](https://github.com/esp8266/Arduino#installing-with-boards-manager)
3.  Download  [FirebaseArduino library](https://github.com/googlesamples/firebase-arduino/archive/master.zip)
4. Download  [Metro library](https://github.com/thomasfredericks/Metro-Arduino-Wiring/archive/master.zip)
5. Unzip `Metro-Arduino-Wiring-master.zip` and move `Metro-Arduino-Wiring-master/Metro` to Arduino libaries
6.  Start Arduino
7.  Click  `Sketch > Include Library > Add .ZIP Library...`
8.  Choose  `firebase-arduino-master.zip` downloaded in step  `3`

## Configuration
1.  Start Arduino
2. Open `nodemcu/nodemcu.ino`
3. In `nodemcu.ino` : Replace `WIFI_SSID` and `WIFI_PASSWORD` with WiFi credentials
4. Go to [Line Notify](https://notify-bot.line.me/th/)
5. Login with Line account and Generate new token
6. In `nodemcu.ino` : Replace `LINE_TOKEN` with token in step `5`
7. In `nodemcu.ino` : Replace `CRADLE_ID` with your cradle's ID

##  Used
 1. Open your cradle
 2. Go to [have-a-sweet-dream.firebaseapp.com](https://have-a-sweet-dream.firebaseapp.com)
 3. Login with Facebook
 4. Fill your cradle's ID
 5. Click the switch to control your cradle
 6. If the baby cries for more than 5 minutes, the cradle will send a message to your Line app

## Author
 - 60070073 : Passawit Riewthong
 - 60070076 : Mareena Nuraman
 - 60070082 : Raksina Kanokwut


---
Faculty of Information Technology

King Mongkut's Institute of Technology Ladkrabang
