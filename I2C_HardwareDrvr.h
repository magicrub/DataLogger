/* 
 * File:   I2C_HardwareDrvr.h
 * Author: Brian
 *
 * Created on June 14, 2016, 8:40 AM
 */

#ifndef I2C_HARDWAREDRVR_H
#define	I2C_HARDWAREDRVR_H

#ifdef	__cplusplus
extern "C" {
#endif

//#include "HardwareProfile.h"
//#include "GLOBAL_VARS.h"
//#include <xc.h>
#include "pic32mx\include\xc.h"


 // Change below defines to I2C2xxx if using I2C2
#define I2CCON        I2C1CON
#define I2CCONbits    I2C1CONbits
#define I2CSTAT       I2C1STAT
#define I2CSTATbits   I2C1STATbits
#define I2CMSK        I2C1MSK
#define I2CRCV        I2C1RCV
#define I2CTRN        I2C1TRN
#define I2CADD        I2C1ADD
#define I2CBRG        I2C1BRG

#define FCL        800000// 400000 // Check the max speed supported by your peripheral!!

#define I2C_DEBUG   0 // Change to 1 for debug messages
 


static void I2C_Idle(void);
static BOOL I2C_Start(void);
static void I2C_Stop(void);
static BOOL I2C_SendByte(BYTE data);


void drvI2CInit(void);
BOOL drvI2CReadRegisters(UINT8 reg, UINT8* rxPtr, UINT8 len, UINT8 slave_adr);//UINT8 slave_adr
BOOL drvI2CWriteRegisters(UINT8 reg, UINT8* data, UINT8 len, UINT8 slave_adr);
BOOL drvI2CWriteByte(UINT8 reg, UINT8 byte, UINT8 slave_adr );


#ifdef	__cplusplus
}
#endif

#endif	/* I2C_HARDWAREDRVR_H */

