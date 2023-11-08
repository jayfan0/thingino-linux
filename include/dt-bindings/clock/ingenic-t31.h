#ifndef _DT_BINDINGS_CLOCK_T31_H
#define _DT_BINDINGS_CLOCK_T31_H

/* Fixed Clk */
#define CLK_ID_FIEXED	0
#define	CLK_EXT		    (CLK_ID_FIEXED + 0)
#define	CLK_RTC_EXT	    (CLK_ID_FIEXED + 1)
#define CLK_NR_FIXED	(2)

/* PLL clk */
#define CLK_ID_PLL	    (CLK_ID_FIEXED + CLK_NR_FIXED)
#define CLK_PLL_APLL	(CLK_ID_PLL + 0)

#define CLK_PLL_MPLL	(CLK_ID_PLL + 1)
#define CLK_PLL_VPLL	(CLK_ID_PLL + 2)
#define CLK_NR_PLL	    (3)

/* MUX clk */
#define CLK_ID_MUX		        (CLK_ID_PLL + CLK_NR_PLL)
#define CLK_MUX_SCLKA		    (CLK_ID_MUX + 0)
#define CLK_MUX_CPU_L2C		    (CLK_ID_MUX + 1)
#define CLK_MUX_AHB0		    (CLK_ID_MUX + 2)
#define CLK_MUX_AHB2		    (CLK_ID_MUX + 3)
#define CLK_MUX_PCLK		    (CLK_ID_MUX + 4)
#define CLK_MUX_DDR		        (CLK_ID_MUX + 5)
#define CLK_MUX_MACPHY		    (CLK_ID_MUX + 6)
#define CLK_MUX_LCD             (CLK_ID_MUX + 7)
#define CLK_MUX_MSC0            (CLK_ID_MUX + 8)
#define CLK_MUX_MSC1		    (CLK_ID_MUX + 9)
#define CLK_MUX_SSI             (CLK_ID_MUX + 10)
#define CLK_MUX_CIM             (CLK_ID_MUX + 11)
#define CLK_MUX_ISP             (CLK_ID_MUX + 12)
#define CLK_MUX_RSA             (CLK_ID_MUX + 13)
#define CLK_MUX_EL150           (CLK_ID_MUX + 14)
#define CLK_MUX_I2ST            (CLK_ID_MUX + 15)
#define CLK_MUX_I2SR            (CLK_ID_MUX + 16)

#define CLK_NR_MUX		(17)


#define CLK_ID_DIV		        (CLK_ID_MUX + CLK_NR_MUX)
#define CLK_DIV_DDR		        (CLK_ID_DIV + 0)
#define CLK_DIV_MACPHY		    (CLK_ID_DIV + 1)
#define CLK_DIV_LCD		        (CLK_ID_DIV + 2)
#define CLK_DIV_MSC0            (CLK_ID_DIV + 3)
#define CLK_DIV_MSC1            (CLK_ID_DIV + 4)
#define CLK_DIV_SSI             (CLK_ID_DIV + 5)
#define CLK_DIV_CIM             (CLK_ID_DIV + 6)
#define CLK_DIV_ISP		        (CLK_ID_DIV + 7)
#define CLK_DIV_RSA             (CLK_ID_DIV + 8)
#define CLK_DIV_EL150           (CLK_ID_DIV + 9)
#define CLK_DIV_I2ST            (CLK_ID_DIV + 10)
#define CLK_DIV_I2SR            (CLK_ID_DIV + 11)

#define CLK_DIV_CPU		        (CLK_ID_DIV + 12)
#define CLK_DIV_L2C             (CLK_ID_DIV + 13)
#define CLK_DIV_AHB0            (CLK_ID_DIV + 14)
#define CLK_DIV_AHB2            (CLK_ID_DIV + 15)
#define CLK_DIV_APB             (CLK_ID_DIV + 16)
#define CLK_DIV_CPU_L2C         (CLK_ID_DIV + 17)
#define CLK_DIV_CPU_L2C_X1      (CLK_ID_DIV + 18)
#define CLK_DIV_CPU_L2C_X2      (CLK_ID_DIV + 19)
#define CLK_DIV_SFC             (CLK_ID_DIV + 20)

#define CLK_NR_DIV		        (21)


