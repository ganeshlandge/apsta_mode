#pragma once

#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#include <tcpip_adapter.h>
#include "lwip/sockets.h"
#include <errno.h>
#include "sdkconfig.h"
/* The examples use WiFi configuration that you can set via 'make menuconfig'.

   If you'd rather not, just change the below entries to strings with
   the config you want - ie #define EXAMPLE_WIFI_SSID "mywifissid"
*/
#define EXAMPLE_ESP_WIFI_SSID      CONFIG_ESP_WIFI_SSID
#define EXAMPLE_ESP_WIFI_PASS      CONFIG_ESP_WIFI_PASS
#define EXAMPLE_ESP_MAXIMUM_RETRY  CONFIG_ESP_MAXIMUM_RETRY
#define AP_EXAMPLE_ESP_WIFI_SSID   AP_ESP_WIFI_SSID
#define AP_EXAMPLE_ESP_WIFI_PASS   AP_ESP_WIFI_PASS
#define EXAMPLE_MAX_STA_CONN       CONFIG_MAX_STA_CONN

void wifi_init_sta();