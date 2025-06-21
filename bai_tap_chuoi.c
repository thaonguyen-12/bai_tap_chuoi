#include <stdio.h>


//bài 1:
void demKyTu(char chuoi[]) {
    int dem = 0;
    while (chuoi[dem] != '\0') {
        dem++;
    }
    printf("So ky tu trong chuoi la: %d\n", dem);
}

//bài 2: 
void demKhoangTrang(char chuoi[]) {
    int dem = 0;
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ' ') {
            dem++;
        }
        i++;
    }
    printf("So khoang trang la: %d\n", dem);
}


//bài 3: 
void chuyenChu(char chuoi[]) {
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
            chuoi[i] = chuoi[i] - 32;
        }
        i++;
    }
    printf("Da chuyen thanh chu hoa: %s\n", chuoi);
}






int main() {
    char chuoi[100];

    printf("Nhap mot chuoi ky tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);  

    demKyTu(chuoi); 
    demKhoangTrang(chuoi);
    chuyenChu(chuoi);

    return 0;
}
