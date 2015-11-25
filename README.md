#Wio Link




[![Wio Link](http://www.seeedstudio.com/wiki/images/c/ce/Wio-link-111.jpeg)](http://iot.seeed.cc)


## Introduction
Wio Link is an ESP8266 based WiFi dev board to create IoT applications with plug-n-play modules,mobile Apps and Restful APIs. The key feature of this project is that users never need to program one line of code before he get all the Grove modules into Web of Things. 

Features:

* Totally open sourced for both software and hardware
* No need microcontroller programming
* Config with GUI
* Web of Things for hundreds of Grove modules (covering most IOT application domains)
* WiFi enabled with ESP8266 which is not expensive to have
* Security enhenced (AES for session between node & server, https for API calls)
* RESTful APIs for application 
* Lightweighted and open sourced broker server based on Tornado


[Video: 3 Steps. 5 Minutes. Build IoT Device.](https://www.youtube.com/watch?v=P_SO_a6X-y0#action=share)




## Developing Status

Done:

* Grove driver framework for cloud compiling
* Talk between node and server via AES encryption
* Property getting & action posting APIs
* User management APIs
* Nodes management APIs
* Cloud compiling APIs
* OTA control APIs
* Mobile App 1st launch version, iOS + Android

On the plan:

* Integration with Seeed unified user login interface
* Local broker server for Web of Things invoking.


## Documentation

* [API Documentation](https://github.com/Seeed-Studio/Wio_Link/wiki/API%20Documentation)
* [Server Deployment Guide](https://github.com/Seeed-Studio/Wio_Link/wiki/Server%20Deployment%20Guide)
* [Advanced User Guide](https://github.com/Seeed-Studio/Wio_Link/wiki/Advanced%20User%20Guide)


## How to write module driver for Wio Link? 

Please move to this [guide](https://github.com/Seeed-Studio/Wio_Link/wiki/How-to-write-module-driver-for-Wio-Link%3F).

## License

This project is developed by <xuguang.shao@seeed.cc> for seeed studio. This project is licensed under [The MIT License](http://opensource.org/licenses/mit-license.php). 

[![Analytics](https://ga-beacon.appspot.com/UA-46589105-3/Wio_Link)](https://github.com/igrigorik/ga-beacon)