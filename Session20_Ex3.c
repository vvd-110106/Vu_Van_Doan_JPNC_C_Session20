#include <stdio.h>

int main() {
    char str[256];
    printf("Nhap vao mot chuoi bat ky de them vao file: ");
    fgets(str, sizeof(str), stdin);
    FILE *file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }
    fprintf(file, "%s", str);
    fclose(file);
    printf("Chuong trinh da them chuoi vao file bt01.txt.\n");
    return 0;
}

