#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "contents.h"
#include "writer.h"
#include "filecontents1.h"
#include "filecontents2.h"
#include "filecontents3.h"
#include "filecontents4.h"
#include "filecontents5.h"
#include "filecontents6.h"
int main(void) {
    char read[100000];
    char cmdline[50];
    char fnumber[50];
    printf("Welcome to Lightweight File Editor.\nRead/Write/Contents? (r/w/c): ");
    scanf("%s", cmdline);
    if(!strcmp("c", cmdline) == 1) {
        printf("Files:\n");
        conten1();
        printf("\n");
        conten2();
        printf("\n");
        conten3();
        printf("\n");
        conten4();
        printf("\n");
        conten5();
        printf("\n");
        conten6();
        printf("\n");
    }
    if(!strcmp("w", cmdline) == 1) {
        writ();
    }
    if(!strcmp("r", cmdline) == 1) {
        FILE * fs;
        printf("\n");
        conten1();
        printf("\n");
        conten2();
        printf("\n");
        conten3();
        printf("\n");
        conten4();
        printf("\n");
        conten5();
        printf("\n");
        conten6();
        printf("\n\n");
        printf("Type the file you want to read from: ");
        scanf("%s", fnumber);
        if(!strcmp("file1", fnumber) == 1) {
            fs = fopen("file1", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
        if(!strcmp("file2", fnumber) == 1) {
            fs = fopen("file2", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
        if(!strcmp("file3", fnumber) == 1) {
            fs = fopen("file3", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
        if(!strcmp("file4", fnumber) == 1) {
            fs = fopen("file4", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
        if(!strcmp("file5", fnumber) == 1) {
            fs = fopen("file5", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
        if(!strcmp("file6", fnumber) == 1) {
            fs = fopen("file6", "r");
            printf("\n");
            //printf("%s", file1);
            while(fgets(read, 100000, fs) !=NULL) {
                printf("%s", read);
            }
            printf("\n\nThe operation was successful!\n");
        }
    }
}