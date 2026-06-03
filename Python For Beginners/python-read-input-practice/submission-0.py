def add_two_numbers() -> int:
    my_in = input()
    my_str = my_in.split(',')
    my_sum = 0

    for s in my_str:
        my_sum += int(s)
    return my_sum



# do not modify below this line
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
print(add_two_numbers())
