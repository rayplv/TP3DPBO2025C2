class GirlGroup:
    def __init__(self, group_name):
        self.group_name = group_name
        self.members = []

    def add_member(self, member):
        self.members.append(member)

    def show_group(self):
        print(f"\n+---------------------------------------------+")
        print(f"Girl Group: {self.group_name}")
        print(f"+---------------------------------------------+")
        for member in self.members:
            print(f"  {member.get_info()}")
        print(f"+---------------------------------------------+\n")
