#ifndef MQTT_H_
#define MQTT_H_

#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>
#include <esp_event.h>
#include <nvs_flash.h>
#include <esp_log.h>
#include <mqtt_client.h>

#include "lwip/err.h"
#include "lwip/sys.h"

esp_mqtt_client_handle_t client;

static esp_err_t mqtt_event_handler(esp_mqtt_event_handle_t event);
void mqtt_app_start(void);
void send_mqtt_data(char* mqtt_topic, char* data);

#endif