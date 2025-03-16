from Member import Member
from Position import Position

class Leader(Member, Position):
    def __init__(self, id, name, age):
        Member.__init__(self, id, name, age)
        Position.__init__(self, "Leader")

    def get_info(self):
        return f"{super().get_info()} | {self.get_role()}"