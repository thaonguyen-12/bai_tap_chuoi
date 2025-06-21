#include <stdio.h>

void demKyTu(char chuoi[]) {
    int dem = 0;
    while (chuoi[dem] != '\0') {
        dem++;
    }
    printf("So ky tu trong chuoi la: %d\n", dem);
}

int main() {
    char chuoi[100];

    printf("Nhap mot chuoi ky tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);  

    demKyTu(chuoi); 

    return 0;
}
