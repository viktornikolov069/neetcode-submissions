from typing import List

def read_integers() -> List[int]:
    my_input = input();
    res = my_input.split(",")
    int_list = []

    for s in res:
        int_list.append(int(s))
    return int_list

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
