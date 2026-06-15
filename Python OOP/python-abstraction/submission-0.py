class Superhero:
    def __init__(self, name: str):
       self._name = name
       self._power_level = 40
    
    def fly(self) -> str:
        opt1 = "Up up and away!"
        opt2 = "Too tired to fly..."
        if self._power_level >= 20:
            self._power_level -= 20
            return opt1
        else:
            return opt2

    
# Do not modify the code below
hero = Superhero("Superman")
print(hero.fly())  
print(hero.fly())
print(hero.fly())  
