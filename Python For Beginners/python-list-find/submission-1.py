from typing import List # this is used to add type hints for List type

def find_index(nums: List[int], target: int) -> int:
    res = -1
    if target in nums:
        res = nums.index(target)
    return res


# don't modify code below this line
print(find_index([1, 2, 3, 4, 5], 3))
print(find_index([1, 2, 3, 4, 5, 3], 3))
print(find_index([1, 2, 3, 4], 1))
print(find_index([1, 3, 4, 2], 2))

