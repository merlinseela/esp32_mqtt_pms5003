#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

#include "dustlib/pms5003.h"
#include "driver/uart.h"

void app_main(void)
{
    pms5003_config_t pms0 = {
            // .set_pin = GPIO_NUM_13,
            // .reset_pin = GPIO_NUM_27,
            // .mode_pin = GPIO_NUM_26,
            .rxd_pin = GPIO_NUM_14,
            .txd_pin = GPIO_NUM_12,
            // .uart_instance = UART_NUM_1,
            .uart_buffer_size = 128
    };
    // pms5003_measurement_t reading;
    for (;;)
    {
        pms5003_measurement_t reading;
        pms5003_make_measurement(&pms0, &reading);
        pms5003_print_measurement(&reading);
        vTaskDelay(10 * 1000 / portTICK_PERIOD_MS); // wait 10 sec
    }
    
}
