/* 
 * File:   spi.h
 * Author: Kyle Aldrich
 *
 * Created on May 2, 2017, 10:23 PM
 */

#ifndef SPI_H
#define	SPI_H

#ifdef	__cplusplus
extern "C" {
#endif

#ifdef	__cplusplus
}
#endif
void setVoltage(char channel, char voltage);
void initSPI1();
char SPI1_IO(char write);

#endif	/* SPI_H */

