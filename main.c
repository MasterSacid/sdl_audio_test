#include <stdio.h>
#include <stdlib.h>
#include "config.h"
#include <unistd.h>

// Declare the function defined in `audio_player.c`
void playAudio(const char *filename);

int main(void) {
    char audioPath[1024];
    snprintf(audioPath, sizeof(audioPath), "%s/kof.wav", ASSETS_DIR);

    printf("please wait for 2 seconds\n");

    sleep(2);

    playAudio(audioPath);

    return 0;
}
