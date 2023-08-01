#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main() {
    char password[] = "YOUR_PASSWORD";
    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)password, strlen(password), md5_hash);

    printf("Password: %s\n", password);
    printf("MD5 Hash: ");
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", md5_hash[i]);
    }
    printf("\n");

    return 0;
}
