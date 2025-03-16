#include "GirlGroup.h"

int main() {
    // Membuat objek Girl Group
    GirlGroup gg("Star Girls");

    // Membuat anggota grup
    Leader leader("001", "Sana", 24);
    MainVocal vocal("002", "Jisoo", 26);
    MainDancer dancer("003", "Lisa", 27);
    MainRapper rapper("004", "Jennie", 28);
    AllRounder allRounder("005", "Karina", 23);

    // Menambahkan anggota ke dalam grup
    gg.addMember(&leader);
    gg.addMember(&vocal);
    gg.addMember(&dancer);
    gg.addMember(&rapper);
    gg.addMember(&allRounder);

    // Menampilkan daftar anggota grup
    gg.showGroup();

    return 0;
}
