#include <stdio.h>

void erzeugeArray(int *, int);
void zeigeArrayinConsole(int *, int);
void dreiecksTausch(int *, int *);
int bubblesort(int *, int);

int main()
{
    int anz = 10;
    int z[anz];
    int anzY = 0;
    
    erzeugeArray(z, anz);
    printf("\nArray mit %d zufaelligen Zahlen original: \n", anz);
    zeigeArrayinConsole(z, anz);
    anzY = bubblesort(z, anz);
    printf("\nArray mit %d zufaelligen Zahlen sortiert: \n", anz);
    zeigeArrayinConsole(z, anz);
    printf("\nMaximalzahl der nötigen Vergleiche wäre (%d-1)*(%d-1) = %d", anz, anz, (anz-1)*(anz-1));
    printf("\nVerbesserte Version (pro Durchlauf 1 Vergleich weniger) wäre (%d + %d + %d...+ 2 + 1) = %d\n", anz-1, anz-2, anz-3, (anz/2)*(1+anz));
    //anzahl der Vergleiche
    printf("Tatsächliche benötigte Vergleiche (Ausstieg mit break wenn fertig sortiert) = %d\n", anzY);
}

void erzeugeArray(int * array, int anz)
{
    srand(5);
    for(int i = 0; i < anz; i++) {
        array[i] = rand()%100;
    }
    
}

void zeigeArrayinConsole(int * array, int anz)
{
    for(int i = 0; i < anz; i++) {
        printf("%d ", array[i]);
    }
        return 0;
}

void dreiecksTausch(int *x, int *y)
{
    int temp =  *x;
    *x = *y;
    *y = temp;
}

int bubblesort(int * array, int anz)
{
    int min = 0;
    int getauscht;
    for(int i = 0; i < anz-1; i++) {
        getauscht = 0;
        for(int j = 0; j < anz-i-1; j++) {
            min++;
            if(array[j] > array [j+1])
                dreiecksTausch(&array[j], &array[j+1]);
        }
    }
    return min;
}
