# LacikaWiFi host-side checks.
# This builds only the platform-independent status scaffold.
# It does not build a device driver or access Wi-Fi hardware.

CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -Werror
CPPFLAGS += -Iinclude

.PHONY: all test clean

all: test

test: build/test_status
	./build/test_status

build/test_status: core/lacika_wifi.c tests/test_status.c include/lacika_wifi.h
	mkdir -p build
	$(CC) $(CFLAGS) $(CPPFLAGS) core/lacika_wifi.c tests/test_status.c -o $@

clean:
	rm -rf build
