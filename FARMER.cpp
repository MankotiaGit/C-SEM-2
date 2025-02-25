#include <iostream>
using namespace std;
int main() 
{
    double price_apple = 5.56;
    double price_orange = 7.85;
    double price_mango = 4.23;
    int qty_apple = 20;
    int qty_orange = 20;
    int qty_mango = 10;
    double distance_km = 5;
    double cost_per_km = 2;
    double transport_cost = distance_km * cost_per_km;
    double total_cost = (qty_apple * price_apple) + (qty_orange * price_orange) + (qty_mango * price_mango);
    total_cost += transport_cost;
    double profit = total_cost * 0.10;
    double final_price = total_cost + profit;
    cout << "Total cost including transportation: " << total_cost << " rupees" << endl;
    cout << "Total price to earn 10% profit: " << final_price << " rupees" << endl;
    return 0;
}
