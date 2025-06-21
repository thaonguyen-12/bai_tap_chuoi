#define _CRT_SECURE_NO_WARNINGS
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


//bài 4: 
void demSoTu(char chuoi[]) {
    int i = 0;
    int dem = 0;
    int n = 0; 

    while (chuoi[i] != '\0') {
        if (chuoi[i] != ' ' && chuoi[i] != '\n') {
            if (!n) {
                dem++;
               n = 1; 
            }
        }
        else {
            n = 0; 
        }
        i++;
    }

    printf("So tu trong chuoi la: %d\n", dem);
}


//bài 5:
void vietHoa(char chuoi[]) {
    int i = 0;

    while (chuoi[i] != '\0') {
        if (i == 0) {         
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] -= 32;
            }
        }        
        else if (chuoi[i - 1] == ' ') {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] -= 32;
            }
        }     
        else {
            if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') {
                chuoi[i] += 32;  
            }
        }

        i++;
    }
     printf("Chuoi da duoc viet hoa chu cai dau la: %s\n", chuoi);
}

//bài 6: 
char* timKytu(char str[], char c) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return &str[i];
        }
        i++;
    } return NULL;
}


int main() {
    char chuoi[100];
    char str[100];
    char kyTu;

    printf("Nhap mot chuoi ky tu: ");
    fgets(chuoi, sizeof(chuoi), stdin);  


    demKyTu(chuoi); 
    demKhoangTrang(chuoi);
    chuyenChu(chuoi);
    demSoTu(chuoi);
    vietHoa(chuoi);

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Nhap ky tu can tim: ");
    scanf(" %c", &kyTu); 

    char* viTri = timKytu(str, kyTu);

    if (viTri != NULL) {
        printf("Tim thay ky tu '%c' tai dia chi: %p\n", kyTu, viTri);
      
    }
    else {
        printf("Khong tim thay ky tu '%c' trong chuoi.\n", kyTu);
    }

    return 0;
}
