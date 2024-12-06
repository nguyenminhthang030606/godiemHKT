#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;    
    int choice;   

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n");
        printf("5. Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao,chi them phan tu do vao mangneu phan tu do chua ton tai trong mang\n");
        printf("6. Xoa phan tu tai vi tri cu the (nguoi dung nhap vi tri)\n");
        printf("7. Tim kiem mot phan tu trong mang\n");
        printf("8. Sap xep le truoc, chan sau\n");
        printf("9. Kiem tra mang co tang dan hay khong\n");
        printf("10. Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu cua mang (toi da 100): ");
                scanf("%d", &n);
                if (n > 100 || n <= 0) {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                } else {
                    printf("Nhap cac gia tri cho mang:\n");
                    for (int i = 0; i < n; i++) {
                        printf("arr[%d] = ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d, ", i, arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    int sum = 0;
                    for (int j = 1; j <= arr[i] / 2; j++) {
                        if (arr[i] % j == 0) {
                            sum += j;
                        }
                    }
                    if (sum == arr[i] && arr[i] > 0) {
                        count++;
                    }
                }
                printf(" so hoan hao trong mang la: %d\n", count);
                break;
            }
            case 4: {
                break;
            }
            case 5: {
                break;
            }
            case 6: {
                int position;
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = position; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", position);
                }
                break;
            }
            case 7: {
                int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Gia tri %d tim thay tai vi tri %d\n", value, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay gia tri trong mang!\n");
                }
                break;
            }
            case 8: {
                int temp;
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if ((arr[i] % 2 == 0 && arr[j] % 2 != 0) || 
                            (arr[i] % 2 == arr[j] % 2 && arr[i] > arr[j])) {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep le truoc, chan sau:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 9: {
                break;
            }
            case 10: {
                printf("Thoat chuong trinh.\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le!\n");
                break;
            }
        }
    } while (choice != 10);

    return 0;
}

