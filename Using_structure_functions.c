#include <stdio.h>

struct CompanyProfile {
    char company[50];
    int age;
};

char* oldest(struct CompanyProfile profiles[], int n) {
    int max = profiles[0].age;
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (profiles[i].age > max) {
            max = profiles[i].age;
            index = i;
        }
    }
    return profiles[index].company;
}

float average_age(struct CompanyProfile profiles[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += profiles[i].age;
    }
    return (float)total / n;
}

int main() {
    int n;
    scanf("%d", &n);

    struct CompanyProfile profiles[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", profiles[i].company);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &profiles[i].age);
    }

    printf("%s\n", oldest(profiles, n));
    printf("%.2f", average_age(profiles, n));

    return 0;
}