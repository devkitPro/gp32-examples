/* SDK V0.90 Mirko Roller */

#ifndef GP32_H
#define GP32_H

#ifndef NULL
#define NULL 0
#endif

typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned long   u32;

typedef volatile unsigned char  vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long  vu32;

typedef signed char     s8;
typedef signed short    s16;
typedef signed long     s32;

typedef unsigned char   byte;
typedef unsigned short  hword;
typedef unsigned long   word;

#define PI 3.14159
#define RADIAN(n)       (((float)n)/(float)180*PI)

#define BIT00 1
#define BIT01 2
#define BIT02 4
#define BIT03 8
#define BIT04 16
#define BIT05 32
#define BIT06 64
#define BIT07 128
#define BIT08 256
#define BIT09 512
#define BIT10 1024
#define BIT11 2048
#define BIT12 4096
#define BIT13 8192
#define BIT14 16384
#define BIT15 32768


//////////////////////////////////////////////////////////////////////////////
// Defines                                                                  //
//////////////////////////////////////////////////////////////////////////////
/* Memory control */
#define rBWSCON         (*(volatile unsigned *)0x14000000)
#define rBANKCON0       (*(volatile unsigned *)0x14000004)
#define rBANKCON1       (*(volatile unsigned *)0x14000008)
#define rBANKCON2       (*(volatile unsigned *)0x1400000c)
#define rBANKCON3       (*(volatile unsigned *)0x14000010)
#define rBANKCON4       (*(volatile unsigned *)0x14000014)
#define rBANKCON5       (*(volatile unsigned *)0x14000018)
#define rBANKCON6       (*(volatile unsigned *)0x1400001c)
#define rBANKCON7       (*(volatile unsigned *)0x14000020)
#define rREFRESH        (*(volatile unsigned *)0x14000024)
#define rBANKSIZE       (*(volatile unsigned *)0x14000028)
#define rMRSRB6         (*(volatile unsigned *)0x1400002c)
#define rMRSRB7         (*(volatile unsigned *)0x14000030)

/* INTERRUPT */
#define rSRCPND         (*(volatile unsigned *)0x14400000)
#define rINTMOD         (*(volatile unsigned *)0x14400004)
#define rINTMSK         (*(volatile unsigned *)0x14400008)
#define rPRIORITY       (*(volatile unsigned *)0x1440000c)
#define rINTPND         (*(volatile unsigned *)0x14400010)
#define rINTOFFSET      (*(volatile unsigned *)0x14400014)

/* DMA */
#define rDISRC0         (*(volatile unsigned *)0x14600000)
#define rDIDST0         (*(volatile unsigned *)0x14600004)
#define rDCON0          (*(volatile unsigned *)0x14600008)
#define rDSTAT0         (*(volatile unsigned *)0x1460000c)
#define rDCSRC0         (*(volatile unsigned *)0x14600010)
#define rDCDST0         (*(volatile unsigned *)0x14600014)
#define rDMASKTRIG0     (*(volatile unsigned *)0x14600018)
#define rDISRC1         (*(volatile unsigned *)0x14600020)
#define rDIDST1         (*(volatile unsigned *)0x14600024)
#define rDCON1          (*(volatile unsigned *)0x14600028)
#define rDSTAT1         (*(volatile unsigned *)0x1460002c)
#define rDCSRC1         (*(volatile unsigned *)0x14600030)
#define rDCDST1         (*(volatile unsigned *)0x14600034)
#define rDMASKTRIG1     (*(volatile unsigned *)0x14600038)
#define rDISRC2         (*(volatile unsigned *)0x14600040)
#define rDIDST2         (*(volatile unsigned *)0x14600044)
#define rDCON2          (*(volatile unsigned *)0x14600048)
#define rDSTAT2         (*(volatile unsigned *)0x1460004c)
#define rDCSRC2         (*(volatile unsigned *)0x14600050)
#define rDCDST2         (*(volatile unsigned *)0x14600054)
#define rDMASKTRIG2     (*(volatile unsigned *)0x14600058)
#define rDISRC3         (*(volatile unsigned *)0x14600060)
#define rDIDST3         (*(volatile unsigned *)0x14600064)
#define rDCON3          (*(volatile unsigned *)0x14600068)
#define rDSTAT3         (*(volatile unsigned *)0x1460006c)
#define rDCSRC3         (*(volatile unsigned *)0x14600070)
#define rDCDST3         (*(volatile unsigned *)0x14600074)
#define rDMASKTRIG3     (*(volatile unsigned *)0x14600078)

