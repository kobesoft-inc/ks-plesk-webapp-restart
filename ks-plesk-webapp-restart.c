#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
        setuid(0);
        system("systemctl restart plesk-php80-fpm > /dev/null 2>&1");
        system("systemctl restart plesk-php81-fpm > /dev/null 2>&1");
        system("systemctl restart plesk-php82-fpm > /dev/null 2>&1");
        system("systemctl restart plesk-php83-fpm > /dev/null 2>&1");
        system("supervisorctl restart all");
}
