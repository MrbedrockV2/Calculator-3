#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while (1) {
        time_t currentTime;
        struct tm *localTime;

        // Get current time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);

        // Display current time
        printf("\r%02d:%02d:%02d", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
        fflush(stdout);

        // Wait for 1 second before updating again
        sleep(1);
    }

    return 0;
}
