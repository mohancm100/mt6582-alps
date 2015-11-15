/*
 * Generated by MTK SP Drv_CodeGen Version 03.13.6  for MT6582. Copyright MediaTek Inc. (C) 2013.
 * Sun Nov 15 11:33:25 2015
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_ALS_EINT_PIN         (GPIO1 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_MDEINT  GPIO_MODE_03
#define GPIO_ALS_EINT_PIN_M_PWM  GPIO_MODE_01
#define GPIO_ALS_EINT_PIN_M_EINT  GPIO_ALS_EINT_PIN_M_GPIO

#define GPIO_CTP_EINT_PIN         (GPIO2 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CTP_EINT_PIN_M_MDEINT  GPIO_MODE_03
#define GPIO_CTP_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_CTP_EINT_PIN_M_EINT  GPIO_CTP_EINT_PIN_M_GPIO
#define GPIO_CTP_EINT_PIN_CLK     CLK_OUT0
#define GPIO_CTP_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_ACCDET_EINT_PIN         (GPIO4 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_ACCDET_EINT_PIN_M_EINT  GPIO_ACCDET_EINT_PIN_M_GPIO
#define GPIO_ACCDET_EINT_PIN_CLK     CLK_OUT2
#define GPIO_ACCDET_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_GSE_2_EINT_PIN         (GPIO5 | 0x80000000)
#define GPIO_GSE_2_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GSE_2_EINT_PIN_M_KCOL  GPIO_MODE_06
#define GPIO_GSE_2_EINT_PIN_M_EINT  GPIO_GSE_2_EINT_PIN_M_GPIO

#define GPIO_EINT_CHG_STAT_PIN         (GPIO8 | 0x80000000)
#define GPIO_EINT_CHG_STAT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_EINT_CHG_STAT_PIN_M_CLK  GPIO_MODE_02
#define GPIO_EINT_CHG_STAT_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_EINT_CHG_STAT_PIN_M_EINT  GPIO_EINT_CHG_STAT_PIN_M_GPIO
#define GPIO_EINT_CHG_STAT_PIN_CLK     CLK_OUT3
#define GPIO_EINT_CHG_STAT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMRST_PIN         (GPIO9 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_CMRST_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_CAMERA_CMRST_PIN_M_SDA   GPIO_MODE_02
#define GPIO_CAMERA_CMRST_PIN_M_EXT_FRAME_SYNC   GPIO_MODE_03
#define GPIO_CAMERA_CMRST_PIN_M_NWEB   GPIO_MODE_04
#define GPIO_CAMERA_CMRST_PIN_CLK     CLK_OUT4
#define GPIO_CAMERA_CMRST_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMPDN_PIN         (GPIO10 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_CMPDN_PIN_M_MDEINT  GPIO_MODE_05
#define GPIO_CAMERA_CMPDN_PIN_M_SCL   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN_PIN_M_EXT_FRAME_SYNC   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN_PIN_M_NCEB   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN_PIN_CLK     CLK_OUT5
#define GPIO_CAMERA_CMPDN_PIN_FREQ    GPIO_CLKSRC_NONE
#define GPIO_CAMERA_CMPDN_PIN_NCE     0

#define GPIO_GSE_1_EINT_PIN         (GPIO11 | 0x80000000)
#define GPIO_GSE_1_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_CLK  GPIO_MODE_01
#define GPIO_GSE_1_EINT_PIN_M_KROW  GPIO_MODE_03
#define GPIO_GSE_1_EINT_PIN_M_PWM  GPIO_MODE_02
#define GPIO_GSE_1_EINT_PIN_M_EINT  GPIO_GSE_1_EINT_PIN_M_GPIO
#define GPIO_GSE_1_EINT_PIN_CLK     CLK_OUT4
#define GPIO_GSE_1_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_FLASH_MODE_PIN         (GPIO12 | 0x80000000)
#define GPIO_CAMERA_FLASH_MODE_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_MODE_PIN_M_CLK  GPIO_MODE_01
#define GPIO_CAMERA_FLASH_MODE_PIN_M_KCOL  GPIO_MODE_03
#define GPIO_CAMERA_FLASH_MODE_PIN_M_PWM  GPIO_MODE_02
#define GPIO_CAMERA_FLASH_MODE_PIN_CLK     CLK_OUT5
#define GPIO_CAMERA_FLASH_MODE_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_FLASH_EN_PIN         (GPIO13 | 0x80000000)
#define GPIO_CAMERA_FLASH_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_FLASH_EN_PIN_M_MDEINT  GPIO_MODE_04

#define GPIO_CTP_RST_PIN         (GPIO14 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_MDEINT  GPIO_MODE_04
#define GPIO_CTP_RST_PIN_M_DAC_DAT_OUT   GPIO_MODE_02
#define GPIO_CTP_RST_PIN_M_ANT_SEL   GPIO_MODE_03
#define GPIO_CTP_RST_PIN_M_CONN_MCU_DBGACK_N   GPIO_MODE_05
#define GPIO_CTP_RST_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_CAMERA_CMRST1_PIN         (GPIO16 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_DAC_CK   GPIO_MODE_02
#define GPIO_CAMERA_CMRST1_PIN_M_ANT_SEL   GPIO_MODE_03
#define GPIO_CAMERA_CMRST1_PIN_M_NLD   GPIO_MODE_04
#define GPIO_CAMERA_CMRST1_PIN_M_CONN_MCU_TRST_B   GPIO_MODE_05
#define GPIO_CAMERA_CMRST1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_OTG_IDDIG_EINT_PIN         (GPIO17 | 0x80000000)
#define GPIO_OTG_IDDIG_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_IDDIG_EINT_PIN_M_CLK  GPIO_MODE_02
#define GPIO_OTG_IDDIG_EINT_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_OTG_IDDIG_EINT_PIN_M_CLKM   GPIO_MODE_03
#define GPIO_OTG_IDDIG_EINT_PIN_M_IDDIG   GPIO_MODE_04
#define GPIO_OTG_IDDIG_EINT_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_OTG_IDDIG_EINT_PIN_CLK     CLK_OUT0
#define GPIO_OTG_IDDIG_EINT_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_UART_UCTS1_PIN         (GPIO17 | 0x80000000)
#define GPIO_UART_UCTS1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UCTS1_PIN_M_CLK  GPIO_MODE_02
#define GPIO_UART_UCTS1_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_UART_UCTS1_PIN_M_CLKM   GPIO_MODE_03
#define GPIO_UART_UCTS1_PIN_M_IDDIG   GPIO_MODE_04
#define GPIO_UART_UCTS1_PIN_M_DBG_MON_B   GPIO_MODE_07
#define GPIO_UART_UCTS1_PIN_CLK     CLK_OUT0
#define GPIO_UART_UCTS1_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO18 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_URTS   GPIO_MODE_01
#define GPIO_CAMERA_CMPDN1_PIN_M_BSI_B_DATA   GPIO_MODE_02
#define GPIO_CAMERA_CMPDN1_PIN_M_I2SOUT_LRCK   GPIO_MODE_03
#define GPIO_CAMERA_CMPDN1_PIN_M_DRV_VBUS   GPIO_MODE_04
#define GPIO_CAMERA_CMPDN1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_SWCHARGER_EN_PIN         (GPIO19 | 0x80000000)
#define GPIO_SWCHARGER_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_SWCHARGER_EN_PIN_M_CLK  GPIO_MODE_04
#define GPIO_SWCHARGER_EN_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_SWCHARGER_EN_PIN_CLK     CLK_OUT1
#define GPIO_SWCHARGER_EN_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_UART_UCTS2_PIN         (GPIO19 | 0x80000000)
#define GPIO_UART_UCTS2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UCTS2_PIN_M_CLK  GPIO_MODE_04
#define GPIO_UART_UCTS2_PIN_M_UCTS   GPIO_MODE_01
#define GPIO_UART_UCTS2_PIN_CLK     CLK_OUT1
#define GPIO_UART_UCTS2_PIN_FREQ    GPIO_CLKSRC_NONE

#define GPIO_PMIC_EINT_PIN         (GPIO25 | 0x80000000)
#define GPIO_PMIC_EINT_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_PMIC_EINT_PIN_M_EINT  GPIO_PMIC_EINT_PIN_M_GPIO

#define GPIO_SIM1_SCLK         (GPIO29 | 0x80000000)
#define GPIO_SIM1_SCLK_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SCLK_M_CLK  GPIO_MODE_01
#define GPIO_SIM1_SCLK_M_MD1_SIM2_SCLK   GPIO_MODE_02

#define GPIO_SIM1_SRST         (GPIO30 | 0x80000000)
#define GPIO_SIM1_SRST_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SRST_M_PWM  GPIO_MODE_03
#define GPIO_SIM1_SRST_M_MD1_SIM1_SRST   GPIO_MODE_01
#define GPIO_SIM1_SRST_M_MD1_SIM2_SRST   GPIO_MODE_02

#define GPIO_SIM1_SIO         (GPIO31 | 0x80000000)
#define GPIO_SIM1_SIO_M_GPIO  GPIO_MODE_00
#define GPIO_SIM1_SIO_M_MD1_SIM1_SDAT   GPIO_MODE_01
#define GPIO_SIM1_SIO_M_MD1_SIM2_SDAT   GPIO_MODE_02

#define GPIO_SIM2_SCLK         (GPIO32 | 0x80000000)
#define GPIO_SIM2_SCLK_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SCLK_M_CLK  GPIO_MODE_01
#define GPIO_SIM2_SCLK_M_MD1_SIM1_SCLK   GPIO_MODE_02

#define GPIO_SIM2_SRST         (GPIO33 | 0x80000000)
#define GPIO_SIM2_SRST_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SRST_M_PWM  GPIO_MODE_03
#define GPIO_SIM2_SRST_M_MD1_SIM2_SRST   GPIO_MODE_01
#define GPIO_SIM2_SRST_M_MD1_SIM1_SRST   GPIO_MODE_02

#define GPIO_SIM2_SIO         (GPIO34 | 0x80000000)
#define GPIO_SIM2_SIO_M_GPIO  GPIO_MODE_00
#define GPIO_SIM2_SIO_M_MD1_SIM2_SDAT   GPIO_MODE_01
#define GPIO_SIM2_SIO_M_MD1_SIM1_SDAT   GPIO_MODE_02
#define GPIO_SIM2_SIO_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_CTP_EN_PIN         (GPIO63 | 0x80000000)
#define GPIO_CTP_EN_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_CTP_EN_PIN_M_EINT  GPIO_CTP_EN_PIN_M_GPIO

#define GPIO_KPD_KCOL0_PIN         (GPIO75 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_SPEAKER_EN_PIN         (GPIO81 | 0x80000000)
#define GPIO_SPEAKER_EN_PIN_M_GPIO  GPIO_MODE_00

#define GPIO_I2C0_SDA_PIN         (GPIO84 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C0_SCA_PIN         (GPIO85 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         (GPIO86 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_SDA   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO87 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_SCL   GPIO_MODE_01

#define GPIO_OTG_DRVVBUS_PIN         (GPIO93 | 0x80000000)
#define GPIO_OTG_DRVVBUS_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_OTG_DRVVBUS_PIN_M_KROW  GPIO_MODE_01
#define GPIO_OTG_DRVVBUS_PIN_M_DRV_VBUS   GPIO_MODE_02
#define GPIO_OTG_DRVVBUS_PIN_M_DBG_MON_A   GPIO_MODE_07

#define GPIO_UART_URXD1_PIN         (GPIO108 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD1_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD1_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_UTXD1_PIN         (GPIO109 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD1_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD1_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD1_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD1_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_URXD2_PIN         (GPIO110 | 0x80000000)
#define GPIO_UART_URXD2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_URXD2_PIN_M_URXD   GPIO_MODE_01
#define GPIO_UART_URXD2_PIN_M_UTXD   GPIO_MODE_02
#define GPIO_UART_URXD2_PIN_M_MD_URXD   GPIO_MODE_03
#define GPIO_UART_URXD2_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_UART_UTXD2_PIN         (GPIO111 | 0x80000000)
#define GPIO_UART_UTXD2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_UART_UTXD2_PIN_M_UTXD   GPIO_MODE_01
#define GPIO_UART_UTXD2_PIN_M_URXD   GPIO_MODE_02
#define GPIO_UART_UTXD2_PIN_M_MD_UTXD   GPIO_MODE_03
#define GPIO_UART_UTXD2_PIN_M_TDD_TXD   GPIO_MODE_04
#define GPIO_UART_UTXD2_PIN_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_LCM_RST         (GPIO112 | 0x80000000)
#define GPIO_LCM_RST_M_GPIO  GPIO_MODE_00
#define GPIO_LCM_RST_M_LCM_RST   GPIO_MODE_01
#define GPIO_LCM_RST_M_DBG_MON_B   GPIO_MODE_07

#define GPIO_LCM_PWR         (GPIO115 | 0x80000000)
#define GPIO_LCM_PWR_M_GPIO  GPIO_MODE_00
#define GPIO_LCM_PWR_M_CLK  GPIO_MODE_01

#define GPIO_MSDC1_CMD         (GPIO124 | 0x80000000)
#define GPIO_MSDC1_CMD_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CMD_M_MSDC1_CMD   GPIO_MODE_01

#define GPIO_MSDC1_CLK         (GPIO125 | 0x80000000)
#define GPIO_MSDC1_CLK_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_CLK_M_CLK  GPIO_MODE_01

#define GPIO_MSDC1_DAT0         (GPIO126 | 0x80000000)
#define GPIO_MSDC1_DAT0_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT0_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT1         (GPIO127 | 0x80000000)
#define GPIO_MSDC1_DAT1_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT1_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT2         (GPIO128 | 0x80000000)
#define GPIO_MSDC1_DAT2_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT2_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT3         (GPIO129 | 0x80000000)
#define GPIO_MSDC1_DAT3_M_GPIO  GPIO_MODE_00
#define GPIO_MSDC1_DAT3_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_KPD_KCOL1_PIN         (GPIO167 | 0x80000000)
#define GPIO_KPD_KCOL1_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL1_PIN_M_KCOL  GPIO_MODE_01

#define GPIO_KPD_KCOL2_PIN         (GPIO168 | 0x80000000)
#define GPIO_KPD_KCOL2_PIN_M_GPIO  GPIO_MODE_00
#define GPIO_KPD_KCOL2_PIN_M_KCOL  GPIO_MODE_01


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */


