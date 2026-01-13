#include <stdio.h>
#include <unistd.h>

int main() {
for (int i = 0; i < 41; i++) {
printf("\n");
printf("%d", i);
usleep(500000);
for (int j = 0; j < i; j++) {
printf(" #");
fflush(stdout);
usleep(5000);
}
}
printf("\n");
printf("Loop finnished\n");
}
