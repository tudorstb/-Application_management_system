#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stats{
    char nume[50];
    char nr[15];
} stats[100];

int main_menu()
{
    while (1 == 1) {
        system("cls");

        printf("-= MAIN MENU =-\n");
        printf("1. View categories\n");
        printf("2. Install app\n");
        printf("3. Delete app\n");
        printf("4. Search for apps\n");
        printf("5. Statistics\n");
        printf("6. Exit\n");

        int choice;
        do {
            printf("Enter the desired option: ");
            scanf("%d", &choice);
        } while(choice < 1 || choice > 6);

        system("cls");

        if (choice == 1) {

            categories();
        } else if (choice == 2) {
            printf("-= INSTALL APP =-\n");
            printf("App name: ");
            int name;
            scanf("%s", &name);
            printf("Category: ");
            int category;
            scanf("%s", &category);

            printf("Installing app\n");
            sleep(3);
            printf("App installed succesfuly\n");
            system("pause");
        }else if (choice == 3) {
            printf("-= DELETE APP =-\n");
            printf("App name: ");
            int name;
            scanf("%s", &name);

            printf("Deleting app\n");
            sleep(3);
            printf("App deleted succesfuly\n");
            system("pause");

        }else if (choice == 4) {
            printf("-= SEARCH APP =-\n");
            printf("Search: ");
            int name;
            scanf("%s", &name);

            printf("App full name: ex:Survive.Io \n");
            system("pause");

        }else if (choice == 5) {
                FILE* fp = fopen("statistics.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);
                printf("-= VIZUALIZARE CATEGORII (total: %d) =-\n", nrCat);

                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                    fgets(stats[i].nr, 15, fp);

                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s%s", stats[i].nume,stats[i].nr);


                }
                printf("\n");
            system("pause");

        } else if (choice == 6) {
            return 0;
        }

    }

    return 0;
}

int categories()
{while (1 == 1) {
    system("cls");

        printf("-= VIEW CATEGORIES =-\n");
        printf("1. Entertainment \n");
        printf("2. Social \n");
        printf("3. Games \n");
        printf("4. Shopping \n");
        printf("5. Productivity \n");
        printf("6. Exit\n");

        int choice;
        do {
            printf("Introdu varianta dorita: ");
            scanf("%d", &choice);
        } while(choice < 1 || choice > 6);

        system("cls");

        if (choice == 1) {
            printf("-= Entertainment =-\n");


            FILE* fp = fopen("entertainment.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);


                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s", stats[i].nume);
                }
                printf("\n");

            system("pause");
        } else if (choice == 2) {
            printf("-= Social =-\n");

            FILE* fp = fopen("social.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);


                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s", stats[i].nume);
                }
                printf("\n");

            system("pause");
        } else if (choice == 3) {
            printf("-= Games =-\n");


            FILE* fp = fopen("games.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);


                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s", stats[i].nume);
                }
                printf("\n");


            system("pause");
        } else if (choice == 4) {
            printf("-= Shopping =-\n");

            FILE* fp = fopen("shopping.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);


                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s", stats[i].nume);
                }
                printf("\n");

            system("pause");

        } else if (choice == 5) {
            printf("-= Productivity =-\n");

            FILE* fp = fopen("productivity.txt", "r");
              int nrCat;

                fscanf(fp, "%d", &nrCat);


                fgetc(fp); /// scapam de \n de pe prima linie


                for (int i = 0; i < nrCat; ++i) {
                    fgets(stats[i].nume, 50, fp);
                }

                for (int i = 0; i < nrCat; ++i) {
                    printf("%s", stats[i].nume);
                }
                printf("\n");

            system("pause");
        } else if (choice == 6) {
            return 0;
        }
}
}

int main() {
    while (1 == 1) {
        system("cls");
        printf("-= USER LOGIN =-\n");
        printf("1. Existing User\n");
        printf("2. New User\n");
        printf("3. Exit\n");

        int choice;
        do {
            printf("Enter the desired option: ");
            scanf("%d", &choice);
        } while(choice < 1 || choice > 3);

        system("cls");

        if (choice == 1) {
            printf("-= USER LOGIN=-\n");
            printf("Enter email address: ");

            char email[321],password[321];
            ///max len for e_adress is 320
            scanf("%s", &email);

            printf("Enter password: ");
            scanf("%s", &password);





            printf("\n\nLogin successful\n");
            system("pause");
            main_menu();
        } else if (choice == 2) {
            printf("-= NEW USER =-\n");
            printf("Enter email address: ");

            char email[321],password[321];
            ///max len for e_adress is 320
            scanf("%s", &email);

            printf("Enter password: ");
            scanf("%s", &password);


            printf("\n\nNew contact added successfully!\n");
            system("pause");
            main_menu();


        } else if (choice == 3) {
            return 0;
        }

    }

    return 0;
}
