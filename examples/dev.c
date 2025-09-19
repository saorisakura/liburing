#include <liburing.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    struct io_uring ring;
    io_uring_queue_init(1, &ring, 0);
    return 0;
}