/* meminfo

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp32/himem.h"

void app_main(void)
{
    printf("\n");
    printf("spi_flash_get_chip_size %d\n", spi_flash_get_chip_size());
    printf("\n");

    printf("esp_get_free_heap_size %d\n", esp_get_free_heap_size());
    printf("esp_get_minimum_free_heap_size %d\n", esp_get_minimum_free_heap_size());
    printf("\n");

    #ifdef CONFIG_ESP32_SPIRAM_SUPPORT
    printf("esp_himem_get_phys_size %d\n", esp_himem_get_phys_size());
    printf("esp_himem_get_free_size %d\n", esp_himem_get_free_size());
    printf("\n");
    #endif
}
