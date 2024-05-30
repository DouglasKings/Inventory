#include <stdio.h>

//Function prototype
double calculateAverageInventory(double Beverages, double Furniture, double Oil, double Stationery);
double calculateInventoryTurnover(double costOfGoodsSold, double averageInventory);

int main(){

    double Beverages, Furniture, Oil, Stationery, costOfGoodsSold, averageInventory, inventoryTurnover;

    printf("Enter the beverages amount: ");
    scanf("%lf", &Beverages);
    printf("Enter the furniture amount: ");
    scanf("%lf", &Furniture);
    printf("Enter the oil amount: ");
    scanf("%lf", &Oil);
    printf("Enter the stationery amount: ");
    scanf("%lf", &Stationery);
    printf("Enter the cost of goods sold: ");
    scanf("%lf", &costOfGoodsSold);

    averageInventory = calculateAverageInventory(Beverages, Furniture, Oil, Stationery);
    inventoryTurnover = calculateInventoryTurnover(costOfGoodsSold, averageInventory);

    printf("The beverages amount is: %.2lf \n", Beverages);
    printf("The furniture amount is: %.2lf \n", Furniture);
    printf("The oil amount is: %.2lf \n", Oil);
    printf("The stationery amount is: %.2lf \n", Stationery);
    printf("The cost of goods sold is: %.2lf \n", costOfGoodsSold);
    printf("The average inventory is: %.2lf \n", averageInventory);
    printf("The inventory turnover ratio is: %.2lf \n", inventoryTurnover);

    return 0;
}

double calculateAverageInventory(double Beverages, double Furniture, double Oil, double Stationery){
    return (Beverages + Furniture + Oil + Stationery)/4;
}
double calculateInventoryTurnover(double costOfGoodsSold, double averageInventory){
    return costOfGoodsSold / averageInventory;
}