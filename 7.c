#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    double distance;
    int intersectionPoints = 0;

    // Введення координат та радіусів колів
    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // Обчислення відстані між центрами колів
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Визначення кількості точок перетину
    if (distance == 0) {
        // Кола знаходяться у одній точці
        if (r1 == r2)
            intersectionPoints = -1; // Кола збігаються
        else
            intersectionPoints = 0; // Кола не перетинаються
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не перетинаються
        intersectionPoints = 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються у одній точці
        intersectionPoints = 1;
    } else {
        // Кола перетинаються у двох точках
        intersectionPoints = 2;
    }

    // Виведення результату
    printf("Кількість точок перетину: %d\n", intersectionPoints);

    return 0;
}
