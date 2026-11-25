/*
 * LacikaWiFi host-side status tests.
 *
 * These tests verify only the software status API. They do not test,
 * emulate, or claim to operate a physical Wi-Fi device.
 */

#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "lacika_wifi.h"

int main(void)
{
    assert(lacika_wifi_get_status() == LACIKA_WIFI_STATUS_RESEARCH_ONLY);

    assert(strcmp(lacika_wifi_status_name(
        LACIKA_WIFI_STATUS_UNAVAILABLE), "unavailable") == 0);

    assert(strcmp(lacika_wifi_status_name(
        LACIKA_WIFI_STATUS_RESEARCH_ONLY), "research-only") == 0);

    assert(strcmp(lacika_wifi_status_name(
        LACIKA_WIFI_STATUS_INITIALIZED), "initialized") == 0);

    assert(strcmp(lacika_wifi_status_name(
        LACIKA_WIFI_STATUS_READY), "ready") == 0);

    assert(strcmp(lacika_wifi_status_name(
        LACIKA_WIFI_STATUS_ERROR), "error") == 0);

    assert(strcmp(lacika_wifi_status_name(
        (lacika_wifi_status_t)999), "unknown") == 0);

    puts("LacikaWiFi status tests: PASS");
    puts("Note: these are software API tests, not Wi-Fi hardware tests.");
    return 0;
}
