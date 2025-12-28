#include <stdio.h>

int main() {
    double iznos;
    int izbor;
    double rezultat;

    printf("Unesite iznos u evrima: ");
    scanf("%lf", &iznos);

    printf("Izaberite valutu za konverziju:\n");
    printf("1. Dinar (RSD)\n");
    printf("2. Dolari (USD)\n");
    printf("3. Funti (GBP)\n");
    printf("4. Švajcarski franak (CHF)\n");

    printf("Vas izbor: ");
    scanf("%d", &izbor);

    switch(izbor) {
        case 1:
            rezultat = iznos * 117.5;
            printf("%.2lf EUR = %.2lf RSD\n", iznos, rezultat);
            break;
        case 2:
            rezultat = iznos * 1.1;
            printf("%.2lf EUR = %.2lf USD\n", iznos, rezultat);
            break;
        case 3:
            rezultat = iznos * 0.88;
            printf("%.2lf EUR = %.2lf GBP\n", iznos, rezultat);
            break;
        case 4:
    rezultat = iznos * 0.97; // EUR -> CHF
   printf("%.2lf EUR = %.2lf CHF (Švajcarski franak)\n", iznos, rezultat);

    break;
        default:
            printf("Nepoznat izbor!\n");
    }

    return 0;
}
