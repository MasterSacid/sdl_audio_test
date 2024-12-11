#include <SDL2/SDL.h>
#include <stdio.h>
#include "config.h"

int main(void) {
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        printf("SDL initialization failed: %s\n", SDL_GetError());
        return 1;
    }

    // Construct the full path using the CMake-defined ASSETS_DIR
    char audioPath[1024];
    snprintf(audioPath, sizeof(audioPath), "%s/kof.wav", ASSETS_DIR);

    SDL_AudioSpec wavSpec;
    Uint32 wavLength;
    Uint8 *wavBuffer;

    if (SDL_LoadWAV(audioPath, &wavSpec, &wavBuffer, &wavLength) == NULL) {
        printf("Loading WAV file failed: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_AudioDeviceID audioDevice = SDL_OpenAudioDevice(NULL, 0, &wavSpec, NULL, 0);
    if (audioDevice == 0) {
        printf("Failed to open audio device: %s\n", SDL_GetError());
        SDL_FreeWAV(wavBuffer);
        SDL_Quit();
        return 1;
    }

    if (SDL_QueueAudio(audioDevice, wavBuffer, wavLength) < 0) {
        printf("Failed to queue audio: %s\n", SDL_GetError());
    }
    SDL_PauseAudioDevice(audioDevice, 0);

    SDL_Delay((wavLength * 1000) / wavSpec.freq);

    SDL_CloseAudioDevice(audioDevice);
    SDL_FreeWAV(wavBuffer);
    SDL_Quit();

    return 0;
}