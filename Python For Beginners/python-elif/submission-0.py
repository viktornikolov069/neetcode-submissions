def check_range(num: int) -> str:
    res = ""
    if num < 0:
        res = "negative"
    elif num == 0:
        res = "zero"
    elif num > 0 and num < 10:
        res = "positive single digit"
    elif num >= 10:
        res = "positive multi digit"

    return res

  
# don't modify code below this line
print(check_range(-10))
print(check_range(0))
print(check_range(9))
print(check_range(1000))