/* CLOCK & POWER MANAGEMENT */
#define rLOCKTIME       (*(volatile unsigned *)0x14800000)
#define rMPLLCON        (*(volatile unsigned *)0x14800004)
#define rUPLLCON        (*(volatile unsigned *)0x14800008)
#define rCLKCON         (*(volatile unsigned *)0x1480000c)
#define rCLKSLOW        (*(volatile unsigned *)0x14800010)
#define rCLKDIVN        (*(volatile unsigned *)0x14800014)

/* LCD CONTROLLER */
#define rLCDCON1        (*(volatile unsigned *)0x14a00000)
#define rLCDCON2        (*(volatile unsigned *)0x14a00004)
#define rLCDCON3        (*(volatile unsigned *)0x14a00008)
#define rLCDCON4        (*(volatile unsigned *)0x14a0000c)
#define rLCDCON5        (*(volatile unsigned *)0x14a00010)
#define rLCDSADDR1      (*(volatile unsigned *)0x14a00014)
#define rLCDSADDR2      (*(volatile unsigned *)0x14a00018)
#define rLCDSADDR3      (*(volatile unsigned *)0x14a0001c)
#define rREDLUT         (*(volatile unsigned *)0x14a00020)
#define rGREENLUT       (*(volatile unsigned *)0x14a00024)
#define rBLUELUT        (*(volatile unsigned *)0x14a00028)
#define rDP1_2          (*(volatile unsigned *)0x14a0002c)
#define rDP4_7          (*(volatile unsigned *)0x14a00030)
#define rDP3_5          (*(volatile unsigned *)0x14a00034)
#define rDP2_3          (*(volatile unsigned *)0x14a00038)
#define rDP5_7          (*(volatile unsigned *)0x14a0003c)
#define rDP3_4          (*(volatile unsigned *)0x14a00040)
#define rDP4_5          (*(volatile unsigned *)0x14a00044)
#define rDP6_7          (*(volatile unsigned *)0x14a00048)
#define rDITHMODE       (*(volatile unsigned *)0x14a0004c)
#define rTPAL           (*(volatile unsigned *)0x14a00050) // 
#define PALETTE         0x14a00400 // 256*32Bit // only Bit 0-15 are used

/* UART */
#define rULCON0         (*(volatile unsigned *)0x15000000)
#define rUCON0          (*(volatile unsigned *)0x15000004)
#define rUFCON0         (*(volatile unsigned *)0x15000008)
#define rUMCON0         (*(volatile unsigned *)0x1500000c)
#define rUTRSTAT0       (*(volatile unsigned *)0x15000010)
#define rUERSTAT0       (*(volatile unsigned *)0x15000014)
#define rUFSTAT0        (*(volatile unsigned *)0x15000018)
#define rUMSTAT0        (*(volatile unsigned *)0x1500001c)
#define rUBRDIV0        (*(volatile unsigned *)0x15000028)

#define rULCON1         (*(volatile unsigned *)0x15004000)
#define rUCON1          (*(volatile unsigned *)0x15004004)
#define rUFCON1         (*(volatile unsigned *)0x15004008)
#define rUMCON1         (*(volatile unsigned *)0x1500400c)
#define rUTRSTAT1       (*(volatile unsigned *)0x15004010)
#define rUERSTAT1       (*(volatile unsigned *)0x15004014)
#define rUFSTAT1        (*(volatile unsigned *)0x15004018)
#define rUMSTAT1        (*(volatile unsigned *)0x1500401c)
#define rUBRDIV1        (*(volatile unsigned *)0x15004028)

#define rUTXH0          (*(volatile unsigned char *)0x15000020)
#define rURXH0          (*(volatile unsigned char *)0x15000024)
#define rUTXH1          (*(volatile unsigned char *)0x15004020)
#define rURXH1          (*(volatile unsigned char *)0x15004024)

