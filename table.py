# take user input for table info

table = int(input("Enter table: "))
table_start = int(input("Enter table start: "))
table_end = int(input("Enter table end: "))

# generate table based on info

for table_term in range(table_start, table_end+1):
    print(f"{table} x {table_term} = {table * table_term}")
