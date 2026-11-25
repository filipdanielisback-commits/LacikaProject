/*
 * LacikaWiFi — initial public interface
 *
 * Copyright (c) 2026 LacikaProject contributors.
 *
 * Research scaffold only. This header does not expose hardware controls
 * and does not imply that a functional Wi-Fi driver exists.
 */

#ifndef LACIKA_WIFI_H
#define LACIKA_WIFI_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum lacika_wifi_status {
    LACIKA_WIFI_STATUS_UNAVAILABLE = 0,
    LACIKA_WIFI_STATUS_RESEARCH_ONLY,
    LACIKA_WIFI_STATUS_INITIALIZED,
    LACIKA_WIFI_STATUS_READY,
    LACIKA_WIFI_STATUS_ERROR
} lacika_wifi_status_t;

/*
 * Returns the current software-reported project status.
 * The initial implementation reports RESEARCH_ONLY.
 * It does not query or control wireless hardware.
 */
lacika_wifi_status_t lacika_wifi_get_status(void);

/* Returns a stable, human-readable label for a status value. */
const char *lacika_wifi_status_name(lacika_wifi_status_t status);

#ifdef __cplusplus
}
#endif

#endif /* LACIKA_WIFI_H */
