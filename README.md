# Air-Bass-Arduino-Processing
Hardware Design
This personal hardware project can simulate bass playing. See the Youtube demo video below to qucikly get how it works:
[<img width="400" alt="Screen Shot 2022-11-23 at 17 30 57" src="https://user-images.githubusercontent.com/55145817/203512756-12b85ec6-5bc4-4fdf-a8ff-82c812b81c1d.png">](https://youtu.be/9ROqD09el3I "Click to Watch!")

Music is an integral part of our daily life, but for most ordinary people, having a stringed instrument such as a guitar or a bass and taking the time to play it is a luxury. Therefore, we hope to design and build an air bass based on ultrasonic distance measurement, so that people can play the bass easily and practically with less cost and enjoy the music.
Compared to a real bass, the features of this selection are as follows.
1. detachable, variable handle length, easy to carry
2. controllable volume, not disturbing the public
3. low production price
4. using ultrasonic distance measurement, playing without wear and tear on the fingers, no effort

Compared with the software website of analog bass, the features of this selection are as follows.
1. with keys, playing experience is more realistic
2. Self-programming, more customizable parts and flexible
3. Using ultrasonic distance measurement, more interesting to play

There are five modules involved in this system: 
1. the MCU module: the Atemega328P chip is chosen as the core of this design, which accepts the data from the ultrasonic range module and the keypad module, sends them to the serial communication module, and then processes them in the software. The processed data is received from the serial communication module and sent to the display module.
2. the serial communication module: CH340G chip is selected to realize USB to serial port or USB to print port.
3. the keypad module: the TTP224 chip is selected to send the status of the four capacitive keys to the Atmega328P.
4. the ultrasonic distance measurement module: the off-the-shelf HC-SR04 ultrasonic distance measurement module is used to measure the distance from the obstacle to the ultrasonic wave and send the data to the Atmega328P.
5. the display module: an off-the-shelf 0.96-inch OLED module with a built-in chip SSD1306 is used to display the number of strings pressed by the current user.

The schematic of this board: 
<p align="center">
  <img alt="Light" src="https://user-images.githubusercontent.com/55145817/203513850-5bf0cbf3-c1d6-4a25-ab97-f6120ffb127d.png" width="45%">
&nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="Dark" src="https://user-images.githubusercontent.com/55145817/203513877-87f7ae3b-8a55-4eea-a7ce-d44cef7f9b80.png" width="45%">
</p>

<p align = "center">
<img alt="Light" src="https://user-images.githubusercontent.com/55145817/203514809-b2e79e58-662a-4938-938a-6b63da283dc9.jpeg" width="85%">
<p>


The PCB design and outcome of this board:
<p align="center">
  <img alt="Light" src="https://user-images.githubusercontent.com/55145817/203513741-095017b8-c8da-4dc2-aef6-993bc36b6224.png" width="45%">
&nbsp; &nbsp; &nbsp; &nbsp;
  <img alt="Dark" src="https://user-images.githubusercontent.com/55145817/203513914-df091c56-77c5-486e-aba3-3a2ee7a84bbd.png" width="45%">
</p>