#define WrUTXH0(ch)     (*(volatile unsigned char *)0x15000020)=(unsigned char)(ch)
#define RdURXH0()       (*(volatile unsigned char *)0x15000024)
#define WrUTXH1(ch)     (*(volatile unsigned char *)0x15004020)=(unsigned char)(ch)
#define RdURXH1()       (*(volatile unsigned char *)0x15004024)

#define UTXH0           (0x15000020)    //byte_access address by DMA
#define URXH0           (0x15000024)
#define UTXH1           (0x15004020)
#define URXH1           (0x15004024)

/* PWM TIMER */
#define rTCFG0          (*(volatile unsigned *)0x15100000)
#define rTCFG1          (*(volatile unsigned *)0x15100004)
#define rTCON           (*(volatile unsigned *)0x15100008)
#define rTCNTB0         (*(volatile unsigned *)0x1510000c)
#define rTCMPB0         (*(volatile unsigned *)0x15100010)
#define rTCNTO0         (*(volatile unsigned *)0x15100014)
#define rTCNTB1         (*(volatile unsigned *)0x15100018)
#define rTCMPB1         (*(volatile unsigned *)0x1510001c)
#define rTCNTO1         (*(volatile unsigned *)0x15100020)
#define rTCNTB2         (*(volatile unsigned *)0x15100024)
#define rTCMPB2         (*(volatile unsigned *)0x15100028)
#define rTCNTO2         (*(volatile unsigned *)0x1510002c)
#define rTCNTB3         (*(volatile unsigned *)0x15100030)
#define rTCMPB3         (*(volatile unsigned *)0x15100034)
#define rTCNTO3         (*(volatile unsigned *)0x15100038)
#define rTCNTB4         (*(volatile unsigned *)0x1510003c)
#define rTCNTO4         (*(volatile unsigned *)0x15100040)

/* USB DEVICE */
#define rFUNC_ADDR_REG  (*(volatile unsigned *)0x15200140)
#define rPWR_REG        (*(volatile unsigned *)0x15200144)
#define rINT_REG        (*(volatile unsigned *)0x15200148)
#define rINT_MASK_REG   (*(volatile unsigned *)0x1520014c)
#define rFRAME_NUM_REG  (*(volatile unsigned *)0x15200150)
#define rRESUME_CON_REG (*(volatile unsigned *)0x15200154)
#define rEP0_CSR        (*(volatile unsigned *)0x15200160)
#define rEP0_MAXP       (*(volatile unsigned *)0x15200164)
#define rEP0_OUT_CNT    (*(volatile unsigned *)0x15200168)
#define rEP0_FIFO       (*(volatile unsigned *)0x1520016c)
#define rEP1_IN_CSR     (*(volatile unsigned *)0x15200180)
#define rEP1_IN_MAXP    (*(volatile unsigned *)0x15200184)
#define rEP1_FIFO       (*(volatile unsigned *)0x15200188)
#define rEP2_IN_CSR     (*(volatile unsigned *)0x15200190)
#define rEP2_IN_MAXP    (*(volatile unsigned *)0x15200194)
#define rEP2_FIFO       (*(volatile unsigned *)0x15200198)
#define rEP3_OUT_CSR    (*(volatile unsigned *)0x152001a0)
#define rEP3_OUT_MAXP   (*(volatile unsigned *)0x152001a4)
#define rEP3_OUT_CNT    (*(volatile unsigned *)0x152001a8)
#define rEP3_FIFO       (*(volatile unsigned *)0x152001ac)
#define rEP4_OUT_CSR    (*(volatile unsigned *)0x152001b0)
#define rEP4_OUT_MAXP   (*(volatile unsigned *)0x152001b4)
#define rEP4_OUT_CNT    (*(volatile unsigned *)0x152001b8)
#define rEP4_FIFO       (*(volatile unsigned *)0x152001bc)
#define rDMA_CON        (*(volatile unsigned *)0x152001c0)
#define rDMA_UNIT       (*(volatile unsigned *)0x152001c4)
#define rDMA_FIFO       (*(volatile unsigned *)0x152001c8)
#define rDMA_TX         (*(volatile unsigned *)0x152001cc)
#define rTEST_MODE      (*(volatile unsigned *)0x152001f4)
#define rIN_CON_REG     (*(volatile unsigned *)0x152001f8)

