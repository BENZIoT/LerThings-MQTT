#include "WiFi.h"
#include "mqtt.h"

int count = 0;
char msg[10];
void app_main()
{
    wifi_init_sta();
    mqtt_app_start();

    while (true)
    {
        sprintf(msg, "%d", count);
        send_mqtt_data("mqtt/test", msg);
        count++;
        vTaskDelay(1500 / portTICK_PERIOD_MS);
    }
}