/* Gate Clocks */
#define CLK_ID_GATE		        (CLK_ID_DIV + CLK_NR_DIV)
#define CLK_GATE_DDR		    (CLK_ID_GATE + 0)
#define CLK_GATE_TCU		    (CLK_ID_GATE + 1)
#define CLK_GATE_RTC	    	(CLK_ID_GATE + 2)
#define CLK_GATE_DES		    (CLK_ID_GATE + 3)
#define CLK_GATE_RSA		    (CLK_ID_GATE + 4)
#define CLK_GATE_RISCV	        (CLK_ID_GATE + 5)
#define CLK_GATE_MIPI_CSI		(CLK_ID_GATE + 6)
#define CLK_GATE_LCD		    (CLK_ID_GATE + 7)
#define CLK_GATE_ISP		    (CLK_ID_GATE + 8)
#define CLK_GATE_H1ARB		    (CLK_ID_GATE + 9)
#define CLK_GATE_PDMA		    (CLK_ID_GATE + 10)
#define CLK_GATE_SFC		    (CLK_ID_GATE + 11)
#define CLK_GATE_SSI1		    (CLK_ID_GATE + 12)
#define CLK_GATE_HASH		    (CLK_ID_GATE + 13)
#define CLK_GATE_SLV		    (CLK_ID_GATE + 14)
#define CLK_GATE_UART2	    	(CLK_ID_GATE + 15)
#define CLK_GATE_UART1		    (CLK_ID_GATE + 16)
#define CLK_GATE_UART0		    (CLK_ID_GATE + 17)
#define CLK_GATE_SADC		    (CLK_ID_GATE + 18)
#define CLK_GATE_DMIC		    (CLK_ID_GATE + 19)
#define CLK_GATE_AIC		    (CLK_ID_GATE + 20)
#define CLK_GATE_RESERVER21		(CLK_ID_GATE + 21)
#define CLK_GATE_RESERVER22		(CLK_ID_GATE + 22)
#define CLK_GATE_SMB1	    	(CLK_ID_GATE + 23)
#define CLK_GATE_SMB0	    	(CLK_ID_GATE + 24)
#define CLK_GATE_SSI0		    (CLK_ID_GATE + 25)
#define CLK_GATE_MSC1		    (CLK_ID_GATE + 26)
#define CLK_GATE_MSC0		    (CLK_ID_GATE + 27)
#define CLK_GATE_OTG		    (CLK_ID_GATE + 28)
#define CLK_GATE_RESERVER29	    (CLK_ID_GATE + 29)
#define CLK_GATE_EFUSE		    (CLK_ID_GATE + 30)
#define CLK_GATE_NEMC	    	(CLK_ID_GATE + 31)
#define CLK_GATE_CPU		    (CLK_ID_GATE + 32)
#define CLK_GATE_APB0	        (CLK_ID_GATE + 33)
#define CLK_GATE_RESERVER13	    (CLK_ID_GATE + 34)
#define CLK_GATE_RESERVER12		(CLK_ID_GATE + 35)
#define CLK_GATE_OST		    (CLK_ID_GATE + 36)
#define CLK_GATE_AHB0		    (CLK_ID_GATE + 37)
#define CLK_GATE_RESERVER9  	(CLK_ID_GATE + 38)
#define CLK_GATE_RESERVER8		(CLK_ID_GATE + 39)
#define CLK_GATE_RESERVER7		(CLK_ID_GATE + 40)
#define CLK_GATE_AHB1	    	(CLK_ID_GATE + 41)
#define CLK_GATE_AES		    (CLK_ID_GATE + 42)
#define CLK_GATE_GMAC		    (CLK_ID_GATE + 43)
#define CLK_GATE_RESERVER3		(CLK_ID_GATE + 44)
#define CLK_GATE_IPU		    (CLK_ID_GATE + 45)
#define CLK_GATE_DTRNG		    (CLK_ID_GATE + 46)
#define CLK_GATE_EL150		    (CLK_ID_GATE + 47)
#define CLK_CE_I2ST		        (CLK_ID_GATE + 48)
#define CLK_CE_I2SR		        (CLK_ID_GATE + 49)
#define CLK_GATE_USBPHY         (CLK_ID_GATE + 50)
#define CLK_NR_GATE		        (61)
#define CLK_ID_OTHER		    (CLK_ID_GATE + CLK_NR_GATE)

#define NR_CLKS		(CLK_NR_FIXED + CLK_NR_PLL + CLK_NR_MUX + CLK_NR_DIV + CLK_NR_GATE)
#endif