/* WATCH DOG TIMER */
#define rWTCON          (*(volatile unsigned *)0x15300000)
#define rWTDAT          (*(volatile unsigned *)0x15300004)
#define rWTCNT          (*(volatile unsigned *)0x15300008)

/* IIC */
#define rIICCON         (*(volatile unsigned *)0x15400000)
#define rIICSTAT        (*(volatile unsigned *)0x15400004)
#define rIICADD         (*(volatile unsigned *)0x15400008)
#define rIICDS          (*(volatile unsigned *)0x1540000c)

/* IIS */
#define rIISCON         (*(volatile unsigned *)0x15508000)
#define rIISMOD         (*(volatile unsigned *)0x15508004)
#define rIISPSR         (*(volatile unsigned *)0x15508008)
#define rIISFIFCON      (*(volatile unsigned *)0x1550800c)
#define IISFIF          ((volatile unsigned short *)0x15508010)

/* I/O PORT */
#define rPACON          (*(volatile unsigned *)0x15600000)
#define rPADAT          (*(volatile unsigned *)0x15600004)

#define rPBCON          (*(volatile unsigned *)0x15600008)
#define rPBDAT          (*(volatile unsigned *)0x1560000c)
#define rPBUP           (*(volatile unsigned *)0x15600010)

#define BUTTON_LEFT     1
#define BUTTON_DOWN     2
#define BUTTON_RIGHT    4
#define BUTTON_UP       8
#define BUTTON_L       16
#define BUTTON_B       32
#define BUTTON_A       64
#define BUTTON_R      128
#define BUTTON_START  256
#define BUTTON_SELECT 512

#define rPCCON          (*(volatile unsigned *)0x15600014)
#define rPCDAT          (*(volatile unsigned *)0x15600018)
#define rPCUP           (*(volatile unsigned *)0x1560001c)

#define rPDCON          (*(volatile unsigned *)0x15600020)
#define rPDDAT          (*(volatile unsigned *)0x15600024)
#define rPDUP           (*(volatile unsigned *)0x15600028)

#define rPECON          (*(volatile unsigned *)0x1560002c)
#define rPEDAT          (*(volatile unsigned *)0x15600030)
#define rPEUP           (*(volatile unsigned *)0x15600034)

#define rPFCON          (*(volatile unsigned *)0x15600038)
#define rPFDAT          (*(volatile unsigned *)0x1560003c)
#define rPFUP           (*(volatile unsigned *)0x15600040)

#define rPGCON          (*(volatile unsigned *)0x15600044)
#define rPGDAT          (*(volatile unsigned *)0x15600048)
#define rPGUP           (*(volatile unsigned *)0x1560004c)

#define rOPENCR         (*(volatile unsigned *)0x15600050)
#define rMISCCR         (*(volatile unsigned *)0x15600054)
#define rEXTINT         (*(volatile unsigned *)0x15600058)

/* RTC */
#define rRTCCON         (*(volatile unsigned char *)0x15700040)
#define rRTCALM         (*(volatile unsigned char *)0x15700050)
#define rALMSEC         (*(volatile unsigned char *)0x15700054)
#define rALMMIN         (*(volatile unsigned char *)0x15700058)
#define rALMHOUR        (*(volatile unsigned char *)0x1570005c)
#define rALMDAY         (*(volatile unsigned char *)0x15700060)
#define rALMMON         (*(volatile unsigned char *)0x15700064)
#define rALMYEAR        (*(volatile unsigned char *)0x15700068)
#define rRTCRST         (*(volatile unsigned char *)0x1570006c)
#define rBCDSEC         (*(volatile unsigned char *)0x15700070)
#define rBCDMIN         (*(volatile unsigned char *)0x15700074)
#define rBCDHOUR        (*(volatile unsigned char *)0x15700078)
#define rBCDDAY         (*(volatile unsigned char *)0x1570007c)
#define rBCDDATE        (*(volatile unsigned char *)0x15700080)
#define rBCDMON         (*(volatile unsigned char *)0x15700084)
#define rBCDYEAR        (*(volatile unsigned char *)0x15700088)
#define rTICINT         (*(volatile unsigned char *)0x15700044)

/* ADC */
#define rADCCON         (*(volatile unsigned *)0x15800000)
#define rADCDAT         (*(volatile unsigned *)0x15800004)

