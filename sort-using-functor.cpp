#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

struct Student {
    std::string name;
    double grade;

    friend std::ostream& operator<<(std::ostream& out, const Student& stud);
    
};

std::ostream& operator<<(std::ostream& out, const Student& stud) {
        out << stud.name << ": " << stud.grade;
        return out;
    }

bool compare(const Student& a, const Student& b) {
    if (a.grade == b.grade) {
        return a.name < b.name;
    }
    return a.grade < b.grade;
}

int main() {
    std::vector<Student> roster{Student{"Bob", 73.4},
                                Student{"Snoopy", 68.0},
                                Student{"Lucy", 88.0},
                                Student{"Linus", 97.4},
                                Student{"Charlie", 90.0}};

    std::sort(roster.begin(), roster.end(), compare);

    for (auto item: roster) {
        std::cout << item << "\n";
    }
    
    return 0;
}