class BankAccount:
    # TODO: Add class and instance attributes at their appropriate places
    total_accounts = 0
    total_balance = 0

    def __init__(self, name: str, balance: int) -> None:
        self.__name = name
        self.__balance = balance
        type(self).total_accounts += 1
        type(self).total_balance += balance

    @property
    def name(self) -> str:
        return self.__name
    @property
    def balance(self) -> str:
        return self.__balance

    @balance.setter
    def balance(self, balance) -> None:
        self.__balance = balance
        type(self).total_balance += balance


# TODO: Create two accounts
alice = BankAccount("Alice", 0)
bob = BankAccount("Bob", 0)

alice.balance = 1000
bob.balance = 2000

# TODO: Print the information using the mentioned format
print(f"{alice.name}'s balance: ${alice.balance}")
print(f"{bob.name}'s balance: ${bob.balance}")
print(f"Total Accounts: {BankAccount.total_accounts}")
print(f"Total Balance: ${BankAccount.total_balance}")