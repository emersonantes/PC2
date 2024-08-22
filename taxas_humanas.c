#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Configura a localização para usar a acentuação do sistema

    char opcao;
    int numNascimentos, numObitos, numHabitantes;
    float taxa;

    printf("\n\t Menu - DIGITE (N ou M) PARA CALCULAR \n\n");
    printf("N – A taxa de natalidade \n");
    printf("M – A taxa de mortalidade \n");
    printf("Opção: ");
    scanf("%c", &opcao);

    if (opcao == 'N' || opcao == 'n') {
        printf("Digite o número de crianças nascidas: ");
        scanf("%d", &numNascimentos);
        printf("Digite o número de habitantes: ");
        scanf("%d", &numHabitantes);
        taxa = (numNascimentos * 1000.0) / numHabitantes;
        printf("Taxa de natalidade: %.2f\n", taxa);
    }
    else if (opcao == 'M' || opcao == 'm') {
        printf("Digite o número de óbitos: ");
        scanf("%d", &numObitos);
        printf("Digite o número de habitantes: ");
        scanf("%d", &numHabitantes);
        taxa = (numObitos * 1000.0) / numHabitantes;
        printf("Taxa de mortalidade: %.2f\n", taxa);
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
