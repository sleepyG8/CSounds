#include <windows.h>
#include <stdio.h>
#include "blockhit.h"
#pragma comment(lib, "winmm.lib")

int main() {
FILE* file = fopen("test.wav", "rb");
if (file) {
    printf("playing sound file\n");
    PlaySoundW(L"test.wav", NULL, SND_FILENAME);
    return 0;
} else {


FILE* file = fopen("test.wav", "wb");

fwrite(blockhit_wav, 1, sizeof(blockhit_wav), file); 

fclose(file);

if (!PlaySoundW(L"test.wav", NULL, SND_FILENAME)) {
    printf("PlaySound failed.\n");
} else {
printf("playing sound...\n");
}

}
return 0;
}