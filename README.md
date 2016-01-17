# arduino-projects
Arduino Projects

## Adafruit HUZZAH Intructions
```
    $ cd /Applications/Arduino.app/Contents/Java/hardware
    $ mkdir esp8266com
    $ cd esp8266com
    $ git clone https://github.com/esp8266/Arduino.git esp8266
    $ cd esp8266/tools
    $ python get.py
```

Connect GPIO0 on the HUZZAH to GND on the HUZZAH


## Setup Arduino for the SHARP IR Sensor GP2Y0A02YK

1. Download the file [here](https://dl.dropboxusercontent.com/u/21592548/SharpIR.zip).
2. In the Arduino IDE select **Sketch** >> **Include Library** >> **Manage Libraries...**
3. Browse to the downloaded SharpIR.zip

To include library in code, in the Arduino IDE select **Sketch** >> **Include Library** >> **SharpIR** (under *Contributed Libraries*).