/* SPI */
#define rSPCON          (*(volatile unsigned *)0x15900000)
#define rSPSTA          (*(volatile unsigned *)0x15900004)
#define rSPPIN          (*(volatile unsigned *)0x15900008)
#define rSPPRE          (*(volatile unsigned *)0x1590000c)
#define rSPTDAT         (*(volatile unsigned *)0x15900010)
#define rSPRDAT         (*(volatile unsigned *)0x15900014)

/* MMC INTERFACE */
#define rMMCON          (*(volatile unsigned char *)0x15a00000)
#define rMMCRR          (*(volatile unsigned char *)0x15a00004)
#define rMMFCON         (*(volatile unsigned char *)0x15a00008)
#define rMMSTA          (*(volatile unsigned char *)0x15a0000c)
#define rMMFSTA         (*(volatile unsigned short *)0x15a00010)
#define rMMPRE          (*(volatile unsigned char *)0x15a00014)
#define rMMLEN          (*(volatile unsigned short *)0x15a00018)
#define rMMCR7          (*(volatile unsigned *)0x15a0001c)
#define rMMRSP0         (*(volatile unsigned *)0x15a00020)
#define rMMRSP1         (*(volatile unsigned *)0x15a00024)
#define rMMRSP2         (*(volatile unsigned *)0x15a00028)
#define rMMRSP3         (*(volatile unsigned *)0x15a0002c)
#define rMMCMD0         (*(volatile unsigned char *)0x15a00030)
#define rMMCMD1         (*(volatile unsigned *)0x15a00034)
#define rMMCR16         (*(volatile unsigned short *)0x15a00038)
#define rMMDAT          (*(volatile unsigned char *)0x15a0003c)

/* ISR */
#define pISR_RESET      (*(unsigned *)(_ISR_STARTADDRESS+0x0))
#define pISR_UNDEF      (*(unsigned *)(_ISR_STARTADDRESS+0x4))
#define pISR_SWI        (*(unsigned *)(_ISR_STARTADDRESS+0x8))
#define pISR_PABORT     (*(unsigned *)(_ISR_STARTADDRESS+0xc))
#define pISR_DABORT     (*(unsigned *)(_ISR_STARTADDRESS+0x10))
#define pISR_RESERVED   (*(unsigned *)(_ISR_STARTADDRESS+0x14))
#define pISR_IRQ        (*(unsigned *)(_ISR_STARTADDRESS+0x18))
#define pISR_FIQ        (*(unsigned *)(_ISR_STARTADDRESS+0x1c))

#define pISR_EINT0      (*(unsigned *)(_ISR_STARTADDRESS+0x20))
#define pISR_EINT1      (*(unsigned *)(_ISR_STARTADDRESS+0x24))
#define pISR_EINT2      (*(unsigned *)(_ISR_STARTADDRESS+0x28))
#define pISR_EINT3      (*(unsigned *)(_ISR_STARTADDRESS+0x2c))
#define pISR_EINT4      (*(unsigned *)(_ISR_STARTADDRESS+0x30))
#define pISR_EINT5      (*(unsigned *)(_ISR_STARTADDRESS+0x34))
#define pISR_EINT6      (*(unsigned *)(_ISR_STARTADDRESS+0x38))
#define pISR_EINT7      (*(unsigned *)(_ISR_STARTADDRESS+0x3c))
#define pISR_TICK       (*(unsigned *)(_ISR_STARTADDRESS+0x40))
#define pISR_WDT        (*(unsigned *)(_ISR_STARTADDRESS+0x44))
#define pISR_TIMER0     (*(unsigned *)(_ISR_STARTADDRESS+0x48))
#define pISR_TIMER1     (*(unsigned *)(_ISR_STARTADDRESS+0x4c))
#define pISR_TIMER2     (*(unsigned *)(_ISR_STARTADDRESS+0x50))
#define pISR_TIMER3     (*(unsigned *)(_ISR_STARTADDRESS+0x54))
#define pISR_TIMER4     (*(unsigned *)(_ISR_STARTADDRESS+0x58))
#define pISR_UERR01     (*(unsigned *)(_ISR_STARTADDRESS+0x5c))
#define pISR_NOTUSED    (*(unsigned *)(_ISR_STARTADDRESS+0x60))
#define pISR_DMA0       (*(unsigned *)(_ISR_STARTADDRESS+0x64))
#define pISR_DMA1       (*(unsigned *)(_ISR_STARTADDRESS+0x68))
#define pISR_DMA2       (*(unsigned *)(_ISR_STARTADDRESS+0x6c))
#define pISR_DMA3       (*(unsigned *)(_ISR_STARTADDRESS+0x70))
#define pISR_MMC        (*(unsigned *)(_ISR_STARTADDRESS+0x74))
#define pISR_SPI        (*(unsigned *)(_ISR_STARTADDRESS+0x78))
#define pISR_URXD0      (*(unsigned *)(_ISR_STARTADDRESS+0x7c))
#define pISR_URXD1      (*(unsigned *)(_ISR_STARTADDRESS+0x80))
#define pISR_USBD       (*(unsigned *)(_ISR_STARTADDRESS+0x84))
#define pISR_USBH       (*(unsigned *)(_ISR_STARTADDRESS+0x88))
#define pISR_IIC        (*(unsigned *)(_ISR_STARTADDRESS+0x8c))
#define pISR_UTXD0      (*(unsigned *)(_ISR_STARTADDRESS+0x90))
#define pISR_UTXD1      (*(unsigned *)(_ISR_STARTADDRESS+0x94))
#define pISR_RTC        (*(unsigned *)(_ISR_STARTADDRESS+0x98))
#define pISR_ADC        (*(unsigned *)(_ISR_STARTADDRESS+0xa0))

