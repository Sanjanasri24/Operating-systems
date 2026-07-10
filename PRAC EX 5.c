#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("a.txt", O_CREAT | O_RDWR, 0644);
    write(fd, "Hi", 2);
    close(fd);
    return 0;
}
