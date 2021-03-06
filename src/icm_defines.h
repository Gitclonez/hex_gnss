#pragma once

#define ICM20948_REG_BANK_SEL 0x7F
#define AK09916_I2C_ADDR 0x0C

#define ICM20948_WHO_AM_I 0,0x00
#define ICM20948_USER_CTRL 0,0x03
#define ICM20948_LP_CONFIG 0,0x05
#define ICM20948_PWR_MGMT_1 0,0x06
#define ICM20948_PWR_MGMT_2 0,0x07
#define ICM20948_INT_PIN_CFG 0,0x0F
#define ICM20948_INT_ENABLE 0,0x10
#define ICM20948_INT_ENABLE_1 0,0x11
#define ICM20948_INT_ENABLE_2 0,0x12
#define ICM20948_INT_ENABLE_3 0,0x13
#define ICM20948_I2C_MST_STATUS 0,0x17
#define ICM20948_INT_STATUS 0,0x19
#define ICM20948_INT_STATUS_1 0,0x1A
#define ICM20948_INT_STATUS_2 0,0x1B
#define ICM20948_INT_STATUS_3 0,0x1C
#define ICM20948_DELAY_TIMEH 0,0x28
#define ICM20948_DELAY_TIMEL 0,0x29
#define ICM20948_ACCEL_XOUT_H 0,0x2D
#define ICM20948_ACCEL_XOUT_L 0,0x2E
#define ICM20948_ACCEL_YOUT_H 0,0x2F
#define ICM20948_ACCEL_YOUT_L 0,0x30
#define ICM20948_ACCEL_ZOUT_H 0,0x31
#define ICM20948_ACCEL_ZOUT_L 0,0x32
#define ICM20948_GYRO_XOUT_H 0,0x33
#define ICM20948_GYRO_XOUT_L 0,0x34
#define ICM20948_GYRO_YOUT_H 0,0x35
#define ICM20948_GYRO_YOUT_L 0,0x36
#define ICM20948_GYRO_ZOUT_H 0,0x37
#define ICM20948_GYRO_ZOUT_L 0,0x38
#define ICM20948_TEMP_OUT_H 0,0x39
#define ICM20948_TEMP_OUT_L 0,0x3A
#define ICM20948_EXT_SLV_SENS_DATA_00 0,0x3B
#define ICM20948_EXT_SLV_SENS_DATA_01 0,0x3C
#define ICM20948_EXT_SLV_SENS_DATA_02 0,0x3D
#define ICM20948_EXT_SLV_SENS_DATA_03 0,0x3E
#define ICM20948_EXT_SLV_SENS_DATA_04 0,0x3F
#define ICM20948_EXT_SLV_SENS_DATA_05 0,0x40
#define ICM20948_EXT_SLV_SENS_DATA_06 0,0x41
#define ICM20948_EXT_SLV_SENS_DATA_07 0,0x42
#define ICM20948_EXT_SLV_SENS_DATA_08 0,0x43
#define ICM20948_EXT_SLV_SENS_DATA_09 0,0x44
#define ICM20948_EXT_SLV_SENS_DATA_10 0,0x45
#define ICM20948_EXT_SLV_SENS_DATA_11 0,0x46
#define ICM20948_EXT_SLV_SENS_DATA_12 0,0x47
#define ICM20948_EXT_SLV_SENS_DATA_13 0,0x48
#define ICM20948_EXT_SLV_SENS_DATA_14 0,0x49
#define ICM20948_EXT_SLV_SENS_DATA_15 0,0x4A
#define ICM20948_EXT_SLV_SENS_DATA_16 0,0x4B
#define ICM20948_EXT_SLV_SENS_DATA_17 0,0x4C
#define ICM20948_EXT_SLV_SENS_DATA_18 0,0x4D
#define ICM20948_EXT_SLV_SENS_DATA_19 0,0x4E
#define ICM20948_EXT_SLV_SENS_DATA_20 0,0x4F
#define ICM20948_EXT_SLV_SENS_DATA_21 0,0x50
#define ICM20948_EXT_SLV_SENS_DATA_22 0,0x51
#define ICM20948_EXT_SLV_SENS_DATA_23 0,0x52
#define ICM20948_FIFO_EN_1 0,0x66
#define ICM20948_FIFO_EN_2 0,0x67
#define ICM20948_FIFO_RST 0,0x68
#define ICM20948_FIFO_MODE 0,0x69
#define ICM20948_FIFO_COUNTH 0,0x70
#define ICM20948_FIFO_COUNTL 0,0x71
#define ICM20948_FIFO_R_W 0,0x72
#define ICM20948_DATA_RDY_STATUS 0,0x74
#define ICM20948_FIFO_CFG 0,0x76

