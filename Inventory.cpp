
#include "Inventory.h"
#include<iostream>
using namespace std;

//Default constructor, sets the member variables to zero

Inventory::Inventory()
{
   itemNumber = 0;
   quantity = 0;
   cost = 0.0;
   totalCost = 0.0;
}

//Constructor #2 - parameterized.

Inventory::Inventory(int ID, int qty, double c)
{
   if (ID < 0 || qty < 0 || c < 0)
   {
       cout << "Invalid negative input";
       exit(EXIT_FAILURE);
   }
   itemNumber = ID;
   quantity = qty;
   cost = c;
}

//Defining mutator function to set item's ID number with alidation check

void Inventory::setItemNumber(int ID) // V
{

   if (ID < 0)
   {
       cout << "Invalid negative input";
       exit(EXIT_FAILURE);
   }

   itemNumber = ID;
}

//Defining mutator function to set item's quantity with alidation check

void Inventory::setQuantity(int qty) 
{

   if (qty < 0)
   {
       cout << "Invalid negative input";
       exit(EXIT_FAILURE);
   }
  
   quantity = qty;
}

//Defining mutator function to set item's cost with alidation check

void Inventory::setCost(double c) 
{

   if (c < 0)
   {
       cout << "Invalid negative input";
       exit(EXIT_FAILURE);
   }
  
   cost = c;
}

//Function to calculate the total inventory cost of an item.
void Inventory::setTotalCost()
{
   totalCost = quantity * cost;
}

//Defining accessor function

int Inventory::getItemNumber()
{
   return itemNumber;
}

int Inventory::getQuantity()
{
   return quantity;
}

double Inventory::getCost()
{
   return cost;
}

double Inventory::getTotalCost()
{
   return totalCost;
}