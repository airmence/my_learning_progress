#variable for the table handling
table = 1

#double loop for printing every table content
while table <= 10:
    for i in range(11):
        print(i, "X", table, "=", i*table)
    table = table + 1
    print(" ")
