#ifndef GIRL_GROUP_H
#define GIRL_GROUP_H

#include <iostream>
#include <vector>
#include <string>

class Person {
    protected:
        std::string id;
        std::string name;
        int age;
    public:
        Person() : id(""), name(""), age(0) {} 
        Person(std::string id, std::string name, int age) : id(id), name(name), age(age) {}
        virtual std::string getInfo() {
            return "ID: " + id + " | Name: " + name + " | Age: " + std::to_string(age);
        }
    };

// Komponen Posisi
class Position {
protected:
    std::string role;
public:
    Position(std::string role) : role(role) {}
    std::string getRole() { return "Role: " + role; }
};

// Anggota Girl Group
class Member : public virtual Person { //  Virtual Inheritance
public:
    Member(std::string id, std::string name, int age) : Person(id, name, age) {}
    std::string getInfo() override { return "Member - " + Person::getInfo(); }
};

// Leader (Hierarchical Inheritance)
class Leader : public Member {
public:
    Leader(std::string id, std::string name, int age) : Member(id, name, age) {}
    std::string getInfo() override { return "Leader - " + Member::getInfo(); }
};

// Main Vocal (Multiple Inheritance)
class MainVocal : public virtual Member, public Position { //  Virtual Inheritance
public:
    MainVocal(std::string id, std::string name, int age)
        : Member(id, name, age), Position("Main Vocal") {}
    std::string getInfo() { return Member::getInfo() + " | " + Position::getRole(); }
};

// Main Dancer (Multiple Inheritance)
class MainDancer : public virtual Member, public Position { //  Virtual Inheritance
public:
    MainDancer(std::string id, std::string name, int age)
        : Member(id, name, age), Position("Main Dancer") {}
    std::string getInfo() { return Member::getInfo() + " | " + Position::getRole(); }
};

// Main Rapper (Multiple Inheritance)
class MainRapper : public virtual Member, public Position { //  Virtual Inheritance
public:
    MainRapper(std::string id, std::string name, int age)
        : Member(id, name, age), Position("Main Rapper") {}
    std::string getInfo() { return Member::getInfo() + " | " + Position::getRole(); }
};

// All-Rounder (Hybrid Inheritance)
class AllRounder : public MainVocal, public MainDancer, public MainRapper {
public:
    AllRounder(std::string id, std::string name, int age)
        : Person(id, name, age), Member(id, name, age), 
          MainVocal(id, name, age), MainDancer(id, name, age), MainRapper(id, name, age) {}

    std::string getInfo() { return "All-Rounder - " + MainVocal::getInfo(); }
};

// Girl Group (Composition + Array of Objects)
class GirlGroup {
private:
    std::string groupName;
    std::vector<Member*> members;
public:
    GirlGroup(std::string name) : groupName(name) {}
    void addMember(Member* member) { members.push_back(member); }
    void showGroup() {
        std::cout << "\n+---------------------------------------------+\n";
        std::cout << "Girl Group: " << groupName << "\n";
        std::cout << "+---------------------------------------------+\n";
        for (auto member : members) {
            std::cout << "  " << member->getInfo() << "\n";
        }
        std::cout << "+---------------------------------------------+\n";
    }
};

#endif
