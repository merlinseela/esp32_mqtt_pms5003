#include <Arduino.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

static uint8_t s_led_state = 0;

static const char *TAG = "main";

// put function declarations here:
static void blink_led(void)
{
    ESP_LOGD(TAG, "I am a DEBUG LOG, for Joseph BLINK!");
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(GPIO_NUM_2, s_led_state);
}

static void configure_led(void)
{
    ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
    gpio_reset_pin(GPIO_NUM_2);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
}


void setup() {
  // put your setup code here, to run once:
  configure_led();
}

void loop() {
  // put your main code here, to run repeatedly:
  ESP_LOGI(TAG, "Turning the LED %s!", s_led_state == true ? "ON" : "OFF");
  blink_led();
  /* Toggle the LED state */
  s_led_state = !s_led_state;
  vTaskDelay(1000 / portTICK_PERIOD_MS);  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}