from Leader import Leader
from MainVocal import MainVocal
from MainDancer import MainDancer
from MainRapper import MainRapper
from AllRounder import AllRounder
from GirlGroup import GirlGroup

def main():
    # Membuat objek Girl Group
    gg = GirlGroup("Momen Ketika")

    # Membuat anggota grup
    leader = Leader("1", "Kim Chae-won", 24)
    main_vocal = MainVocal("2", "Oh Hae-won", 22)
    main_dancer = MainDancer("3", "Kang Hae-rin", 19)
    main_rapper = MainRapper("4", "Kim Ga-eul", 23)
    all_rounder = AllRounder("5", "Seol Yoon-ah", 21)

    # Menambahkan anggota ke dalam grup
    gg.add_member(leader)
    gg.add_member(main_vocal)
    gg.add_member(main_dancer)
    gg.add_member(main_rapper)
    gg.add_member(all_rounder)

    # Menampilkan daftar anggota grup
    gg.show_group()

if __name__ == "__main__":
    main()
