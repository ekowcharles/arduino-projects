# arduino-projects
Arduino Projects

## Preparing to use the Adafruit HUZZAH with Arduino
If you are using a Mac, run the following commands:
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


## Why HTTP is bad for IoT

```
Requesting URL: /testwifi/index.html
HTTP/1.1 200 OK
Date: Sun, 17 Jan 2016 00:48:47 GMT
Content-Type: text/html
Transfer-Encoding: chunked
Connection: close
Set-Cookie: __cfduid=d5e0d29dbec25077163f1ecba9f3a59791452991727; expires=Mon, 16-Jan-17 00:48:47 GMT; path=/; domain=.adafruit.com; HttpOnly
Accept-Ranges: bytes
Access-Control-Allow-Credentials: true
Access-Control-Allow-Headers: Origin, X-Requested-With, Content-Type, Accept, Accept-Encoding, Authorization, Referer, User-Agent
Access-Control-Allow-Methods: GET, POST, OPTIONS
Access-Control-Max-Age: 1728000
Cf-Railgun: direct (starting new WAN connection)
Last-Modified: Thu, 27 Jun 2013 14:13:27 GMT
Vary: Accept-Encoding
Server: cloudflare-nginx
CF-RAY: 265e0e7a0faf0323-MIA
```

Just too much verbosity in communication (especially in the header) besides the handshaking overhead. **MQTT** offers something better.