#define ICM20948_SELF_TEST_X_GYRO 1,0x02
#define ICM20948_SELF_TEST_Y_GYRO 1,0x03
#define ICM20948_SELF_TEST_Z_GYRO 1,0x04
#define ICM20948_SELF_TEST_X_ACCEL 1,0x0E
#define ICM20948_SELF_TEST_Y_ACCEL 1,0x0F
#define ICM20948_SELF_TEST_Z_ACCEL 1,0x10
#define ICM20948_XA_OFFS_H 1,0x14
#define ICM20948_XA_OFFS_L 1,0x15
#define ICM20948_YA_OFFS_H 1,0x17
#define ICM20948_YA_OFFS_L 1,0x18
#define ICM20948_ZA_OFFS_H 1,0x1A
#define ICM20948_ZA_OFFS_L 1,0x1B
#define ICM20948_TIMEBASE_CORRECTIO 1,0x28

#define ICM20948_GYRO_SMPLRT_DIV 2,0x00
#define ICM20948_GYRO_CONFIG_1 2,0x01
#define ICM20948_2 2,0xCE
#define ICM20948_XG_OFFS_USRH 2,0x03
#define ICM20948_XG_OFFS_USRL 2,0x04
#define ICM20948_YG_OFFS_USRH 2,0x05
#define ICM20948_YG_OFFS_USRL 2,0x06
#define ICM20948_ZG_OFFS_USRH 2,0x07
#define ICM20948_ZG_OFFS_USRL 2,0x08
#define ICM20948_ODR_ALIGN_EN 2,0x09
#define ICM20948_ACCEL_SMPLRT_DIV_1 2,0x10
#define ICM20948_ACCEL_SMPLRT_DIV_2 2,0x11
#define ICM20948_ACCEL_INTEL_CTRL 2,0x12
#define ICM20948_ACCEL_WOM_THR 2,0x13
#define ICM20948_ACCEL_CONFIG 2,0x14
#define ICM20948_21 2,0xCE
#define ICM20948_FSYNC_CONFIG 2,0x52
#define ICM20948_TEMP_CONFIG 2,0x53
#define ICM20948_MOD_CTRL_USR 2,0x54

#define ICM20948_I2C_MST_ODR_CONFIG 3,0x00
#define ICM20948_I2C_MST_CTRL 3,0x01
#define ICM20948_I2C_MST_DELAY_CTRL 3,0x02
#define ICM20948_I2C_SLV0_ADDR 3,0x03
#define ICM20948_I2C_SLV0_REG 3,0x04
#define ICM20948_I2C_SLV0_CTRL 3,0x05
#define ICM20948_I2C_SLV0_DO 3,0x06
#define ICM20948_I2C_SLV1_ADDR 3,0x07
#define ICM20948_I2C_SLV1_REG 3,0x08
#define ICM20948_I2C_SLV1_CTRL 3,0x09
#define ICM20948_I2C_SLV1_DO 3,0x0A
#define ICM20948_I2C_SLV2_ADDR 3,0x0B
#define ICM20948_I2C_SLV2_REG 3,0x0C
#define ICM20948_I2C_SLV2_CTRL 3,0x0D
#define ICM20948_I2C_SLV2_DO 3,0x0E
#define ICM20948_I2C_SLV3_ADDR 3,0x0F
#define ICM20948_I2C_SLV3_REG 3,0x10
#define ICM20948_I2C_SLV3_CTRL 3,0x11
#define ICM20948_I2C_SLV3_DO 3,0x12
#define ICM20948_I2C_SLV4_ADDR 3,0x13
#define ICM20948_I2C_SLV4_REG 3,0x14
#define ICM20948_I2C_SLV4_CTRL 3,0x15
#define ICM20948_I2C_SLV4_DO 3,0x16
#define ICM20948_I2C_SLV4_DI 3,0x17
