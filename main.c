#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib,"winmm.lib")

int main(){
    printf("som");
    mciSendString("open \"C:\\Users\\fiili\\testes\\musgas\\fundoagudo.mp3\" type mpegvideo alias minhaMusica", NULL, 0, NULL);

    mciSendString("play minhaMusica", NULL, 0, NULL);
    mciSendString("stop minhaMusica", NULL, 0, NULL);

    return 0;
}