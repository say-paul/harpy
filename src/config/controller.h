/*
this defines the peripherals/sensors a the flight controller is connected to.
*/
#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include <iostream>
#include "protocol.h"

class Controller {
private:
/*
This struct defines the peripheral and the protocol to connect with rp2040
*/
struct Peripheral {
Spi mpu9250;
Spi bmp280;
Uart ubloxm6n;
Nrf24l01 nrf24l01;
Gpio servo1;
Gpio servo2;
Gpio servo3;
Gpio servo4;
};

public:
virtual void  getBoard (Peripheral *p);

//feature to check if all features are connected will be helpful
};

#endif