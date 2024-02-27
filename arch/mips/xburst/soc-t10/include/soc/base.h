
#ifndef __JZSOC_SOC_DEV_H__
#define __JZSOC_SOC_DEV_H__

/*
 * Define the module base addresses
 */

/* AHB0 BUS Devices Base */
#define HARB0_IOBASE      0x13000000
#define DDRC1_IOBASE      0x13010000
#define DSI_IOBASE        0x13014000
#define DDRC_IOBASE       0x13020000
#define X2D_IOBASE        0x13030000
#define GPU_IOBASE        0x13040000
#define MIPI_CSI_IOBASE   0x10040000
#define CIM_IOBASE        0x13060000
#define COMPRESS_IOBASE   0x13070000
#define IPU_IOBASE        0x13080000
#define GPVLC_IOBASE      0x13090000
#define IPU1_IOBASE       0x130b0000
#define EPDC_IOBASE       0x130c0000
#define EPDCE_IOBASE      0x130d0000
#define MONITOR_IOBASE    0x130f0000
#define ISP_VIC_IOBASE    0x13300000
#define ISP_IRQ_IOBASE    0x13320000
#define ISP_CORE_IOBASE   0x13380000

/* AHB1 BUS Devices Base */
#define SCH_IOBASE        0x13200000
#define VDMA_IOBASE       0x13210000
#define EFE_IOBASE        0x13240000
#define MCE_IOBASE        0x13250000
#define DBLK_IOBASE       0x13270000
#define VMAU_IOBASE       0x13280000
#define SDE_IOBASE        0x13290000
#define AUX_IOBASE        0x132a0000
#define TCSM_IOBASE       0x132c0000
#define JPGC_IOBASE       0x132e0000
#define SRAM_IOBASE       0x132f0000
#define VPU_IOBASE(ID)    (SCH_IOBASE + 0x400000 * ID)

/* AHB2 BUS Devices Base */
#define DES_IOBASE        0x10061000
#define HARB2_IOBASE      0x13400000
#define NFI_IOBASE        0x13410000
#define PDMA_IOBASE       0x13420000
#define AES_IOBASE        0x13430000
#define SFC_IOBASE        0x13440000
#define MSC0_IOBASE       0x13450000
#define MSC1_IOBASE       0x13460000
/*#define ETHC_IOBASE       0x134b0000*/
#define TSSI0_IOBASE      0x134e0000
#define TSSI1_IOBASE      0x134f0000
#define OTG_IOBASE        0x13500000
#define EFUSE_IOBASE      0x13540000

#define OST_IOBASE        0x12000000
#define HDMI_IOBASE       0x10180000

/* APB BUS Devices Base */
#define CPM_IOBASE        0x10000000
#define INTC_IOBASE       0x10001000
#define TCU_IOBASE        0x10002000
#define RTC_IOBASE        0x10003000
#define GPIO_IOBASE       0x10010000
#define AIC0_IOBASE       0x10020000
#define CODEC_IOBASE      0x10021000
#define DMIC_IOBASE       0x10022000
#define UART0_IOBASE      0x10030000
#define UART1_IOBASE      0x10031000
#define SSI0_IOBASE       0x10043000
#define I2C0_IOBASE       0x10050000
#define I2C1_IOBASE       0x10051000
#define SADC_IOBASE       0x10070000
#define WDT_IOBASE        0x10002000

/* NAND CHIP Base Address*/
#define NEMC_CS1_IOBASE   0x1b000000
#define NEMC_CS2_IOBASE   0x1a000000
#define NEMC_CS3_IOBASE   0x19000000
#define NEMC_CS4_IOBASE   0x18000000
#define NEMC_CS5_IOBASE   0x17000000
#define NEMC_CS6_IOBASE   0x16000000
#define DDRC_BASE         0xb34f0000

#endif
