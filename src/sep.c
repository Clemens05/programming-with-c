#include <stdio.h>
#include <sys/time.h>

void sep_first(const char* heading) {
    printf("---[ %s ]---", heading);
    printf("\n\n");
}

void sep(const char* heading) {
    printf("\n\n");

    sep_first(heading);
}

long long int analyse() {
    struct timeval te;
    gettimeofday(&te, NULL);
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000;
    return milliseconds;
}

void printa(long long int start, long long int end) {
    long long int res = end - start;
    printf("\n");
    printf("[ %lld ms ]", res);
}
