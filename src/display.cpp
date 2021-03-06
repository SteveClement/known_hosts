#include <stdio.h>
#include <stdlib.h>

#include "display.h"
#include "config.h"

void display_error(const char *error) {
    printf(ANSI_COLOR_RED "ERROR: %s" ANSI_COLOR_RESET "\n", error);
    exit(1);
}

void display_host(const char *host) {
    printf("\t" ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET "\n", host);
}

void display_usage(const char *option) {
    if (option != NULL)
        printf(ANSI_COLOR_RED "Unknown option: %s" ANSI_COLOR_RESET "\n", option);

    printf("\nusage: known_hosts command [host]\n"
                   "  commands:\n"
                   "    ls      - List all known hosts\n"
                   "    rm      - Remove a host [requires host]\n"
                   "    version - Display current version\n"
                   "    help    - Show this message\n\n");
    exit(1);
}
