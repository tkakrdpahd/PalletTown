#include <unistd.h>
#include <termios.h>
#include <stdint.h>

int main(void) {
    struct termios old, new;
    char c;

    tcgetattr(STDIN_FILENO, &old);
    new = old;
    new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new);

    write(1, "Press ESC to exit ...\n", 22);

    while (1) {
        read(STDIN_FILENO, &c, 1);
        if (c == 27) {
            write(1, "Exiting loop ...\n", 18);
            break;
        }
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &old);
    return 0;
}