/* PENDING BIT */
#define BIT_EINT0       (0x1)
#define BIT_EINT1       (0x1<<1)
#define BIT_EINT2       (0x1<<2)
#define BIT_EINT3       (0x1<<3)
#define BIT_EINT4       (0x1<<4)
#define BIT_EINT5       (0x1<<5)
#define BIT_EINT6       (0x1<<6)
#define BIT_EINT7       (0x1<<7)
#define BIT_TICK        (0x1<<8)
#define BIT_WDT         (0x1<<9)
#define BIT_TIMER0      (0x1<<10)
#define BIT_TIMER1      (0x1<<11)
#define BIT_TIMER2      (0x1<<12)
#define BIT_TIMER3      (0x1<<13)
#define BIT_TIMER4      (0x1<<14)
#define BIT_UERR01      (0x1<<15)
#define BIT_NOTUSED     (0x1<<16)
#define BIT_DMA0        (0x1<<17)
#define BIT_DMA1        (0x1<<18)
#define BIT_DMA2        (0x1<<19)
#define BIT_DMA3        (0x1<<20)
#define BIT_MMC         (0x1<<21)
#define BIT_SPI         (0x1<<22)
#define BIT_URXD0       (0x1<<23)
#define BIT_URXD1       (0x1<<24)
#define BIT_USBD        (0x1<<25)
#define BIT_USBH        (0x1<<26)
#define BIT_IIC         (0x1<<27)
#define BIT_UTXD0       (0x1<<28)
#define BIT_UTXD1       (0x1<<29)
#define BIT_RTC         (0x1<<30)
#define BIT_ADC         (0x1<<31)
#define BIT_ALLMSK      (0xffffffff)

#define GP32RGB(x,y,z)     ( (x) << 11 | (y) << 6 | (z) << 1 )
#define GP32RGBA(x,y,z,a)  ( (x) << 11 | (y) << 6 | (z) << 1 | (a) )
#define BITSET(a,b)   (a|= (1<<b))
#define BITCLEAR(a,b) (a&=~(1<<b))

#define LCD_WIDTH   320
#define LCD_HEIGHT  240



