package main

import "fmt"

/* function to be run by program */

func main() {

    /* default table info */

    var table int
    var table_start int
    var table_end int

    /* take user input for table */

    fmt.Print("Enter table: ")
    fmt.Scanf("%d", &table)

    fmt.Print("Enter table start: ")
    fmt.Scanf("%d", &table_start)

    fmt.Print("Enter table end: ")
    fmt.Scanf("%d", &table_end)
    
    /* generate table based on info */

    for table_term:=table_start; table_end>=table_term; table_term++ {
        fmt.Printf("%d x %d = %d\n", table, table_term, table * table_term)
    }
}
