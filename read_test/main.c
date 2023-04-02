#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char nume[50];
    char nr[15];
    char email[25];
    char companie[25];
} contacte[100];

int main() {
    /// access mode
    /// r - read / citire
    /// w - write / scriere
    /// a - append / adaugare
    FILE* fp = fopen("contacte.txt", "r");

    int nrContacte;
    /// scanf("%d", &nrContacte);
    fscanf(fp, "%d", &nrContacte);
    printf("-= VIZUALIZARE CONTACTE (total: %d) =-\n", nrContacte);

    fgetc(fp); /// scapam de \n de pe prima linie
    /// fgets(nume, 50, fp); /// fgets - citeste maxim 50 de caractere sau pana la \n
    /// nume[strlen(nume) - 1] = '\0';
    /// printf("Numele primului contact: %s", nume);

    for (int i = 0; i < nrContacte; ++i) {
        fgets(contacte[i].nume, 50, fp);
        fgets(contacte[i].nr, 15, fp);
        fgets(contacte[i].email, 25, fp);
        fgets(contacte[i].companie, 25, fp);
    }

    for (int i = 0; i < nrContacte; ++i) {
        printf("Nume: %s", contacte[i].nume);
        printf("Numar: %s", contacte[i].nr);
        printf("Email: %s", contacte[i].email);
        printf("Companie: %s\n", contacte[i].companie);
    }

    return 0;
}
