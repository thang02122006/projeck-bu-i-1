#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check;
int length = 0;

int main(int argc, char *argv[]) {
    Store store[100];  
    
    if (length == 0) {
        store[0] = (Store){1, "Gao", "Thuc pham chinh", 150000, "100"};  
        store[1] = (Store){2, "Sua tuoi minamil", "Thuc pham bo sung", 220000, "120"};  
        store[2] = (Store){3, "Thit heo", "Thuc pham chinh", 130000, "45"};  
        store[3] = (Store){4, "Ca hoi", "Thuc pham bo xung", 300000, "20"};  
        store[4] = (Store){5, "Qua tao do", "Hoa qua", 10000, "70"}; 
	    store[5] = (Store){6, "Banh gau", "Do an vat", 25000, "90"};   
        length = 6;
    }

    do {
        displayMenu();
        printf("Nhap lua chon cua ban :");
        scanf("%d", &check);
        switch(check) {
            case 1: {
                printStore(store, length);  
                break;
            }
            case 2: {
                addStore(store, &length); 
                saveStoresToFile(store, length); 
                break;
            }
            case 3: {
                updateStore(store, length); 
                saveStoresToFile(store, length); 
                break;
            }
            case 4: {
                deleteStore(store, &length);  
                saveStoresToFile(store, length);  
                break;
            }
            case 5: {
                searchStoreByName(store, length);  
                break;
            }
            case 6: {
                int sortOrder;
                printf("Chon kieu sap xep:\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Nhap lua chon: ");
                scanf("%d", &sortOrder);

                sortStoresByPrice(store, length, sortOrder == 1);  
                printf("Danh sach sau khi sap xep:\n");
                printStore(store, length);  
                saveStoresToFile(store, length);  
                break;
            }
            case 7: {
                printf("Thoat chuong trinh...!\n");
                break;
            }
            default:
                printf("Lua chon cua ban khong hop le.Yeu cau ban nhap lai !!!\n");
        }
    } while (check != 7);

    return 0;
}

