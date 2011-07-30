
#define USB_VENDOR_ID	OPENPCD_VENDOR_ID

#ifdef SIMTRACE
#define OPENPCD_PIO_LED2	AT91C_PIO_PA17
#define OPENPCD_PIO_LED1	AT91C_PIO_PA18
#define OPENPCD_PIO_UDP_CNX	AT91C_PIO_PA29
#define OPENPCD_PIO_UDP_PUP	AT91C_PIO_PA16
#define USB_PRODUCT_ID		SIMTRACE_PRODUCT_ID
#else
#error "unknown PCB"
#endif

/* 7816 UART for SIM-card side */
#define SIMTRACE_PIO_CLK	AT91C_PA2_SCK0
#define SIMTRACE_PIO_CLK_T	AT91C_PA4_TCLK0
#define SIMTRACE_PIO_IO		AT91C_PA6_TXD0
#define SIMTRACE_PIO_IO_T	AT91C_PA1_TIOB0
#define SIMTRACE_PIO_nRST	AT91C_PIO_PA7
#define SIMTRACE_PIO_SW_SIM	AT91C_PIO_PA8

/* 7816 UART for phone side */
#define SIMTRACE_PIO_nRST_PH	AT91C_PIO_PA24
#define SIMTRACE_PIO_CLK_PH	AT91C_PA23_SCK1
#define SIMTRACE_PIO_CLK_PH_T	AT91C_PA28_TCLK1
#define SIMTRACE_PIO_IO_PH_TX	AT91C_PA22_TXD1
#define SIMTRACE_PIO_IO_PH_RX	AT91C_PA21_RXD1

/* bus switch for SIM card connection */
#define SIMTRACE_PIO_SC_SW	AT91C_PIO_PA20
#define SIMTRACE_PIO_IO_SW	AT91C_PIO_PA19

#define SIMTRACE_PIO_VCC_SIM	AT91C_PIO_PA5
#define SIMTRACE_PIO_VCC_PHONE	AT91C_PIO_PA30

/* SPI flash */
#define PIO_SPIF_nWP	AT91C_PIO_PA15
#define PIO_SPIF_SCK	AT91C_PA14_SPCK
#define PIO_SPIF_MOSI	AT91C_PA13_MOSI
#define PIO_SPIF_MISO	AT91C_PA12_MISO
#define PIO_SPIF_nCS	AT91C_PA11_NPCS0
