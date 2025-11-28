	#include <stdio.h>

struct Salary {
    float basic, bonus, deduction;
};

struct Employee {
    int id;
    char name[30];
    struct Salary sal;
};

float netSalary(struct Employee e) {
    return e.sal.basic + e.sal.bonus - e.sal.deduction;
}

void display(struct Employee e) {
    printf("\nID: %d\nName: %s\nNet Salary: %.2f\n",
           e.id, e.name, netSalary(e));
}

int main() {
    struct Employee e = {1, "Ali", {50000, 5000, 2000}};
    display(e);
    return 0;
}

