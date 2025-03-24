#include <stdio.h>
#include <stdbool.h>

/* some error defines */

#define ERROR       1
#define NO_ERROR    0

/* function to be run by program */

int main()
{
    /* default table info */

    int table;
    int table_start;
    int table_end;

    /* take user input for table info */

    printf("Enter table: ");
    scanf("%d", &table);

    printf("Enter table start: ");
    scanf("%d", &table_start);

    printf("Enter table end: ");
    scanf("%d", &table_end);

    /* generate table based on info */

    for (int table_term=table_start; table_end>=table_term; table_term++) {
        printf("%d x %d = %d\n", table, table_term, table * table_term);
    }

    /*  show no error at the end */

    return NO_ERROR;
}
