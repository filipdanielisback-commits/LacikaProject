/*
 * LacikaWiFi — platform-independent status core
 *
 * This is a small, buildable software scaffold, not a hardware driver.
 * It performs no device I/O, firmware loading, scanning or networking.
 */

#include "lacika_wifi.h"

lacika_wifi_status_t lacika_wifi_get_status(void)
{
    return LACIKA_WIFI_STATUS_RESEARCH_ONLY;
}

const char *lacika_wifi_status_name(lacika_wifi_status_t status)
{
    switch (status) {
    case LACIKA_WIFI_STATUS_UNAVAILABLE:
        return "unavailable";
    case LACIKA_WIFI_STATUS_RESEARCH_ONLY:
        return "research-only";
    case LACIKA_WIFI_STATUS_INITIALIZED:
        return "initialized";
    case LACIKA_WIFI_STATUS_READY:
        return "ready";
    case LACIKA_WIFI_STATUS_ERROR:
        return "error";
    default:
        return "unknown";
    }
}
