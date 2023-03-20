/*define the hardware and protocols
rp2040 has - 2X SPI
             2X I2C
             2X UART
*/
#define GYRO mpu9250
#define GYRO_PROTOCOL spi1
#define ACCEL mpu9250
#define ACCEL_PROTOCOL spi1
#define MAGNETO mpu9250
#define MAGNETO_PROTOCOL spi1
#define BARO bmp280
#define BARO_PROTOCOL spi1
#define GPS neo6m
#define GPS_PROTOCOL uart1
#define RADIO nrf24l01
#define RADIO_PROTOCOL spi2

/*
Pin config
Generic protocols
Peripherals i/o
*/
#define SPI1_SCK 15
#define SPI1_SDI 16
#define SPI1_SDO 16
#define GYRO_CSN 20
#define ACCEL_CSN 20
#define MAGNETO_CSN 20
#define BARO_CSN 21
#define UART1_RX 22
#define UART1_TX 23
#define SPI2_SCK 24
#define SPI2_SDI 25
#define SPI2_SDO 26
#define RADIO_CSN 27