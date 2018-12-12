#include <stdio.h>

void erzeugeArray(int *, int);
void zeigeArrayinConsole(int *, int);
void dreiecksTausch(int *, int *);
void bubblesort(int *, int);

int main()

{
    int anz = 10;
    int z[anz];
    erzeugeArray(z, anz);
    printf("\n Array mit %d zufaelligen Zahlen original: \n", anz);

    zeigeArrayinConsole(z, anz);
    bubblesort(z, anz);
    printf("\n Array mit %d zufaelligen Zahlen sortiert: \n", anz);

    zeigeArrayinConsole(z, anz);

}

void erzeugeArray(int * array, int anz)
{
    srand(5);
    for(int i = 0; i < anz; i++) {
        array[i] = rand()%100;
    }
   // array[] = {1, 2, 3, 4, 5, 6};
}

void zeigeArrayinConsole(int * array, int anz)

{
    //printf("%s", )
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

void bubblesort(int * array, int anz)
{
    for(int i = 0; i < anz-1; i++) {
        for(int j = 0; j < anz-i-1; j++) {
            if(array[j] > array [j+1])
                dreiecksTausch(&array[j], &array[j+1]);
        }
    }
    return 0;
}