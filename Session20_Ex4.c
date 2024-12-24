#include <stdio.h>

int main() {
    char str[256];
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return 1;
    }
    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Dong dau tien trong file la : %s\n", str);
    } else {
        printf("File rong hoac khong co dong nao de doc.\n");
    }
    fclose(file);
    return 0;
}

