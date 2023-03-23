#include "controller.h"



void Controller::getBoard(Peripheral *p){

struct Peripheral peripheral;

peripheral.mpu9250.cs = 10;
peripheral.mpu9250.sck = 11;
peripheral.mpu9250.sda = 12;
peripheral.mpu9250.sdo = 13;

peripheral.bmp280.cs = 14;
peripheral.bmp280.sck =11;
peripheral.bmp280.sda = 12;
peripheral.bmp280.sdo = 13;

peripheral.ubloxm6n.rx = 2;
peripheral.ubloxm6n.tx = 3;

peripheral.nrf24l01.ce = 15;
peripheral.nrf24l01.cs = 16;
peripheral.nrf24l01.miso = 17;
peripheral.nrf24l01.mosi = 18;
peripheral.nrf24l01.sck = 19;

peripheral.servo1.pin = 20;
peripheral.servo2.pin = 21;
peripheral.servo3.pin = 22;
peripheral.servo4.pin = 23;

*p = peripheral;

}

