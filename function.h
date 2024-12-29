#include "datatype.h"

// nguyen mau ham
void displayMenu();
void printStore(Store store[], int length);  
void addStore(Store stores[], int *length);  
void updateStore(Store store[], int length);  
void deleteStore(Store store[], int *length); 
void searchStoreByName(Store store[], int length);  
void toLowerCase(char str[]);
void sortStoresByPrice(Store stores[], int length, int ascending);  
void saveStoresToFile(Store store[], int length);  
void loadStoresFromFile(Store stores[], int *length);  