/*  !!!!!!! MEMORY MAP OF GP32 !!!!!!!!

 // 0x00000000 - 0x0003ffff  512kb   system rom (BOOT_ROM)
 // 0x0c000000 - 0x0c7fffff  8mb     workram (WORK_RAM)
 // 0x0c780000 - 0x0c7fffff  512kb   used by system

    0x0C79C000             - MMU first-level translation table descriptors total 16KB
    0x0C7A0000             - MMU second-level translation table descriptors
    0x0C7AC000             - Internal IRQ table - pointers to IRQ handlers - total 32 entries
    0x0C7AC100             -
    0x0C7AC800             - Top of Undefined mode stack
    0x0C7ACC00             - Top of Abort mode stack
    0x0C7AD400             - Top of FIQ mode stack
    0x0C7AE800             - Top of IRQ mode stack
    0x0C7AFF00             - Top of Supervisor mode stack
    0x????????             - User mode stack is not defined??
    0x00000020             - Top of Reset mode stack
    
    0x0C7B0000             - FCLK set after GpClockSpeedChange
    0x0C7B0004             - HCLK   -""-
    0x0C7B0008             - PCLK   -""-
    0x0C7B004C             - Screen mode and state bits (see GPLCDINFO.U32_lcd)
                                 bits 0-7       : clk_value
                                 bits 8-15      : lcd_buf_count
                                 bits 16-23     : bpp - bit per pixel
                                 bits 24-32     : b_lcd_on - copy of ENVID (bit 0) bit from LCDCON1
    0x0c7B0050             - a ptr to GPDRAWSURFACE (set by GpSurfaceSet & GpSurfaceFlip)
    0x0C7B0054             - buffer_size (see GPLCDINFO.buffer_size)
    0x0C7B0058             - a ptr to screen bitmap 0 (see GPLCDINFO.buf_addr[0])
    0x0C7B005C             - a ptr to screen bitmap 1 (see GPLCDINFO.buf_addr[1])
    0x0C7B0060             - a ptr to screen bitmap 2 (see GPLCDINFO.buf_addr[2])
    0x0C7B0064             - a ptr to screen bitmap 3 (see GPLCDINFO.buf_addr[3])
    0x0C7B0398             - _timepassed

    0x0C7B0600             - USB buffer size (n*256 bytes, max 2KB)
    0x0C7B0700             - USB created - 0 = no, 0 != yes (USB packet size)

    0x0C7B0800             - m_palette (see GPLCDINFO.m_palette) (default palette)

    0x0C7B0C00->0x0C7B0CFF - Application path name
    0x0C7B0D00             - Application path name length

    0x0C7B0E00             -
    0x0C7B0E04             - Application code start - updated on each GpAppExecute() call
    0x0C7B0E08             - Application code end
    0x0C7B0E0C             - Application data start
    0x0C7B0E10             - Application bss end
    0x0C7B0E14             - Application bss start
    0x0C7B0E18             - Application bss end
    0x0C7B1400-0x0C7B1508  - GpSurfaceSet() or GpSurfaceFlip() code
    0x0C7B2800             - USB buffer area - 4Kb
    0x0C7B4000             - Bitmap memory area starts here
    0x0C7FF800             - Bitmap memory area ends here
*/


// #define SAMPLEBUFFER0  0x0C780000  // 114688 = 7*16384 Bytes till MMU page  0x0C79C000
// This is free memory if we are not using the official SDK  :)

// 4 kb for global Varibles
#define SDKmemory      0x0C797000    // 4kb  Global SDK Memory for Variables

// 16 kb free memory 0x0C798000 - 0x0C79C000
#define UNCACHED4KB0   0x0C798000    // 4kb, 16384 Bytes till MMU page
#define UNCACHED4KB1   0x0C799000    // 4kb
#define UNCACHED4KB2   0x0C79A000    // 4kb
#define UNCACHED4KB3   0x0C79B000    // 4kb

// All MMU stuff

// 16kb free memory for soundmixer 0x0C7B0000 - 0x0C7B4000
#define SAMPLEBUFFER0  0x0C7B0000    // 8kb  RINGBUFFER, 2 segments of 4096Bytes, 1920*2 Bytes used...
#define SAMPLEBUFFER1  0x0C7B2000    // 4kb  MODPLAYER_RENDERBUFFER
#define SAMPLEBUFFER2  0x0C7B3000    // 2kb  MODPLAYER_LEFT_CHANNEL
#define SAMPLEBUFFER3  0x0C7B3800    // 2kb  MODPLAYER_RIGHT_CHANNEL

#define FRAMEBUFFER    0x0C7B4000    // 153600
#define FRAMEBUFFER1   0x0C7B4000  
#define FRAMEBUFFER2   0x0C7DA000    // 153600

#define GP24MBEXTENDEDRAM 0x0C800000  // 0x0C800000 to 0x0DFFFFFF if you have a 32MB ram update

#include <cpp_prototypes.h>
#endif
