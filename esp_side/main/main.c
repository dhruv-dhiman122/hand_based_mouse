#include <stdio.h>
#include "driver/i2c_master.h"

// ======= space for defining the pin layouts for the project ========

#define SDA_PIN_MASTER GPIO_NUM_21
#define SCL_PIN_MASTER GPIO_NUM_22

i2c_master_bus_handle_t bus_handle;
i2c_master_dev_handle_t dev_handle;

// ================ Init function for the project ====================
void master_init(void) {
    //to run the config we use i2c_new_master_bus()
    i2c_master_config_t master_config_init = {
        .sda_io_num = SDA_PIN_MASTER,
        .scl_io_num = SCL_PIN_MASTER,
        .i2c_port = -1,
        .clk_source = I2C_CLK_SRC_DEFAULT,
        .glitch_ignore_cnt = 7,
        .flags.enable_internal_pullup = true,
    };
    ESP_ERROR_CHECK(i2c_new_master_bus(&master_config_init, &bus_handle));
}

void device_init(void) {

    i2c_device_config_t dev_config = {
        .dev_addr_length = I2C_ADDR_BIT_LEN_7,
        .device_address = 0x28, // the address is temp
        .scl_speed_hz = 100000,
    };

    i2c_master_bus_handle_t dev_handle;
    ESP_ERROR_CHECK(i2c_new_master_bus(bus_handle, &dev_cfg, &dev_handle));
}

void app_main(void)
{

}
