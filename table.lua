-- take table info from user

io.write("Enter table: ")
local table = io.read()

io.write("Enter table start: ")
local table_start = io.read()

io.write("Enter table end: ")
local table_end = io.read()

-- generate table based on info

for table_term=table_start, table_end do
    print(string.format("%d x %d = %d", table, table_term, table * table_term))
end
