#include <stdio.h>

void main() {
 // jadi usahakan deklarasikan variabel terlebih dahulu
    
    int x = 5;
    int y = 5;


    if (x == y) {
        //di dalam sini adalah blok kode
        // sampai akhir kurung
        printf("Nilai x dan y sama!\n");
    }

    for (int i = 0; i < 10; i++){
        //di dalam sini adalah blok kode
        //sampai akhir kurung
        printf("Perulangan ke-%d\n", i);
    }
}