#include <stdio.h>
#include <stdlib.h>
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"

#define SIZE 4

int main()
{
    printf("%s\n",avcodec_configuration());
    puts("hello\n");
    return 0;
}
