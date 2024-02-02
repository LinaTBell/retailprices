#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;

    // Get input from the user
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    cout << "Enter the sales tax rate: ";
    cin >> salesTaxRate;

    // Calculate selling price, sales tax, and final price
    double sellingPrice = originalPrice + (originalPrice * markupPercentage / 100.0);
    double salesTax = sellingPrice * (salesTaxRate / 100.0);
    double finalPrice = sellingPrice + salesTax;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "\nOriginal price of item: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercentage << "%" << endl;
    cout << "Store's selling price of the item: $" << sellingPrice << endl;
    cout << "Amount of sales tax: $" << salesTax << endl;
    cout << "Final price of the item: $" << finalPrice << endl;

    return 0;
}