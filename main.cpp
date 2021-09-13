
#include "Inventory.h"
#include<iostream>
using namespace std;

int main()
{
  //Demonstrate class by pre-setting three objects.  
  Inventory hammer(1, 23, 19.99);
  Inventory nails(2, 999, 4.99);
  Inventory screwdriver(3, 24, 12.99);

  //Demonstrate the details of the object hammer
   cout<< "\nHere's what we got for the hammer object:\n";
   cout << "\nItem number :" << hammer.getItemNumber();
   cout << "\nCost: " << hammer.getCost();
   hammer.setTotalCost();
   cout << "\nTotal Cost: " << hammer.getTotalCost() << "\n";

  //Demonstrate the details of the object nails
   cout<< "\nHere's what we got for the nails object:\n";
   cout << "\nItem number: " << nails.getItemNumber();
   cout << "\nCost: " << nails.getCost();
   nails.setTotalCost();
   cout << "\nTotal Cost: " << nails.getTotalCost() << "\n";;

  //Demonstrate the details of the object screwdriver
   cout<< "\nHere's what we got for the screwdriver object:\n";
   cout << "\nItem number: " << screwdriver.getItemNumber();
   cout << "\nCost: " << screwdriver.getCost();
   screwdriver.setTotalCost();
   cout << "\nTotal Cost: " << screwdriver.getTotalCost() << "\n";;

  //Update the details for the screwdriver object
   screwdriver.setItemNumber(555);
   screwdriver.setQuantity(20);
   screwdriver.setCost(19.95);
  
  //Demonstrate the updated details of the object screwdriver
   cout << "\nUpdated detils of the screwdriver object:";
   cout << "\nItem number:" << screwdriver.getItemNumber();
   cout << "\nCost:" << screwdriver.getCost();
   screwdriver.setTotalCost();
   cout << "\nTotal Cost:" << screwdriver.getTotalCost() <<endl;
   
   return 0;
}