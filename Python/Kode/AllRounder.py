from Member import Member
from Position import Position

class AllRounder(Member, Position):
    def __init__(self, id, name, age):
        Member.__init__(self, id, name, age)
        Position.__init__(self, "All Rounder")

    def get_info(self):
        return f"{super().get_info()} | {self.get_role()}"
