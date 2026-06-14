import math

class AreaCalc:
    # TODO: Implement calculate method
    def calculate(self, *args) -> float:
        res = 0.0
        if len(args) == 1:
            res = round(math.pi * args[0] * args[0], 2)
        else:
            res = round(args[0] * args[1], 2)
        return res

    

    
# Don't modify the following code
calc = AreaCalc()
print(calc.calculate(5))    
print(calc.calculate(4, 6))
