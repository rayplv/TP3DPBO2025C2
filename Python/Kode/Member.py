from Person import Person

class Member(Person):
    def __init__(self, id, name, age):
        super().__init__(id, name, age)

    def get_info(self):
        return f"Member - {super().get_info()}"
