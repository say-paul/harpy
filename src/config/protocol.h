/*
This header defines the standard protocols used for communication.
GPIO Pin control to drive any peripheral
*/
#ifndef PROTOCOL_H_
#define PROTOCOL_H_

#include <iostream>

struct Spi 
{
    unsigned short int sck;
    unsigned short int cs;
    unsigned short int sdo;
    unsigned short int sda;
};

struct I2c
{
    unsigned short int sca;
    unsigned short int sda;
};

struct Uart
{
    unsigned short int tx;
    unsigned short int rx;
};

struct Gpio
{
    unsigned short int pin;
};

struct Nrf24l01
{
    unsigned short int sck;
    unsigned short int cs;
    unsigned short int miso;
    unsigned short int mosi;
    unsigned short int ce;
};

#endif